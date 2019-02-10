//
//	CHRandomTests+Integers.h
//	CHRandomKit
//
//	Created by Christian Huxtable, February 2019.
//	Copyright (c) 2019, Christian Huxtable <chris@huxtable.ca>
//
//	Permission to use, copy, modify, and/or distribute this software for any
//	purpose with or without fee is hereby granted, provided that the above
//	copyright notice and this permission notice appear in all copies.
//
//	THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
//	WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
//	MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
//	ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
//	WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
//	ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
//	OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
//

@import XCTest;

#import "CHRandomKit/CHRandom.h"


#define COUNT 1000000


#pragma mark - Functions

double averageInteger(NSInteger const *array, size_t const length);
BOOL containsInteger(NSInteger const *array, size_t const length, NSInteger needle);

double averageUnsignedInteger(NSUInteger const *array, size_t const length);
BOOL containsUnsignedInteger(NSUInteger const *array, size_t const length, NSUInteger needle);

double averageInteger(NSInteger const *array, size_t const length)
{
	if ( length == 0 ) { return 0; }
	double average = (double)array[0];

	for ( size_t i = 1; i < length; ++i)
	{
		average += (((double)array[i] - average) / (double)(i + 1));
	}

	return average;
}

BOOL containsInteger(NSInteger const *array, size_t const length, NSInteger needle)
{
	if ( length == 0 ) { return NO; }

	for (size_t i = 0; i < length; ++i)
	{
		if ( array[i] == needle ) { return YES; }
	}

	return NO;
}

double averageUnsignedInteger(NSUInteger const *array, size_t const length)
{
	if ( length == 0 ) { return 0; }
	double average = (double)array[0];

	for ( size_t i = 1; i < length; ++i)
	{
		average += (((double)array[i] - average) / (double)(i + 1));
	}

	return average;
}

BOOL containsUnsignedInteger(NSUInteger const *array, size_t const length, NSUInteger needle)
{
	if ( length == 0 ) { return NO; }

	for (size_t i = 0; i < length; ++i)
	{
		if ( array[i] == needle ) { return YES; }
	}

	return NO;
}



@interface CHRandomTests_Integers : XCTestCase
@end

@implementation CHRandomTests_Integers


- (void)testInteger
{
	// TODO: [CHRandom randomInteger];
}

- (void)testIntegerBetweenLowerAndUpperBound
{
	NSInteger array[COUNT];

	// Test Postive Bounds
	{
		for (size_t i = 0; i < COUNT; ++i)
		{
			array[i] = [CHRandom randomIntegerBetweenLower:10 andUpperBound:20];
		}

		double average = averageInteger(array, COUNT);
		XCTAssertEqualWithAccuracy(average, 15.0, 0.1);
	}

	/// Test Negative Bounds
	{
		for (size_t i = 0; i < COUNT; ++i)
		{
			array[i] = [CHRandom randomIntegerBetweenLower:-10 andUpperBound:-20];
		}

		double average = averageInteger(array, COUNT);
		XCTAssertEqualWithAccuracy(average, -15.0, 0.1);
	}

	/// Test Crossing Bounds
	{
		for (size_t i = 0; i < COUNT; ++i)
		{
			array[i] = [CHRandom randomIntegerBetweenLower:-10 andUpperBound:10];
		}

		double average = averageInteger(array, COUNT);
		XCTAssertEqualWithAccuracy(average, 0.0, 0.1);
	}
}


- (void)testUnsignedInteger
{
	// TODO: [CHRandom randomUnsignedInteger];
}

- (void)testUnsignedIntegerWithBound
{
	NSUInteger array[COUNT];

	for ( size_t i = 0; i < COUNT; ++i)
	{
		array[i] = [CHRandom randomUnsignedIntegerWithBound:20];
	}

	double average = averageUnsignedInteger(array, COUNT);
	XCTAssertEqualWithAccuracy(average, 10.0, 0.1);

	XCTAssertTrue(containsUnsignedInteger(array, COUNT, 20));
	XCTAssertTrue(containsUnsignedInteger(array, COUNT, 0));

	XCTAssertFalse(containsUnsignedInteger(array, COUNT, 21));
}

- (void)testUnsignedIntegerBetweenLowerAndUpperBound
{
	NSUInteger array[COUNT];

	for ( size_t i = 0; i < COUNT; ++i)
	{
		array[i] = [CHRandom randomUnsignedIntegerBetweenLower:10 andUpperBound:20];
	}

	double average = averageUnsignedInteger(array, COUNT);

	XCTAssertEqualWithAccuracy(average, 15.0, 0.1);

	XCTAssertTrue(containsUnsignedInteger(array, COUNT, 20));
	XCTAssertTrue(containsUnsignedInteger(array, COUNT, 10));

	XCTAssertFalse(containsUnsignedInteger(array, COUNT, 21));
	XCTAssertFalse(containsUnsignedInteger(array, COUNT, 9));
}

- (void)testUnsignedIntegerInRange
{
	NSUInteger array[COUNT];
	NSRange range = NSMakeRange(10, 10);

	for ( size_t i = 0; i < COUNT; ++i)
	{
		array[i] = [CHRandom randomUnsignedIntegerInRange:range];
	}

	double average = averageUnsignedInteger(array, COUNT);

	XCTAssertEqualWithAccuracy(average, 15.0, 0.1);
}

@end
