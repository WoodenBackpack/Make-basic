#include <iostream>

#include "common_functions.hh"

int main(int argc, char* argv[]) {
  common::StdOutHandler::redirectStdOutToFile();
  std::cout<<"Hello!\n";
  
  return 0;
}
