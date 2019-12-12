
/*
#include <stdio.h>

int addNumbers(int a, int b);         // function prototype

int main()
{
    int n1,n2,sum;
    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);
    sum = addNumbers(n1, n2);        // function call
    printf("sum = %d",sum);
    return 0;
}

int addNumbers(int a, int b)         // function definition
{
    int result;
    result = a+b;
    return result;                  // return statement
}
*/

/*


//Example 1: No arguments passed and no return value

#include <stdio.h>
void checkPrimeNumber();
int main()
{
    checkPrimeNumber();    // argument is not passed
    return 0;
}
// return type is void meaning doesn't return any value
void checkPrimeNumber()
{
    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    for(i=2; i <= n/2; ++i)
    {
        if(n%i == 0)
        {
            flag = 1;
        }
    }
    if (flag == 1)
        printf("%d is not a prime number.", n);        //asal
    else
        printf("%d is a prime number.", n);
}
*/

//Example 2: No arguments passed but a return value
/*

#include <stdio.h>
int getInteger();
int main()
{
    int n, i, flag = 0;
   // no argument is passed
    n = getInteger();
    for(i=2; i<=n/2; ++i)
    {
        if(n%i==0){
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("%d is not a prime number.", n);
    else
        printf("%d is a prime number.", n);
    return 0;
}
// returns integer entered by the user
int getInteger()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    return n;
}

*/


//Example 3: Argument passed but no return value

/*
#include <stdio.h>
void checkPrimeAndDisplay(int n);
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    // n is passed to the function
    checkPrimeAndDisplay(n);
    return 0;
}
// return type is void meaning doesn't return any value
void checkPrimeAndDisplay(int n)
{
    int i, flag = 0;
    for(i=2; i <= n/2; ++i)
    {
        if(n%i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        printf("%d is not a prime number.",n);
    else
        printf("%d is a prime number.", n);
}
*/


//Example 4: Argument passed and a return value



#include <stdio.h>
int checkPrimeNumber(int n);
int main()
{
    int n, flag;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    // n is passed to the checkPrimeNumber() function
    // the returned value is assigned to the flag variable
    flag = checkPrimeNumber(n);
    if(flag == 1)
        printf("%d is not a prime number",n);
    else
        printf("%d is a prime number",n);
    return 0;
}
// int is returned from the function
int checkPrimeNumber(int n)
{
    int i;
    for(i=2; i <= n/2; ++i)
    {
        if(n%i == 0)
            return 1;
    }
    return 0;
}


