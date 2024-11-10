#include <iostream>
#include <nlohmann/json.hpp>
#include <fstream>

using json = nlohmann::json;
using namespace std;

#if defined(_WIN32) || defined(_WIN64)
    #define PLATFORM_NAME "cancer"
#elif defined(__linux__) || defined(__APPLE__)
    #define PLATFORM_NAME "unix"
#endif

bool CheckFile() {
    if constexpr (PLATFORM_NAME == "cancer") {

    } else if constexpr (PLATFORM_NAME == "unix") {

    }
}

void List() {

}

void Add() {

}

void Delete() {

}

int main(int argc, char* argv[]) {
    CheckFile();
    return 0;
}
