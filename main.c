#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "parse.h"

int main() {
    char line[30] = "ls -a -l";
    char ** args = parse_args(line);
    execvp(args[0], args);
    return 0;
}
