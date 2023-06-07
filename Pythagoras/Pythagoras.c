/*
    TASK: Pythagoras
    AUTHOR: Weeraya Watchara-amphaiwan
    SCHOOL: Chonradsadornumrung School
    LANG: C
*/
#include <stdio.h>
int main(){

    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a == 0.00){
        printf("%.2lf", pow(c*c-b*b,1.0/2.0));
    }
    else if(b == 0.00){
        printf("%.2lf", pow(c*c-a*a,1.0/2.0));
    }
    else if(c == 0.00){
        printf("%.2lf", pow(a*a+b*b,1.0/2.0));
    }

    return 0;
}
