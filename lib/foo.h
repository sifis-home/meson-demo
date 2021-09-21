#ifndef FOO_H
#define FOO_H

/// Opaque type
typedef struct Foo Foo;

// Create a new Foo
Foo *foo_new();

// Free foo and reset the pointer to NULL
void foo_free(Foo **foo);

#endif
