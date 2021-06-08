/* General purpose Reed-Solomon decoder for 8-bit symbols or less
 * Copyright 2003 Phil Karn, KA9Q
 * May be used under the terms of the GNU Lesser General Public License (LGPL)
 */

#ifdef DEBUG
#include <stdio.h>
#endif

#include <string.h>
#include <stdlib.h>
#include "char.h"
#include "rs-common.h"

int decode_rs_char(void* p, data_t* data, int* eras_pos, int no_eras)
{
    int        retval;
    struct rs* rs = (struct rs*)p;

    data_t* lambda = (data_t*)malloc(NROOTS + 1);
    data_t* s      = (data_t*)malloc(NROOTS); /* Err+Eras Locator poly and syndrome poly */
    data_t* b      = (data_t*)malloc(NROOTS + 1);
    data_t* t      = (data_t*)malloc(NROOTS + 1);
    data_t* omega  = (data_t*)malloc(NROOTS + 1);
    data_t* root   = (data_t*)malloc(NROOTS);
    data_t* reg    = (data_t*)malloc(NROOTS + 1);
    data_t* loc    = (data_t*)malloc(NROOTS);

#include "decode_rs.h"

    free(lambda);
    free(s);
    free(b);
    free(t);
    free(omega);
    free(root);
    free(reg);
    free(loc);
    return retval;
}
