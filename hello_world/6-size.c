#include <stdio.h>

int main(void)
{
    size_t size_of_char = sizeof(char);
    size_t size_of_int = sizeof(int);
    size_t size_of_long_int = sizeof(long int);
    size_t size_of_long_long_int = sizeof(long long int);
    size_t size_of_float = sizeof(float);

    printf("Size of a char: %zu byte(s)\n", size_of_char);
    printf("Size of an int: %zu byte(s)\n", size_of_int);
    printf("Size of a long int: %zu byte(s)\n", size_of_long_int);
    printf("Size of a long long int: %zu byte(s)\n", size_of_long_long_int);
    printf("Size of a float: %zu byte(s)\n", size_of_float);
