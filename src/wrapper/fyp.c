#include <stdio.h>

#include "c_api.h"  // tensorflow
#include "ctypes_cstubs_internals.h"

#include <caml/mlvalues.h>
#include <caml/alloc.h>

extern value FYP__TF_Buffer_to_caml_string(value v1)
{
  fputs("[BLA] You are calling me", stderr);
  fflush(stderr);
  TF_Buffer *t = (void*) CTYPES_TO_PTR(v1);
  TF_Buffer buffer = TF_GetBuffer(t);
  return caml_alloc_initialized_string(buffer.length, buffer.data);
}
