#include <iostream>
#include <string>
#include <thread>
#define sleep(x) (std::this_thread::sleep_for(std::chrono::milliseconds(x)));

class ScreenUtils {
public:

    /**
     * Prints text on screen, letter for letter
     * @param text The text that will be printed
     * @param speed The speed at which the text will be printed, 80ms by default
     * @param dotSpeed The speed at which dots will be printed
     */
    static void PrintC(const std::string &text, const int speed=80, int dotSpeed=600) {
        for (const auto character : text) {
            std::cout << character << std::flush;
            if (character == '.') {
                sleep(dotSpeed);
            }
            else {
                sleep(speed);
            }
        }
        std::cout << "\n";
    }

    static void Clear() {
    #if defined(_WIN32) || defined(_WIN64)
            system("cls");
    #elif defined(__linux__) || defined(__APPLE__) || defined(__MACH__) || defined(__unix__)
            system("clear");
    #endif
    }
};
