# C files contained in the directory
cli_src = files('main.c')

# Create a new executable
foo_cli = executable(
    'foo-cli', # Executable name
    cli_src, # Executable files
    install: true, # Install the executable in some default filesystem positions
    include_directories: incs, # Directories to be included when building the executable
    dependencies: foo_dep # Libraries to be linked at the executable
)
