#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int result;
char name[255];
char* nameptr = name;
size_t namelen = 255;

int main() {
    result = gethostname(nameptr, namelen);
    printf("\n  Result of gethostname():\n  %s\n\n", name);
    return 0;
}

