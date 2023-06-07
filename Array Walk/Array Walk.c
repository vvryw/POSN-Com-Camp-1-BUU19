/*
    TASK: Array Walk
    AUTHOR: Weeraya Watchara-amphaiwan
    SCHOOL: CRU
    LANG: C
*/
#include <stdio.h>
int main(){

    int n, m, i, j;
    int arr[20][20];
    scanf("%d %d",&n,&m);
    if(n<=20 && m<=20){
        for(i=0; i<n; i++){
            for(j=0; j<m; j++){
                scanf("%d", &arr[i][j]);
            }
        }

        for(i=0; i<n; i++){
            for(j=0; j<m; j++){
                printf("%d ", arr[i][j]);
            }
        }printf("\n");

        for(i=n-1; i>=0; i--){
            for(j=m-1; j>=0; j--){
                printf("%d ", arr[i][j]);
            }
        }printf("\n");

        for(j=0; j<m; j++){
            for(i=0; i<n; i++){
                printf("%d ", arr[i][j]);
            }
        }printf("\n");

        for(j=m-1; j>=0; j--){
            for(i=n-1; i>=0; i--){
                printf("%d ", arr[i][j]);
            }
        }printf("\n");
    }

    return 0;
}
