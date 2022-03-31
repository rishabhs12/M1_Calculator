#include <stdio.h>
#include <math.h>
#include "simple.h"
#include "advance.h"

int main()
{
    int number;
    float a, b, result;
    
    printf("Selcet: ");
    printf("1 for Add \n 2 for Subtract \n 3 for Multiply \n 4 for Division ");
    printf("5 for square root \n 6 for power \n 7 for exponential \n 8 for log");
    printf("9 for sin \n 10 for cos \n 11 for tan \n 12 for cot \n 13 for sec \n 14 for cosec");

    scanf ("%d",&number);
    
    if (number<1 && number>14){
        printf("invalid, please enter a valid number between 1 and 14");
        scanf("%f", &a);
        scanf("%f", &b);
        switch (number){
            case 1:
                result = add(a , b);
                break;
            case 2:
                result = sub(a, b);
                break;
            case 3:
                result = mul(a, b);
                break;
            case 4:
                result = div(a, b);
                break;
            case 5:
                result = sqroot(a);
                break;
            case 6:
                result = power(a, b);
                break;
            case 7:
                result = expo(a);
                break;
            case 8:
                result = logarithm(a);
                break;
            case 9:
                result = sin_res(a);
                break;
            case 10:
                result = cos_res(a);
                break;
            case 11:
                result = tan_res(a);
                break;
            case 12:
                result = cot_res(a);
                break;
            case 13:
                result = sec_res(a);
                break;
            case 14:
                result = cosec_res(a);
                break;
        }
    }
    
    printf("%f",result);
    return 0;
}