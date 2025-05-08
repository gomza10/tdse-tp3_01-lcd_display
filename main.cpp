//=====[Libraries]=============================================================

#include "smart_home_system.h"
#include "display.h"

//=====[Main function, the program entry point after power on or reset]========

int main()
{
    smartHomeSystemInit();
    while (true) {
        smartHomeSystemUpdate();
    }
}