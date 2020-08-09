#include <stdio.h>

int main() 
{
    long arr[2][2] = {1, 2, 3, 4};
    long (*b)[2] = arr;
    printf("%ld\n", arr[1][1]);
    printf("%ld\n", b[1][1]);
}
