#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *binary)
{
    unsigned int decimal = 0;  
    int len = strlen(binary);  

    for (int i = 0; i < len; i++) {
        if (binary[i] == '1') {

            decimal = (decimal << 1) | 1;
        }

        else if (binary[i] == '0') {

            decimal = decimal << 1;
        }
        else {
            printf("Error: Invalid binary character '%c'\n", binary[i]);
            exit(1);
        }
    }

    return decimal;
}

