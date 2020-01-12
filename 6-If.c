
#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    // true if number is less than 0
    if (number > 10) {
        printf("You entered %d.\n", number);
    }
    printf("The if statement is easy.");
    return 0;
}

/*
#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    // True if the remainder is 0
    if  (number%2 == 0) {
        printf("%d is an even integer.",number);
    }
    else {
        printf("%d is an odd integer.",number);
    }
    return 0;
}
*/


/*
#include <stdio.h>
int main() {
    int number1, number2=8;
    printf("Enter two integers: ");
    scanf("%d", &number1);
    //checks if the two integers are equal.
    if(number1 == number2) {

        if  (number1%2 == 0) {
        printf("%d is an even integer.",number1);
        }
        else {
            printf("%d is an odd integer.",number1);
        }


    }
    //checks if number1 is greater than number2.
    else if (number1 > number2) {
        printf("Result: %d > %d", number1, number2);
    }
    //checks if both test expressions are false
    else  {
        printf("Result: %d < %d",number1, number2);
    }
    return 0;
}
*/
