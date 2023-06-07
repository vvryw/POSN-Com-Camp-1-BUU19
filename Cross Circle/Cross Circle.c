/*
    TASK: 62_Cross Circle
    AUTHOR: Weeraya Watchara-amphaiwan
    SCHOOL: CRU
    LANG: C
*/
#include <stdio.h>
#include <math.h>
int main(){

    int i,q, h1, k1, r1, h2, k2, r2;
    scanf("%d", &q);
    for(i=0; i<q; i++){
        scanf("%d %d %d %d %d %d", &h1, &k1, &r1, &h2, &k2, &r2);
        double d = pow(pow(h2-h1,2.0) + pow(k2-k1,2.0),1.0/2.0);

        if(d > abs(r1-r2) && d > r1+r2){
            printf("None\n");
        }
        else if(d < abs(r1-r2) && d < r1+r2){
            printf("None\n");
        }
        else if(d > abs(r1-r2) && d == r1+r2){
            printf("One\n");
        }
        else if(d == abs(r1-r2) && d < r1+r2 && r1 != r2){
            printf("One\n");
        }
        else if(d > abs(r1-r2) && d < r1+r2){
            printf("More\n");
        }
        else if(d == abs(r1-r2) && d < r1+r2 && r1 == r2){
            printf("More\n");
        }

    }

    return 0;
}
