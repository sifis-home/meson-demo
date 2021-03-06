# meson-demo

A simple library and executable demo built with [meson](https://mesonbuild.com/)
to explain and demonstrate the `C` workflow described in deliverable 2.2.

## Building

1. Make sure you have `gcc` `python3-setuptools` and `python3-wheel`
packages installed on your system

2. Install Meson, Ninja and gcovr

   ```console
   pip3 install meson ninja gcovr
   ```

3. Run following

   ```console
   # Create a build directory an configure its settings
   meson setup --buildtype release .build-directory

   # Build the project with the platform build system (normally ninja, but could be others)
   meson compile -C .build-directory

   # Create a second build directory for the code coverage
   meson setup -Db_coverage=true .build-directory-coverage

   # Run the tests
   meson test -C .build-directory-coverage

   # Export the code coverage as xml file
   ninja coverage-xml -C .build-directory-coverage

   # Create a third build directory for the address sanitizer instrumented build
   meson setup --buildtype release -Db_sanitize=address -Db_lundef=false .build-directory-asan

   # Run the tests
   meson test -C .build-directory-asan
   ```

## Running test suite with docker-compose

1. Install `Docker Engine` on your platform as described [here](https://docs.docker.com/engine/install/)

2. Install `docker-compose` on your platform as described [here](https://docs.docker.com/compose/install/)

3. Run test suite

   ```console
   docker-compose up
   ```

4. Stop the running container

   ```console
   docker-compose down
   ```
