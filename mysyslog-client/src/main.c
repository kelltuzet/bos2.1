#include <stdio.h>
#include <getopt.h>
#include "../libmysyslog/include/mysyslog.h"

int main(int argc, char *argv[]) {
    int opt;
    char *msg = "Default message";
    int level = INFO;
    
    while ((opt = getopt(argc, argv, "m:l:")) != -1) {
        switch (opt) {
            case 'm': msg = optarg; break;
            case 'l': level = atoi(optarg); break;
        }
    }
    
    mysyslog(msg, level, 0, 0, "/var/log/mysyslog.log");
    return 0;
}
