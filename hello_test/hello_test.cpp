#include <gtest/gtest.h>
#include <hello.h>

namespace
{

TEST(LibraryTests_hello, add) {
    EXPECT_EQ(3, hello::add(2, 1));
    EXPECT_NE(3, hello::add(0, 1));
}

} // ns <anonymous>