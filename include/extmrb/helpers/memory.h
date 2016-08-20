#ifndef EXTMRB_HELPERS_MEMORY_H
#define EXTMRB_HELPERS_MEMORY_H

#include <memory.h>

inline static void*
extmrb_malloc_set(mrb_state *mrb, int v, size_t size) {
  void *ptr = mrb_malloc(mrb, size);
  memset(ptr, v, size);
  return ptr;
}

inline static void*
extmrb_malloc_setzero(mrb_state *mrb, size_t size) {
  return extmrb_malloc_set(mrb, 0, size);
}

#endif
