# meson-demo

A simple library and executable demo built with [meson](https://mesonbuild.com/)
to explain and demonstrate the `C` workflow described in deliverable 2.2.

## Building

1. Make sure you have `gcc` `python3-setuptools` and `python3-wheel`
packages installed on your system

2. Install Meson and Ninja

   ```console
   pip3 install meson ninja
   ```

3. Run following

   ```console
   # Create a build directory an configure its settings
   meson setup --buildtype release .build-directory

   # Build the project with the platform build system (normally ninja, could be others)
   meson compile -C .build-directory
   ```
