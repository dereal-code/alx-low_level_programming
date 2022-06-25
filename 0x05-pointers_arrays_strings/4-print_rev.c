#include "main.h"
#include <stdio.h>
#include <string.h>
void print_rev(char *s) {
    int i;

    for (i = strlen(s);i>=0;i--) {
        printf("%c", s[i]);
    }
}
