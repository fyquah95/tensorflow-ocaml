#include "c_api.h"  // tensorflow
#include "ctypes_cstubs_internals.h"

#include <caml/mlvalues.h>
#include <caml/alloc.h>

extern value FYP__TF_Buffer_to_caml_string(value v1)
{
  TF_Buffer *t = (void*) CTYPES_ADDR_OF_FATPTR(v1);
  return caml_alloc_initialized_string(t->length, t->data);
}
