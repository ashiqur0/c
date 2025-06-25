/*
C Variables : Create Variables

Variables : Variables are containers for storing data values, like numbers and characters.

keyword for different type variable:
int: let the variable store integer value (whole number). Ex. 10
float: let the variable store floting point value (fraction number). Ex. 9.99;
char: let the variable store a character value. Ex. 'A'

creating variable:
type variable_name = value;
*/

#include <stdio.h>
int main() {

    int myNum = 10;
    float PI = 3.14;
    char myLetter = 'A';

    // can print in different line 
    printf("My fevorite number is: %d\n", myNum);
    printf("My letter is: %c\n", myLetter);
    
    // can print in single line 
    printf("My fevorite number is: %d and my letter is: %c\n", myNum, myLetter);

    return 0;
}