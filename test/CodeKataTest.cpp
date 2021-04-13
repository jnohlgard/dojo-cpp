//
// Created by Joakim Nohlgård on 2020-02-20.
//

#include "CodeKata.h"
#include "doctest/doctest.h"

// Start here: https://github.com/onqtam/doctest/blob/master/doc/markdown/tutorial.md

TEST_CASE( "CodeKata example case" ) {

  CHECK(dojo_add(0, 0) == 0);
  CHECK(dojo_add(0, 1) == 1);
  CHECK(dojo_add(1, 0) == 1);
  CHECK(dojo_add(10, 13) == 23);
}
