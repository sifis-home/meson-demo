#include "foo.h"

int main()
{
    // Create a new Foo
    Foo *foo = foo_new();

    // Free the Foo
    foo_free(&foo);

    return 0;
}
