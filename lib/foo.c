#include <stdlib.h>

#include "foo.h"

#define N_ELEMENTS 10

FOO_Object foo_new() {
    FOO_Object foo;
    int *foo_values = malloc(N_ELEMENTS * sizeof(*foo_values));
    foo.foo_values = foo_values;
    return foo;
}

void foo_destroy(FOO_Object foo) {
    free(foo.foo_values);
}
