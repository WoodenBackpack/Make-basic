#include <iostream>
#include <gtest/gtest.h>

class SampleTest {
public:
  SampleTest() {}
  void setUp() {
    std::cout<<"setup\n";
  }
  void tearDown() {
    std::cout<<"tearDown\n";
  }
};

TEST(SampleTest, printFailTest) {
  std::cout<<"sample fail test Print\n";
  ASSERT_EQ(1,0);
}

TEST(SampleTest, printPassTest) {
  std::cout<<"sample pass test Print\n";
  ASSERT_EQ(1,1);
}
