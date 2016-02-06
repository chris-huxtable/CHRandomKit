//
//  CHRandom.h
//  CHRandomKit
//
//  Created by Christian Huxtable, October 2015.
//  Copyright (c) 2015, Christian Huxtable <chris@huxtable.ca>
//
//	Permission to use, copy, modify, and/or distribute this software for any
//	purpose with or without fee is hereby granted, provided that the above
//	copyright notice and this permission notice appear in all copies.

//	THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
//	WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
//	MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
//	ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
//	WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
//	ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
//	OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
//

@import Foundation;


/**
 * @author      Christian Huxtable <chris@huxtable.ca>
 * @version     1.0
 * @since       2015-10-15
 */
@interface CHRandom : NSObject
{

}



#pragma mark - Boolean

+ (BOOL)randomBool;



#pragma mark - Floating Point

///---
/// @name Generating Floating Point Values
///---

/** Generates a pseudo-random `float` between 0.0f and 1.0f.
 * @return		A pseudo-random `float` between 0.0f and 1.0f.
 * @since		Available in version 1.0 and later.
 */
+ (float)randomFloat;

/** Generates a pseudo-random `CGFloat` between 0.0 and 1.0.
 * @return		A pseudo-random `CGFloat` between 0.0 and 1.0.
 * @since		Available in version 1.0 and later.
 */
+ (CGFloat)randomCGFloat;

/** Generates a pseudo-random `double` between 0.0 and 1.0.
 * @return		A pseudo-random `double` between 0.0 and 1.0.
 * @since		Available in version 1.0 and later.
 */
+ (double)randomDouble;

/** Generates a pseudo-random `double` between 0.0Ld and 1.0Ld.
 * @return		A pseudo-random `double` between 0.0Ld and 1.0Ld.
 * @since		Available in version 1.0 and later.
 */
+ (long double)randomLongDouble;


#pragma mark - Char

///---
/// @name Generating Char's
///---


/** Generates a pseudo-random `char`.
 * @return		A pseudo-random `char`.
 * @since		Available in version 1.0 and later.
 */
+ (char)randomChar;

/** Generates a pseudo-random `unsigned char`.
 * @return		A pseudo-random `unsigned char`.
 * @since		Available in version 1.0 and later.
 */
+ (unsigned char)randomUnsignedChar;


/** Generates a pseudo-random `char` greater than the lower bound and less than the upper bound.
 * @param lowerBound	The exclusive lower bound for the random `char`.
 * @param upperBound	The exclusive upper bound for the random `char`.
 * @return				A pseudo-random `char` greater than the lower bound and less than the upper bound.
 * @since				Available in version 1.0 and later.
 */
+ (char)randomCharBetweenLower:(char)lowerBound andUpperBound:(char)upperBound;

/** Generates a pseudo-random `unsigned char` less then a given upper bound.
 * @param bound The exclusive upper bound for the random `unsigned char`.
 * @return		A pseudo-random `unsigned char` less then a given upper bound.
 * @since		Available in version 1.0 and later.
 */
+ (unsigned char)randomUnsignedCharWithBound:(unsigned char)bound;



#pragma mark - Short

///---
/// @name Generating Short's
///---


/** Generates a pseudo-random `short`.
 * @return		A pseudo-random `short`.
 * @since		Available in version 1.0 and later.
 */
+ (short)randomShort;

/** Generates a pseudo-random `unsigned short`.
 * @return		A pseudo-random `unsigned short`.
 * @since		Available in version 1.0 and later.
 */
+ (unsigned short)randomUnsignedShort;


/** Generates a pseudo-random `short` greater than the lower bound and less than the upper bound.
 * @param lowerBound	The exclusive lower bound for the random `short`.
 * @param upperBound	The exclusive upper bound for the random `short`.
 * @return				A pseudo-random `short` greater than the lower bound and less than the upper bound.
 * @since				Available in version 1.0 and later.
 */
+ (short)randomShortBetweenLower:(short)lowerBound andUpperBound:(short)upperBound;

/** Generates a pseudo-random `unsigned short` less then a given upper bound.
 * @param bound The exclusive upper bound for the random `unsigned short`.
 * @return		A pseudo-random `unsigned short` less then a given upper bound.
 * @since		Available in version 1.0 and later.
 */
+ (unsigned short)randomUnsignedShortWithBound:(unsigned short)bound;



#pragma mark - Int

///---
/// @name Generating Int's
///---

/** Generates a pseudo-random `int`.
 * @return		A pseudo-random `int`.
 * @since		Available in version 1.0 and later.
 */
+ (int)randomInt;

/** Generates a pseudo-random `unsigned int`.
 * @return		A pseudo-random `unsigned int`.
 * @since		Available in version 1.0 and later.
 */
+ (unsigned int)randomUnsignedInt;


/** Generates a pseudo-random `int` greater than the lower bound and less than the upper bound.
 * @param lowerBound	The exclusive lower bound for the random `int`.
 * @param upperBound	The exclusive upper bound for the random `int`.
 * @return				A pseudo-random `int` greater than the lower bound and less than the upper bound.
 * @since				Available in version 1.0 and later.
 */
+ (int)randomIntBetweenLower:(int)lowerBound andUpperBound:(int)upperBound;

/** Generates a pseudo-random `unsigned int` less then a given upper bound.
 * @param bound The exclusive upper bound for the random `unsigned int`.
 * @return		A pseudo-random `unsigned int` less then a given upper bound.
 * @since		Available in version 1.0 and later.
 */
+ (unsigned int)randomUnsignedIntWithBound:(unsigned int)bound;



#pragma mark - Integer

///---
/// @name Generating Integer's
///---

/** Generates a pseudo-random `NSInteger`.
 * @return		A pseudo-random `NSInteger`.
 * @since		Available in version 1.0 and later.
 */
+ (NSInteger)randomInteger;

/** Generates a pseudo-random `NSUInteger`.
 * @return		A pseudo-random `NSUInteger`.
 ** @since		Available in version 1.0 and later.
 */
+ (NSUInteger)randomUnsignedInteger;


/** Generates a pseudo-random `NSUInteger` greater than the lower bound and less than the upper bound.
 * @param lowerBound	The exclusive lower bound for the random `NSInteger`.
 * @param upperBound	The exclusive upper bound for the random `NSInteger`.
 * @return				A pseudo-random `NSInteger` greater than the lower bound and less than the upper bound.
 * @since				Available in version 1.0 and later.
 */
+ (NSInteger)randomIntegerBetweenLower:(NSInteger)lowerBound andUpperBound:(NSInteger)upperBound;

/** Generates a pseudo-random `NSUInteger` less then a given upper bound.
 * @param bound The exclusive upper bound for the random `NSUInteger`.
 * @return		A pseudo-random `NSUInteger` less then a given upper bound.
 * @since		Available in version 1.0 and later.
 */
+ (NSUInteger)randomUnsignedIntegerWithBound:(NSUInteger)bound;

/** Generates a pseudo-random `NSUInteger` inside a given range.
 * @param range The inclusive range of acceptable values.
 * @return		A pseudo-random `NSUInteger` inside the range.
 * @since		Available in version 1.0 and later.
 */
+ (NSUInteger)randomUnsignedIntegerInRange:(NSRange)range;



#pragma mark - Long

///---
/// @name Generating Long's
///---

/** Generates a pseudo-random `long`.
 * @return		A pseudo-random `long`.
 * @since		Available in version 1.0 and later.
 */
+ (long)randomLong;

/** Generates a pseudo-random `unsigned long`.
 * @return		A pseudo-random `unsigned long`.
 * @since		Available in version 1.0 and later.
 */
+ (unsigned long)randomUnsignedLong;


/** Generates a pseudo-random `long` greater than the lower bound and less than the upper bound.
 * @param lowerBound	The exclusive lower bound for the random `long`.
 * @param upperBound	The exclusive upper bound for the random `long`.
 * @return				A pseudo-random `long` greater than the lower bound and less than the upper bound.
 * @since				Available in version 1.0 and later.
 */
+ (long)randomLongBetweenLower:(long)lowerBound andUpperBound:(long)upperBound;

/** Generates a pseudo-random `NSUInteger` less then a given upper bound.
 * @param bound The exclusive upper bound for the random `NSUInteger`.
 * @return		A pseudo-random `NSUInteger` less then a given upper bound.
 * @since		Available in version 1.0 and later.
 */
+ (unsigned long)randomUnsignedLongWithBound:(unsigned long)bound;



#pragma mark - Long Long

///---
/// @name Generating Long Long's
///---

/** Generates a pseudo-random `long long`.
 * @return		A pseudo-random `long long`.
 * @since		Available in version 1.0 and later.
 */
+ (long long)randomLongLong;

/** Generates a pseudo-random `unsigned long long`.
 * @return		A pseudo-random `unsigned long long`.
 * @since		Available in version 1.0 and later.
 */
+ (unsigned long long)randomUnsignedLongLong;


/** Generates a pseudo-random `long long` greater than the lower bound and less than the upper bound.
 * @param lowerBound	The exclusive lower bound for the random `long long`.
 * @param upperBound	The exclusive upper bound for the random `long long`.
 * @return				A pseudo-random `long long` greater than the lower bound and less than the upper bound.
 * @since				Available in version 1.0 and later.
 */
+ (long long)randomLongLongBetweenLower:(long long)lowerBound andUpperBound:(long long)upperBound;

/** Generates a pseudo-random `unsigned long long` less then a given upper bound.
 * @param bound The exclusive upper bound for the random `unsigned long long`.
 * @return		A pseudo-random `unsigned long long` less then a given upper bound.
 * @since		Available in version 1.0 and later.
 */
+ (unsigned long long)randomUnsignedLongLongWithBound:(unsigned long long)bound;



#pragma mark - Data

///---
/// @name Generating Data
///---

/** Generates a NSData object filled with pseudo-random data of a given length.
 * @param length	The length in bytes of random data to return.
 * @return			A NSData object filled with pseudo-random data of a given length.
 * @since			Available in version 1.0 and later.
 */
+ (NSDate *)randomDataOfLength:(NSUInteger)length;

/** Generates a NSMutableData object filled with pseudo-random data of a given length.
 * @param length	The length in bytes of random data to return.
 * @return			A NSMutableData object filled with pseudo-random data of a given length.
 * @since			Available in version 1.0 and later.
 */
+ (NSMutableData *)randomMutableDataOfLength:(NSUInteger)length;

/** Generates a stream of pseudo-random data of a given length. The result must be eventually freed using `free()`.
 * @param size	The size in bytes of random data to return.
 * @return		A stream of pseudo-random data of a given length
 * @since		Available in version 1.0 and later.
 */
+ (void *)randomBytes:(size_t)size;



#pragma mark - Buffer

///---
/// @name Filling a Buffer
///---

/** Filles a given buffer with pseudo-random data. This method returns by reference.
 * @param buffer	A buffer to place the random data.
 * @param size		The length in bytes of the buffer.
 * @since			Available in version 1.0 and later.
 */
+ (void)fillBuffer:(void *)buffer ofSize:(size_t)size;

@end