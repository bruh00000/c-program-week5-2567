#include <stdio.h>
int x = 0b1011; //Binary = 2
int y = 0x10; //Hexademicla = 16
int z = 10; //Demical = 10

int main()
{
    printf("x in Decimal :%d\n", x);
    printf("x in Octal :%o\n", x);
    printf("x in Hexadecimal :%x\n", x);
    printf("x in Binary :%d\n\n", x);

    printf("y in Decimal :%d\n", y);
    printf("y in Octal :%o\n", y);
    printf("y in Hexadecimal :%x\n", y);
    printf("y in Binary :%d\n\n", y);
    
    printf("z in Decimal :%d\n", z);
    printf("z in Octal :%o\n", z);
    printf("z in Hexadecimal :%x\n\n", z);
}