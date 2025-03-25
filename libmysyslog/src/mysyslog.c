#include <stdio.h>
#include <time.h>
#include "mysyslog.h"

int mysyslog(const char* msg, int level, int driver, int format, const char* path) {
    time_t now = time(NULL);
    printf("%ld [%d] %s\n", now, level, msg);
    return 0;
}
