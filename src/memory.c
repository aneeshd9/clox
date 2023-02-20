#include <stdlib.h>

#include "memory.h"

void* reallocate(void* pointer, size_t oldSize, size_t newSise) {
  if (newSise == 0) {
    free(pointer);
    return NULL;
  }

  void* result = realloc(pointer, newSise);
  if (result == NULL) exit(1);
  return result;
}
