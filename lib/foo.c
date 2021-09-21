#include <stdlib.h>
#include <stddef.h>

#include "foo.h"

struct Foo {
    int *buf;
    ptrdiff_t len;
};

#define N_ELEMENTS 10

Foo *foo_new(void) {
    // Use calloc to ensure the fields are 0-initialized so
    // you can pass it to foo_free even if partially allocated.
    Foo *foo = calloc(1, sizeof(*foo));
    if (!foo) {
        foo_free(&foo);
        return NULL;
    }

    foo->buf = calloc(N_ELEMENTS, sizeof(*foo->buf));
    if (!foo->buf) {
        foo_free(&foo);
        return NULL;
    }

    foo->len = N_ELEMENTS;

    return foo;
}

void foo_free(Foo **foo) {
    free((*foo)->buf);
    free((*foo));

    *foo = NULL;
}
