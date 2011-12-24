#include <stdio.h>
#include <unistd.h>

#define BUFFER_SZ 100
static char buffer[BUFFER_SZ];

int main() {
    char line_s[11];
    char line_u[11] = {0};
    setbuffer(stdin, buffer, BUFFER_SZ);
    fgets(line_s, 11, stdin);
    read(STDIN_FILENO, line_u, 10);
    printf("L1: %s\n", line_s);
    printf("L2: %s\n", line_u);
    fgets(line_s, 11, stdin);
    read(STDIN_FILENO, line_u, 10);
    printf("L3: %s\n", line_s);
    printf("L4: %s\n", line_u);
    return 0;
}

