#include <stdio.h>
// sinx = x - x3/3! + x5/5! - x7/7! + x9/9!

float power(float, float);
int fact(int);
float sine(float);

int main(){
    float x;
    printf("For sin(x) enter the value of x: ");
    scanf("%f", &x);
    printf("%.3f", sine(x));
    return 0;
}

float power(float a, float n){
    float b = a;
    for(int i = 1; i<n ; i++){
        a = a*b;
    }
    return a;
}
int fact(int a){
    int b=1;
    for(int n=1;n<=a;n++){
        b= b*n;
    }
    return b;
}
float sine(float x){
    float xCopy=x;
    for (int n = 3; n <= 9; n += 2){
        if (n % 4 == 3)
            xCopy -= power(x, n) / fact(n);
        else
            xCopy += power(x, n) / fact(n);
    }
    return xCopy;
}
