#include <stdio.h>
int main(int argc, int **argv)
{
    printf("%d  ", argc);
    for(int i=0; i<argc; i++)
    printf("%s  ", argv[i]);
}
