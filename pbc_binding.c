#include "pbc_binding.h"

// Integer_t

mpz_t*
_integer_new()
{
  mpz_t* i = (mpz_t*) malloc(sizeof(mpz_t));
  return i;
}

void
_integer_free(mpz_t* i)
{
  free(i);
}

void
_integer_init(mpz_t* i)
{
  mpz_init(*i);
}

void
_integer_clear(mpz_t* i)
{
  mpz_clear(*i);
}

unsigned long int
_integer_get_ui(mpz_t* i)
{
  return mpz_get_ui(*i);
}

signed long int
_integer_get_si(mpz_t* i)
{
  return mpz_get_si(*i);
}

void
_integer_set_si(mpz_t* i, signed long int si)
{
  mpz_set_si(*i, si);
}

// Pairing_t

pairing_t*
_pairing_new()
{
  pairing_t* p = (pairing_t*) malloc(sizeof(pairing_t));
  return p;
}

void
_pairing_free(pairing_t* p)
{
  free(p);
}

void
_pairing_init(pairing_t* p, const char* param)
{
  pairing_init_set_str(*p, param);
}

// Element_t

element_t*
_element_new()
{
  element_t* p = (element_t*) malloc(sizeof(element_t));
  return p;
}

void
_element_free(element_t* p)
{
  free(p);
}

void
_element_init_g1(element_t* e, pairing_t* p)
{
  element_init_G1(*e, *p);
}

void
_element_init_g2(element_t* e, pairing_t* p)
{
  element_init_G2(*e, *p);  
}

void
_element_init_gt(element_t* e, pairing_t* p)
{
  element_init_GT(*e, *p);  
}

void
_element_init_zr(element_t* e, pairing_t* p)
{
  element_init_Zr(*e, *p);
}

void
_element_set(element_t* dst, element_t* src)
{
  element_set(*dst, *src);
}

void
_element_set0(element_t* e)
{
  element_set0(*e);
}

void
_element_set1(element_t* e)
{
  element_set1(*e);
}

void
_element_set_si(element_t* e, signed long si)
{
  element_set_si(*e, si);
}

void
_element_pairing(element_t* out, element_t* lhs, element_t* rhs)
{
  element_pairing(*out, *lhs, *rhs);
}

void
_element_to_integer(mpz_t* i, element_t* e)
{
  element_to_mpz(*i, *e);
}

void
_element_from_hash(element_t* e, void* data, int len)
{
  element_from_hash(*e, data, len);
}

void
_element_add(element_t* e0, element_t* e1, element_t* e2)
{
  element_add(*e0, *e1, *e2);
}

void
_element_sub(element_t* e0, element_t* e1, element_t* e2)
{
  element_sub(*e0, *e1, *e2);
}

void
_element_mul(element_t* e0, element_t* e1, element_t* e2)
{
  element_mul(*e0, *e1, *e2);
}

void
_element_mul_si(element_t* e0, element_t* e1, signed long si)
{
  element_mul_si(*e0, *e1, si);
}

void
_element_mul_zn(element_t* e0, element_t* e1, element_t* e2)
{
  element_mul_zn(*e0, *e1, *e2);
}

void
_element_div(element_t* e0, element_t* e1, element_t* e2)
{
  element_div(*e0, *e1, *e2);
}

void
_element_double(element_t* e0, element_t* e1)
{
  element_double(*e0, *e1);
}

void
_element_halve(element_t* e0, element_t* e1)
{
  element_halve(*e0, *e1);
}

void
_element_square(element_t* e0, element_t* e1)
{
  element_square(*e0, *e1);
}

void
_element_neg(element_t* e0, element_t* e1)
{
  element_neg(*e0, *e1);
}

void
_element_invert(element_t* e0, element_t* e1)
{
  element_invert(*e0, *e1);
}

int
_element_cmp(element_t* e0, element_t* e1)
{
  return element_cmp(*e0, *e1);
}

void
_element_random(element_t* e)
{
  element_random(*e);
}

int
_element_to_bytes(unsigned char* bytes, element_t* e)
{
  return element_to_bytes(bytes, *e);
}

int
_element_from_bytes(element_t* e, unsigned char* bytes)
{
  return element_from_bytes(*e, bytes);
}

int
_element_length_in_bytes(element_t* e)
{
  return element_length_in_bytes(*e);
}

int
_element_printf(const char* s, element_t* e)
{
  return element_printf(s, *e);
}

// ElementPP_t

element_pp_t*
_element_pp_new()
{
  element_pp_t* pp = (element_pp_t*) malloc(sizeof(element_pp_t));
  return pp;
}

void
_element_pp_free(element_pp_t* pp)
{
  free(pp);
}

void
_element_pp_init(element_pp_t* pp, element_t* e)
{
  element_pp_init(*pp, *e);
}

void
_element_pp_pow(element_t* e, mpz_t* pow, element_pp_t* pp)
{
  element_pp_pow(*e, *pow, *pp);
}

void
_element_pp_pow_zn(element_t* e, element_t* pow, element_pp_t* pp)
{
  element_pp_pow_zn(*e, *pow, *pp);
}

void
_element_pp_clear(element_pp_t* pp)
{
  element_pp_clear(*pp);
}

