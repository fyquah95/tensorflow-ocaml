#include <stdio.h>

#include "c_api.h"  // tensorflow
#include "ctypes_cstubs_internals.h"

#include <caml/mlvalues.h>
#include <caml/alloc.h>

extern value FYP__TF_Buffer_to_caml_string(void* v1)
{
  fputs("[BLA] You are calling me as if i am a raw pointer\n", stderr);
  fflush(stderr);
  // TF_Buffer *t = (void*) CTYPES_ADDR_OF_FATPTR(v1);
  TF_Buffer *t = v1;
  return caml_alloc_initialized_string(t->length, t->data);
}
