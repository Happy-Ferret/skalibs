/* ISC license. */

#include <sys/types.h>
#include <stdint.h>
#include <skalibs/uint32.h>
#include <skalibs/bytestr.h>
#include <skalibs/fmtscan.h>

size_t ip4_scanlist_u32 (uint32_t *out, size_t max, char const *s, size_t *num)
{
  size_t n = 0, w = 0 ;
  for (; s[w] && (n < max) ; n++)
  {
    register size_t i = ip4_scanu32(s + w, out + n) ;
    if (!i) break ;
    w += i ;
    while (byte_chr(",:; \t\r\n", 7, s[w]) < 7) w++ ;
  }
  *num = n ;
  return w ;
}
