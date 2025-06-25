/*
C : Variables
Variables : Variables are containers for storing data values, like numbers and characters.

keyword for different type variable:
int: let the variable store integer value (whole number). Ex. 10
float: let the variable store floting point value (fraction number). Ex. 9.99;
char: let the variable store a character value. Ex. 'A'

creating variable:
type variable_name = value;

format specifier:
%d : is used to specify int type data
%f : is used to specify int float data
%c : is used to specify int char data

%.1f -> print till 1 decimal point(ex. 3.1)
%.2f -> print till 2 decimal point(ex. 3.14)
*/

#include <stdio.h>
int main() {

    int num = 10;
    float PI = 3.14;
    char grade = 'A';

    printf("num: %d\n", num);
    printf("PI: %.2f\n", PI); 
    printf("grade: %c\n", grade);

    return 0;
}