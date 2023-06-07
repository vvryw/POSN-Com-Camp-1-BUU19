/*
    TASK: Star Edge
    AUTHOR: Weeraya Watchara-amphaiwan
    SCHOOL: CRU
    LANG: C
*/
#include <stdio.h>
int main(){

    int q,n,i,j,m,k;
    scanf("%d", &q);

    for(i=0; i<q; i++){
        scanf("%d", &n);
        m=2*n+1;
        for(j=0; j<m; j++){
            for(k=0; k<m; k++){
                if(j==0 || k==0 || j==m-1 || k==m-1){
                    printf("*");
                }
                else if(j%2==0 && k<=j){
                    printf("*");
                }
                else if(k%2==0 && j<=k){
                    printf("*");
                }
                else printf("-");
            }
            printf("\n");
        }
    }
    /*for(int i=0; i<q; i++){
        star(n);
    }*/

    return 0;
}
