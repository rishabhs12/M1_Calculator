#include <stdio.h>
#include <math.h>
#include "../inc/simple.h"
#include "../inc/advance.h"
#include "../unity/unity.h"

int number, a, b, result1;
float result2;

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
            scanf("%d", &a);
            scanf("%d", &b);
            switch (number){
                // switch cases for two arguments
                case 1:
                    result1 = add_res(a , b);
                    break;
                case 2:
                    result1 = sub_res(a, b);
                    break;
                case 3:
                    result1 = mul_res(a, b);
                    break;
                case 4:
                    result2 = div_res(a, b);
                    break;
                case 6:
                    result1 = power_res(a, b);
                    break;
                
        }

        }
        else{
            printf("Enter a numbers: ");
            scanf("%d", &a);
            switch (number){
                // switch cases for 1 argument
                case 5:
                    result2 = sqroot_res(a);
                    break;
                case 7:
                    result2 = logarithm_res(a);
                    break;
                case 8:
                    result2 = sin_res(a);
                    break;
                case 9:
                    result2 = cos_res(a);
                    break;
                case 10:
                    result2 = tan_res(a);
                    break;
                case 11:
                    result2 = cot_res(a);
                    break;
                case 12:
                    result2 = sec_res(a);
                    break;
                case 13:
                    result2 = cosec_res(a);
                    break;
        }
        }
        
    }
    //printf("%d",result2);
    //printf("%.2f",result2);
}