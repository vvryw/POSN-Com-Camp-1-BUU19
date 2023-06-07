/*
    TASK: Array Practice
    AUTHOR: Weeraya Watchara-amphaiwan
    SCHOOL: CRU
    LANG: C
*/
#include <stdio.h>
int main(){

    int n,k,i,m;
    int arr[1000];

    //input
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d",&k);

    //output
    for(i=n-1; i>=0; i--){
        printf("%d ",arr[i]);
    }
    m=0;
    for(i=0; i<n; i++){
        if(k == arr[i]){
            m++;
        }
    }
    printf("\n%d",m);

    return 0;
}
