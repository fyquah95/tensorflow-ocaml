#include "c_api.h"  // tensorflow

extern const void * TF_BufferData(TF_Buffer *t)
{
  return t->data;
}

extern size_t TF_BufferLength(TF_Buffer *t)
{
  return t->length;
}
