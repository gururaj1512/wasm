#include <emscripten.h>
#include <stdlib.h>


typedef struct
{
    int a;
    int b;
    float c;
} pair;

int main() { return 0; }

EMSCRIPTEN_KEEPALIVE
float computeSum(pair *p) {
    return (float)(p->a + p->b) + p->c;
}

EMSCRIPTEN_KEEPALIVE
void *wasmmalloc(int size)
{
    return malloc(size);
}

EMSCRIPTEN_KEEPALIVE
void wasmfree(void *ptr)
{
    free(ptr);
}
