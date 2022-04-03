#include <math.h>
#include "../inc/advance.h"
#include "../unity/unity.h"

//Square root function
float sqroot_res(int a){
    return (sqrt(a));
}

// power function
int power_res(int a, int b){
    return (pow(a, b));
}

// log function
float logarithm_res(int a){
    return (log10(a));
}

// sine function
float sin_res(int a){
    return (sin(a * 3.14 / 180));
}

// cos function
float cos_res(int a){
    return (cos(a * 3.14 / 180));
}

// tan function
float tan_res(int a){
    return (tan(a * 3.14 / 180));
}

// cot function
float cot_res(int a){
    return (1 / tan(a * 3.14 / 180));
}

// sec function
float sec_res(int a){
    return (1 / cos(a * 3.14 / 180));
}

// cosec function
float cosec_res(int a){
    return (1 / (sin(a * 3.14 / 180)));
}

