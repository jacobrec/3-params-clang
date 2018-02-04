set(LLVM_LINK_COMPONENTS
  Support
  )

add_clang_executable(3-params
    Param3Max.cpp
  )

target_link_libraries(3-params
  PRIVATE
  clangAST
  clangASTMatchers
  clangBasic
  clangFrontend
  clangTooling
  clangToolingRefactor
  )
