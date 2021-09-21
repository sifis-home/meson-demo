#include <stddef.h>

#include "foo.h"

int main(void) {
    Foo *f = foo_new();
    if (f == NULL)
        return 1;

    foo_free(&f);
    if (f != NULL)
        return 1;

    return 0;
}
