/******************************************************************************
 * Copyright 2008-2013 by Aerospike.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy 
 * of this software and associated documentation files (the "Software"), to 
 * deal in the Software without restriction, including without limitation the 
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or 
 * sell copies of the Software, and to permit persons to whom the Software is 
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in 
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 *****************************************************************************/

#include <aerospike/as_stringmap.h>

#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#include <aerospike/as_val.h>
#include <aerospike/as_integer.h>
#include <aerospike/as_string.h>
#include <aerospike/as_bytes.h>
#include <aerospike/as_list.h>
#include <aerospike/as_map.h>

/******************************************************************************
 * SETTER FUNCTIONS
 *****************************************************************************/

/**
 * Set the specified key's value to an as_val.
 */
extern inline int as_stringmap_set(as_map * m, const char * k, as_val * v);

/**
 * Set the specified key's value to an int64_t.
 */
extern inline int as_stringmap_set_int64(as_map * m, const char * k, int64_t v);

/**
 * Set the specified key's value to a NULL terminated string.
 */
extern inline int as_stringmap_set_str(as_map * m, const char * k, const char * v);

/**
 * Set the specified key's value to an as_integer.
 */
extern inline int as_stringmap_set_integer(as_map * m, const char * k, as_integer * v);
/**
 * Set the specified key's value to an as_string.
 */
extern inline int as_stringmap_set_string(as_map * m, const char * k, as_string * v);

/**
 * Set the specified key's value to an as_bytes.
 */
extern inline int as_stringmap_set_bytes(as_map * m, const char * k, as_bytes * v);

/**
 * Set the specified key's value to an as_list.
 */
extern inline int as_stringmap_set_list(as_map * m, const char * k, as_list * v);

/**
 * Set the specified key's value to an as_map.
 */
extern inline int as_stringmap_set_map(as_map * m, const char * k, as_map * v);

/******************************************************************************
 * GETTER FUNCTIONS
 *****************************************************************************/

/**
 * Get the specified key's value as an as_val.
 */
extern inline as_val * as_stringmap_get(as_map * m, const char * k);

/**
 * Get the specified key's value as an int64_t.
 */
extern inline int64_t as_stringmap_get_int64(as_map * m, const char * k);

/**
 * Get the specified key's value as a NULL terminated string.
 */
extern inline char * as_stringmap_get_str(as_map * m, const char * k);

/**
 * Get the specified key's value as an as_integer.
 */
extern inline as_integer * as_stringmap_get_integer(as_map * m, const char * k);

/**
 * Get the specified key's value as an as_string.
 */
extern inline as_string * as_stringmap_get_string(as_map * m, const char * k);

/**
 * Get the specified key's value as an as_bytes.
 */
extern inline as_bytes * as_stringmap_get_bytes(as_map * m, const char * k);

/**
 * Get the specified key's value as an as_list.
 */
extern inline as_list * as_stringmap_get_list(as_map * m, const char * k);

/**
 * Get the specified key's value as an as_map.
 */
extern inline as_map * as_stringmap_get_map(as_map * m, const char * k);

