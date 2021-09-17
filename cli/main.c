#include <foo.h>

int main()
{
    // Create a new FOO_Object
    FOO_Object foo = foo_new();

    // Destroy the just created FOO_Object
    foo_destroy(foo);

    return 0;
}
