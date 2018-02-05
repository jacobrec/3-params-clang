This uses libtooling to walk the ast and find all function declarations. It then checks the number of parameters on each function and if it is more then 3, it reports on it.



# Build instructions
1. Clone project to llvm/tools/clang/tools/extra
2. Navigate to llvm/tools/clang/tools/extra
3. Add the line "add_subdirectory(3-params-max)" to CMakeLists.txt
4. Copy the contents of this directory to llvm/tools/clang/tools/extra/3-param-max
5. Navigate into the folder llvm/build
6. Build the 3-params-max tool using your build tool of choice, eg) `ninja 3-params`
7. run with `clang-llvm/build/bin/3-params FILE_HERE.cpp --` to check a file
