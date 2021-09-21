# Create a new executable object to test the library
exe = executable(
  'foo-lifecycle', # Executable name
  'foo-lifecycle.c', # Tests source file
  include_directories: incs, # Directories to be included when building the executable
  dependencies: foo_dep # Libraries to be linked at the executable
)

# Create a test that run all tests contained in the executable produced above
test(
  'foo allocation and deallocation', # Test name
  exe # Executable object
)
