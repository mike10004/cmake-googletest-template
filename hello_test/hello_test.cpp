#include <string>
#include <sstream>
#include <gtest/gtest.h>
#include <hello.h>

namespace
{

TEST(Hello, SayHello) {
    std::ostringstream buf;
    hello::SayHello(buf);
    std::string actual = buf.str();
    EXPECT_EQ("hello, world", actual) << "message";
}

}