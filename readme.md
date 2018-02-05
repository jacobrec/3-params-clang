# Using clang for analysis

This is two ways to check for functions which have more then 3 parameters.
Instructions can be found in the readmes within each folder
# tool
In this folder, clang's libtooling was used to find and warn about functions with more then 3 parameters

# tidy-checker
In this folder, a static analysis tool was build to be used with clang-tidy to warn you if you have messy functions with more then 3 parameters
