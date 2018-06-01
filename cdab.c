#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int result = 0;
char name[255] = "";
char *nameptr = name;
size_t sz = 255;

int main() {
    result = gethostname(nameptr, sz);
    printf("Name: %s\n", name);
    return 0;
}

