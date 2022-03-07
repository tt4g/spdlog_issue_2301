#include "cpplib.h"

int main(int argc, char *argv[])
{
    spdlog_info_int("Test {}!!!", 128);
    spdlog_info_char("Hello, {}!", "World");

    return 0;
}
