//
// Created by Joakim Nohlgård on 2020-02-20.
//

#include "CodeKata.h"

#include <string>

bool isBalanced(const std::string& input) {
  if(input == "(") {
    return false;
  }
  return true;
}
