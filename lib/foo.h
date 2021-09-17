#ifndef FOO_H
#define FOO_H

typedef struct FOO_Object {
    int *foo_values;
} FOO_Object;

// Create a new FOO_Object
FOO_Object foo_new();

// Destroy a FOO_Object
void foo_destroy(FOO_Object foo);

#endif
