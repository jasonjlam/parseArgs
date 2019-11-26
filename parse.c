#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char ** parse_args( char * line ) {
    char **args;
    char *arg = strsep(&line," ");
    int i = 0;
    for (; arg!=NULL; i++) {
        args[i] = arg;
        arg = strsep(&line," ");
        // printf("%s\n", args[i]);
    }
    i++;
    args[i] = NULL;
    return args;
}
