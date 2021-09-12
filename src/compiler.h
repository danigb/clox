#include "chunk.h"
#include "object.h"

#ifndef clox_compiler_h
#define clox_compiler_h

bool compile(const char *source, Chunk *chunk);

#endif