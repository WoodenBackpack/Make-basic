#include <iostream>
#include <boost/array.hpp>

#include "common_functions.hh"

int main(int argc, char* argv[]) {
  common::StdOutHandler::redirectStdOutToFile();
  boost::array<int, 5> ints{1,2,3,4,5};
  for (auto it: ints) {
    std::cout<<it;
  }
  std::cout<<"\n";
  std::cout<<"Hello!\n";
  
  return 0;
}
