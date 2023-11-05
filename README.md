# cpp-cmake-boilerplate

C++ project with VSCode on Windows

## Prerequisites

- Development on Windows
- Development with VSCode
- Installation of one of the following compilers:
  - VisualStudio (Verified to work with 2019)
  - Clang
  - GCC (mingw)

## Building in VSCode

- Install the CMake Tools extension.
- Install the C/C++ extension.
- Configure your settings.
- Open your CMake project in VSCode.
- Use the CMake Tools commands.
  - Press `Ctrl+Shift+P`.
  - Execute `CMake: Select Variant` and choose `Debug` to start debugging.
    - If you want to build in release mode, select `Release`.

## Building in WSL (Windows Subsystem for Linux)

- Install cmake (Ubuntu)
  - `sudo apt update`
  - `sudo apt install build-essential cmake`
- After moving to the root folder of the project, perform the following:
  - `mkdir build`
  - `cd build`
  - `cmake -DCMAKE_BUILD_TYPE=Release ..`
    - The above is for release mode.
  - `make`
    - The executable will be generated as `build/my-executable/MyExecutable`.
