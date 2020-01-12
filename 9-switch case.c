
#include <stdio.h>


int main() {
    char operator;
    double n1, n2;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf",&n1, &n2);
    switch(operator)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
            break;
        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct");
    }
    return 0;
}






//yildiz modeli

/*

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, l, h, giris;
    int yildiz, bosluk;
    printf("Giris:"); scanf("%d",&giris);

    yildiz=1;
    bosluk=giris;


    for(t=0;t<=giris;t++){
        for(h=0;h<bosluk;h++){
        printf(".");
        }
        for (h=0;h<yildiz;h++){
        printf("*");
        }
        printf("\n");
        yildiz+=2;
        bosluk--;
    }
    yildiz -=4;
    bosluk=1;

    for(l=0;l<giris-1;l++){
        for(h=0;h<bosluk;h++){
        printf(" ");
        }
        for (h=0;h<yildiz;h++){
        printf("*");
        }
        printf("\n");
        yildiz-=2;
        bosluk++;

    }
    return 0;
}
*/
