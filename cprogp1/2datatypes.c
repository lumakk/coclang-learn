#include <stdio.h>
#include <stdbool.h>

int main(){

    // Characters
    char a = 'C';           // single character  %c
    char b[] = "Mac";       // character array   %s
    signed char c = 100;    // signed character 1 byte (-128 to +127) %d or %c
    unsigned char d = 255;    // unsigned character 1 byte ( 0 to +255) %d or %c

    // Decimals
    float e = 3.141592;         // 4 bytes (32 bits) 6 - 7 digits   %f
    double f = 3.141592653589;  // 8 bytes (64 bits) 15 - 16 digits %lf

    // Boolean
    bool g = true;  // 1 byte (true or false = 1 and 0) %d

    // Short integers
    short h = 32767;            // 2 bytes (-32,768 to +32,767) %d
    unsigned short i = 65535;    // 2 bytes (0 to +65,535) %d

    // Regular integers
    int j = 2147483647;             // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
    unsigned int k = 4294967295;    // 4 bytes (0 to +4,294,967,295) %u

    // Long integers
    long long i = 9223372036854775807;                  // 8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 18446744073709551615U;   // 8 bytes (0 to +18 quintillion) %llu
    

    return 0;
}