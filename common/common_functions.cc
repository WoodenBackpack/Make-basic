#include "common_functions.hh"

namespace common{

void StdOutHandler::redirectStdOutToFile() {
    fileStream = new std::ofstream("out.txt");
    std::cout.rdbuf(fileStream->rdbuf());
}

void StdOutHandler::redirectToStdOut() {
    std::cout.rdbuf(stdOut);
    fileStream = nullptr;
}

}
