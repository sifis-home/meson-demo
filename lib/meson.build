# C files contained in the directory
lib_src = files(
    'foo.c',
)

# Creates the libfoo library
foo = library(
    'foo', # Library name
    sources: [lib_src], # C source files to build the library
    install: true, # Install the library in some default filesystem positions
    include_directories: incs # Directories to be included when building the library
)

# Creates a new dependency object.
# The object allows the foo library to be linked with external executables or 
# libraries, practically this object treats the foo library as a dependency
foo_dep = declare_dependency(
    link_with: foo, # Name of the library that needs to be linked
    include_directories: incs, # Directories to be included when linking the library
)
