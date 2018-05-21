#include <stdio.h>
#include <string.h>

#include "c_api.h"  // tensorflow

extern const void TF_BufferCopyData(TF_Buffer *t, char* dest)
{
  memcpy(dest, t->data, t->length);
}

extern size_t TF_BufferLength(TF_Buffer *t)
{
  return t->length;
}
