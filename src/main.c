#include "common.h"
#include "chunk.h"
#include "debug.h"

int main(int argc, const char *argv[])
{
    Chunk chunk;
    initChunk(&chunk);
    writeChunk(&chunk, OP_RETURN);

    dissasembleChunk(&chunk, "Test");

    freeChunk(&chunk);

    return 0;
}