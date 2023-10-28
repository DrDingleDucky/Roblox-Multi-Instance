#include <Windows.h>
#include <iostream>
#include <string>

int main() {
    std::cout << "Roblox Multi Instance\n";
    std::cout << "WARNING: All Roblox instances need to be closed before running this program. Otherwise, it will not work.\n";
    CreateMutexA(NULL, TRUE, "ROBLOX_singletonMutex");
    std::cout << "press enter to exit...";
    std::cin.ignore();
    return EXIT_SUCCESS;
}
