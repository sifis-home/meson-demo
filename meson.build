# Project metadata
project(
    'meson-demo', # Project name
    'c', # Programming language
    license: 'MIT', # Project license
    meson_version: '>= 0.49.0', # Allowed meson versions to build the project
    default_options: ['c_std=c99', 'warning_level=3'], # C language standard to use and warning level
    version: '0.5.2' # Project version
)

# Gets C compiler
c = meson.get_compiler('c')

# Sets compiler flags
cflags = [
    '-pedantic'
]

# Returns an array containing only the arguments supported by the compiler
supported_arguments = c.get_supported_arguments(cflags)

# Adds the positional arguments to the compiler command line
add_project_arguments(supported_arguments, language: 'c')

# Returns an object containing the directories considered in the project
incs = include_directories('.', 'lib', 'cli')

# Enters the specified subdirectories and executes their meson.build file.
subdir('lib')
subdir('cli')
subdir('tests')
