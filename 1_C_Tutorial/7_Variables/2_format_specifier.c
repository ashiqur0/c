/*
C : Format Specifier

Format specifier:
%d : is used to specify int type data
%f : is used to specify int float data
%c : is used to specify int char data
%s : is used to specify int string data (sequence of character)
%ld : is used to specify long data
%lf : is used to specify double data

Note: to print flot or double value precise like bellow (control how many decimal point you want to print)
%.1f -> print float value till 1 decimal point(ex. 3.1)
%.1f -> print float value till 1 decimal point(ex. 3.1)

%.1lf -> print double value till 1 decimal point(ex. 3.1)
%.2lf -> print double value till 2 decimal point(ex. 3.14)
*/

#include <stdio.h>
int main() {

    int myInt = 10;
    float myFloat = 3.14;
    long myLong = 34;
    double myDouble = 4.33;
    char myChar = 'A';
    char myString[] = "Hello world";

    printf("Integer Value: %d\n", myInt);
    printf("Float Value: %.2f\n", myFloat); 
    printf("Long Value: %ld\n", myLong);
    printf("Double Value: %.2lf\n", myDouble);
    printf("Charater Value: %c\n", myChar);
    printf("String Value: %s\n", myString);

    return 0;
}