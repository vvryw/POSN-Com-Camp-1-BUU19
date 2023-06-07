/*
    TASK: POSN image
    AUTHOR: Weeraya Watchara-amphaiwan
    SCHOOL: CRU
    LANG: C
*/
#include <stdio.h>
int main(){

    int q,n,i,j,k;
    scanf("%d", &q);
    for(i=0; i<q; i++){
        scanf("%d", &n);
        int m=4*n+3;
        for(j=1; j<=n; j++){
            for(k=1; k<=m; k++){
                if(j==1 && k%(n+1)!=0 && k<=3*n+2){
                    printf("*");
                }
                else if(k==1 || k==n+2 || k==2*n+1 || k==3*n+4 || k==m){
                    printf("*");
                }
                else if(j==n/2+1 && k<=n){
                    printf("*");
                }
                else if(j==n/2+1 && k>=2*n+3 && k<=3*n+2){
                    printf("*");
                }
                else if(j==n && k%(n+1)!=0 && k<=3*n+2 && k>n+1){
                    printf("*");
                }
                else if(k==n && j<=n/2+1){
                    printf("*");
                }
                else if(k==2*n+3 && j<=n/2+1){
                    printf("*");
                }
                else if(k==3*n+2 && j>=n/2+1){
                    printf("*");
                }
                else if(k-j==3*n+3){
                    printf("*");
                }
                else printf("-");
            }
            printf("\n");
        }
    }

    return 0;
}
