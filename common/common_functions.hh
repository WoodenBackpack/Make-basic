#include <iostream>
#include <fstream>
#include <cstddef>
namespace common {
  static std::streambuf* const stdOut = std::cout.rdbuf();
  static std::ofstream* fileStream = nullptr;
  class StdOutHandler {
    public:
      static void redirectStdOutToFile();
      static void redirectToStdOut();
  };
}
