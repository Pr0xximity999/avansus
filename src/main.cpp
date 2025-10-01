#include <iostream>
#include <thread>
#define sleep(x) std::this_thread::sleep_for(std::chrono::milliseconds(x));
int main () {
    std::cout << "Welcome to";
    sleep(500);
    std::cout << ".";
    sleep(500);
}
