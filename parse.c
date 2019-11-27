#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char ** parse_args( char * line ) {
    char **args = calloc(sizeof(char *), 6);
    char *s1 = line;
    char *arg;
    int i = 0;
    for (i; i < 6; i++) {
        if ((arg=strsep(&s1, " "))!= NULL) {
            args[i] = malloc(sizeof(char[30]));
            args[i] = arg;
            printf("%s\n", args[i]);
        }
        else {
            args[i] = NULL;
        }
    }
    return args;
}
