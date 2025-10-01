#include <iostream>
#include "ScreenUtils.cpp"
int main () {
    ScreenUtils().PrintC("Welcome to...\n");
    ScreenUtils().PrintC(R"(     /\
    /  \__   ____ _ _ __  ___ _   _ ___
   / /\ \ \ / / _` | '_ \/ __| | | / __|
  / ____ \ V / (_| | | | \__ \ |_| \__ \
 /_/    \_\_/ \__,_|_| |_|___/\__,_|___/
 )", 5 );
}
