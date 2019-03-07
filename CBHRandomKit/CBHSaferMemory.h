//
//	CBHSaferMemory.h
//
//	Created by Christian Huxtable <chris@huxtable.ca>, January 2016.
//	Copyright (c) 2016, Christian Huxtable <chris@huxtable.ca>
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

#pragma once

#ifndef _CBHSaferMemory
#define _CBHSaferMemory

#include <stdlib.h>


#pragma mark - Safer Malloc / Calloc

/** A function that acquires a chunk of memory checking for overflows.
 *
 * @param nmemb			Number of members.
 * @param size			Size of each member.
 * @return				A pointer to a chunk of memory at least nmeb * size in size.
 * @since				Available in version 1.0 and later.
 */
void *CBHSaferMalloc(size_t nmemb, size_t size);

/** A function that acquires a chunk of memory checking for overflows while zeroing it.
 *
 * @param nmemb			Number of members.
 * @param size			Size of each member.
 * @return				A pointer to a chunk of memory at least nmeb * size in size.
 * @since				Available in version 1.0 and later.
 */
void *CBHSaferCalloc(size_t nmemb, size_t size);

/** A function that frees a chunk of memory and sets the pointer to NULL.
 *
 * @param mem			A double pointer to the memory to be freed.
 * @since				Available in version 1.0 and later.
 */
void CBHSaferFree_f(void **mem);

/** A macro that frees a chunk of memory and sets the pointer to NULL.
 *
 * @param mem			A pointer to the memory to be freed.
 * @since				Available in version 1.0 and later.
 */
#define CBHSaferFree(mem) CBHSaferFree_f(&(mem))

/** A function that acquires a chunk of memory checking for overflows. On failure an error is printed to stderr and the program exits.
 *
 * @param nmemb			Number of members.
 * @param size			Size of each member.
 * @param funcName		The name of the calling function.
 * @return				A pointer to a chunk of memory at least nmeb * size in size.
 * @since				Available in version 1.0 and later.
 */
void *CBHSaferMallocOrExit_traceable(size_t nmemb, size_t size, const char *funcName);

/** A function that acquires a chunk of memory checking for overflows while zeroing it. On failure an error is printed to stderr and the program exits.
 *
 * @param nmemb			Number of members.
 * @param size			Size of each member.
 * @param funcName		The name of the calling function.
 * @return				A pointer to a chunk of memory at least nmeb * size in size.
 * @since				Available in version 1.0 and later.
 */
void *CBHSaferCallocOrExit_traceable(size_t nmemb, size_t size, const char *funcName);

/** A macro that acquires a chunk of memory checking for overflows. On failure an error is printed to stderr and the program exits.
 *
 * @param nmemb			Number of members.
 * @param size			Size of each member.
 * @return				A pointer to a chunk of memory at least nmeb * size in size.
 * @since				Available in version 1.0 and later.
 */
#define CBHSaferMallocOrExit(nmemb, size) CBHSaferMallocOrExit_traceable((nmemb), (size), __PRETTY_FUNCTION__)

/** A macro that acquires a chunk of memory checking for overflows while zeroing it. On failure an error is printed to stderr and the program exits.
 *
 * @param nmemb			Number of members.
 * @param size			Size of each member.
 * @return				A pointer to a chunk of memory at least nmeb * size in size.
 * @since				Available in version 1.0 and later.
 */
#define CBHSaferCallocOrExit(nmemb, size) CBHSaferCallocOrExit_traceable((nmemb), (size), __PRETTY_FUNCTION__)

#endif /* _CBHSaferMemory */
