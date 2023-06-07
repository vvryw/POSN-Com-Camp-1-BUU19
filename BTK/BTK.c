/*
    TASK: BT_BTK
    AUTHOR: Weeraya Watchara-amphaiwan
    SCHOOL: Chonradsadornumrung School
    LANG: C
*/
#include <stdio.h>
#include <math.h>
int main(){

    double x1, y1, x2, y2, x3, y3;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
    /*double area = abs((x3-x1)*(y3-y1)) - abs(1.0/2.0*(x3-x2)*(y3-y2)) - (1.0/2.0*(x3-x1)*(y3-y1)));
    double d = pow((4.0*area)/1.73205,1.0/2.0);
    printf("%.2lf %.2lf %.2lf", d, d/2.0, d*1.73205/2.0);*/
    double d,a,b,c,s,area;
    a = pow(pow(x2-x1,2.0) + pow(y2-y1,2.0),1.0/2.0);
    b = pow(pow(x3-x2,2.0) + pow(y3-y2,2.0),1.0/2.0);
    c = pow(pow(x3-x1,2.0) + pow(y3-y1,2.0),1.0/2.0);
    s = (a+b+c)/2.0;
    area = pow(s*(s-a)*(s-b)*(s-c),1.0/2.0);
    d = pow((area*4.0)/pow(3,1.0/2.0),1.0/2.0);
    double j,k;
    j = d/2.0;
    k = pow(3,1.0/2.0)*d/2.0;

    printf("%.2lf %.2lf %.2lf\n", d,j,k);

    return 0;
}
