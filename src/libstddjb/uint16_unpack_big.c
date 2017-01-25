/* ISC license. */

#include <stdint.h>
#include <skalibs/uint16.h>
#include <skalibs/bytestr.h>

void uint16_unpack_big (char const *s, uint16_t *u)
{
  uint16_t r = T8((unsigned char)s[0]) ; r <<= 8 ;
  r += T8((unsigned char)s[1]) ;
  *u = r ;
}
