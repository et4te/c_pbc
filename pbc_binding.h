#include <pbc.h>

// Integer_t

mpz_t*
_integer_new();

void
_integer_free(mpz_t* i);

void
_integer_init(mpz_t* i);

void
_integer_clear(mpz_t* i);

void
_integer_set_si(mpz_t* i, signed long int si);

// Pairing_t

pairing_t*
_pairing_new();

void
_pairing_free(pairing_t*);

void
_pairing_init(pairing_t*, const char*);

// Element_t

element_t*
_element_new();

void
_element_free(element_t* p);

void
_element_init_g1(element_t* e, pairing_t* p);

void
_element_init_g2(element_t* e, pairing_t* p);

void
_element_init_gT(element_t* e, pairing_t* p);

void
_element_init_zr(element_t* e, pairing_t* p);

void
_element_set(element_t* dst, element_t* src);

void
_element_set0(element_t* e);

void
_element_set1(element_t* e);

void
_element_set_si(element_t* e, signed long si);

void
_element_pairing(element_t* out, element_t* lhs, element_t* rhs);

void
_element_from_hash(element_t* e, void* data, int len);

void
_element_add(element_t* e0, element_t* e1, element_t* e2);

void
_element_sub(element_t* e0, element_t* e1, element_t* e2);

void
_element_mul(element_t* e0, element_t* e1, element_t* e2);

int
_element_cmp(element_t* e0, element_t* e1);

void
_element_random(element_t* e);

int
_element_to_bytes(unsigned char* bytes, element_t* e);

int
_element_from_bytes(element_t* e, unsigned char* bytes);

int
_element_length_in_bytes(element_t* e);

int
_element_printf(const char* s, element_t* e);

// ElementPP_t

element_pp_t*
_element_pp_new();

void
_element_pp_free(element_pp_t*);

void
_element_pp_init(element_pp_t*, element_t*);

void
_element_pp_pow(element_t* e, mpz_t* pow, element_pp_t*);

void
_element_pp_pow_zn(element_t* e, element_t* pow, element_pp_t*);

void
_element_pp_clear(element_pp_t*);
