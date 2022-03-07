#include "cpplib.h"

#include <spdlog/spdlog.h>

extern "C"
{

    void spdlog_info_int(char *msg, int num)
    {
        spdlog::info(msg, num);
    }

    void spdlog_info_char(char *msg, char *extra_msg)
    {
        spdlog::info(msg, extra_msg);
    }

}
