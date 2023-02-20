#ifndef clox_chunk_h
#define clox_chunk_h

#include "common.h"
#include "value.h"

typedef enum {
  OP_CONSTANT,
  OP_RETURN
} OpCode;

typedef struct {
  int count;
  int capacity;
  uint8_t *code;

  //TODO: Use run-length encoding to make this memory efficient.
  int *lines;

  ValueArray constants;
} Chunk;

void initChunk(Chunk *chunk);
void freeChunk(Chunk *chunk);
void writeChunk(Chunk *chunk, uint8_t byte, int line);

// TODO: Implement ability to add constants bigger than one byte.
int addConstant(Chunk *chunk, Value value);

#endif // !clox_chunk_h
