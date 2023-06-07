/*
    TASK: Butterfly
    AUTHOR: Weeraya Watchara-amphaiwan
    SCHOOL: CRU
    LANG: C
*/
#include <stdio.h>
#include <math.h>
int main(){

    int n,i,j;
    scanf("%d", &n);
    int m=2*n-1;
    for(i=0; i<m; i++){
        for(j=0; j<m; j++){
            if(i-j>=0 && i+j<=m-1){ //i-j>=0 && i+j<=m-1
                printf("*");
            }
            else if(i+j>=m-1 && i-j<=0){
                printf("*");
            }
            else printf("-");
        }
        printf("\n");
    }

    return 0;
}
