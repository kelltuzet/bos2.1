#include <stdio.h>
#include <time.h>

void text_log(const char* msg, const char* path) {
    FILE *fp = fopen(path, "a");
    if (fp) {
        fprintf(fp, "%ld %s\n", time(NULL), msg);
        fclose(fp);
    }
}
