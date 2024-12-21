#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
    for (int i; i < argc; i++) {
        printf("\nArgument %d = argv[%d] = %s\n", i, i, argv[i]);
    }
    return 0;
}