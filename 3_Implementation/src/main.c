#include <stdio.h>
#include <math.h>
#include "../inc/simple.h"
#include "../inc/advance.h"
#include "../unity/unity.h"

int number;
float a, b, result;

void calc(void);

#if 0
int main(){

    calc();
    return 0;

}
#endif
void calc(void){
 
    printf("Selcet: ");
    printf("1 for Add \n 2 for Subtract \n 3 for Multiply \n 4 for Division ");
    printf("5 for square root \n 6 for power \n 7 for log");
    printf("8 for sin \n 9 for cos \n 10 for tan \n 11 for cot \n 12 for sec \n 13 for cosec \n");

    scanf ("%d",&number);
    
    if (number<1 && number>14){
        printf("invalid, please enter a valid number between 1 and 14");
    }
    else{
        if(number >=1 && number<= 4 || number==6){
            printf("Enter two numbers: ");
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
                case 6:
                    result = power(a, b);
                    break;
                
        }

        }
        else{
            printf("Enter a numbers: ");
            scanf("%f", &a);
            switch (number){

                case 5:
                    result = sqroot(a);
                    break;
                case 7:
                    result = logarithm(a);
                    break;
                case 8:
                    result = sin_res(a);
                    break;
                case 9:
                    result = cos_res(a);
                    break;
                case 10:
                    result = tan_res(a);
                    break;
                case 11:
                    result = cot_res(a);
                    break;
                case 12:
                    result = sec_res(a);
                    break;
                case 13:
                    result = cosec_res(a);
                    break;
        }
        }
        
    }
    
    //printf("%.2f",result);
}