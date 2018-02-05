This uses static analysis with clang to determine if functions have more then 3 parameters. This is run as part of clang-tidy

# Build instructions
1. Clone the project somewhere
1. navigate to llvm/tools/clang/tools/extra/clang-tidy
2. run the command `./add_new_check.py misc three-param-max`
3. copy the files ThreeParamMaxChecker.cpp and .h into llvm/tools/clang/extra/clang-tidy/misc
4. run with `clang-llvm/build/bin/clang-tidy -checks='-*,misc-three-param-max' FILE_NAME.cpp --`
