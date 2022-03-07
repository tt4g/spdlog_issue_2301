#ifndef SPDLOG_ISSUE_2301_CPPLIB_H
#define SPDLOG_ISSUE_2301_CPPLIB_H

#ifdef __cplusplus
extern "C"
{
#endif
    void spdlog_info_int(char *msg, int num);

    void spdlog_info_char(char *msg, char *extra_msg);

#ifdef __cplusplus
}
#endif

#endif // SPDLOG_ISSUE_2301_CPPLIB_H
