//===--- ThreeParamMaxCheck.cpp - clang-tidy-------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#include "ThreeParamMaxCheck.h"
#include "clang/AST/ASTContext.h"
#include "clang/ASTMatchers/ASTMatchFinder.h"

using namespace clang::ast_matchers;

namespace clang {
namespace tidy {
namespace misc {

void ThreeParamMaxCheck::registerMatchers(MatchFinder *Finder) {
  // FIXME: Add matchers.
  Finder->addMatcher(functionDecl().bind("x"), this);
}

void ThreeParamMaxCheck::check(const MatchFinder::MatchResult &Result) {
  // FIXME: Add callback implementation.

  const auto *MatchedDecl = Result.Nodes.getNodeAs<FunctionDecl>("x");

  if (MatchedDecl->getNumParams() <= 3){
    return;
  }

  diag(MatchedDecl->getLocation(), "function %0 has too many parameters, use three or less")
      << MatchedDecl
      << FixItHint::CreateInsertion(MatchedDecl->getLocation(), "this function");
}

} // namespace misc
} // namespace tidy
} // namespace clang
