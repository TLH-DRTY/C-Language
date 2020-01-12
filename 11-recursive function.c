
#include <stdio.h>
int sum(int n);

int main() {
    int number, result;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    result = sum(number);
    printf("sum = %d", result);
    return 0;
}

int sum(int n) {
    if (n != 0)
        // sum() function calls itself
        return n + sum(n-1);
    else
        return n;
}


//palindrom
/*


#include <stdio.h>
void reverseSentence();
int main() {
    printf("Enter a sentence: ");
    reverseSentence();
    return 0;
}
void reverseSentence() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
}
*/
/*

#include <stdio.h>
void display();

int main()
{
    display();
    display();

}

void display(){
    static int c=1;
    c+=5;
    printf("%d \n",c);
}
*/
