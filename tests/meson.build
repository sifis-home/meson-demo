e = executable('foo-lifecycle',
  'foo-lifecycle.c',
  include_directories: incs, # Directories to be included when building the executable
  dependencies: foo_dep # Libraries to be linked at the executable
)

test('foo allocation and deallocation', e)
