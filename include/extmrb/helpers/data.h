#ifndef EXTMRB_HELPERS_MEMORY_H
#define EXTMRB_HELPERS_MEMORY_H

#include <mruby.h>
#include <mruby/data.h>

inline static void
extmrb_data_cleanup(mrb_state *mrb, mrb_value self, void (*dfree)(mrb_state *mrb, void*)) {
  void *ptr = DATA_PTR(self);
  if (ptr) {
    dfree(mrb, ptr);
    DATA_PTR(self) = NULL;
    DATA_TYPE(self) = NULL;
  }
}

#endif
