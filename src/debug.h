#ifndef clox_debug_h
#define clox_debug_h

#include "chunk.h"

void dissasembleChunk(Chunk *chunk, const char *name);
int disassembleInstruction(Chunk *chunk, int offset);

#endif