#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "parse.h"

int main() {
    char args[30] = "Yes";
    parse_args(args);
    return 0;
}
