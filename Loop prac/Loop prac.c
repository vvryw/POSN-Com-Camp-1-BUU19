/*
    TASK: Loop Practice
    AUTHOR: Weeraya Watchara-amphaiwan
    SCHOOL: Chonradsadornumrung School
    LANG: C
*/
#include <stdio.h>
int main(){

    int n;
    int i;

    scanf("%d", &n);
    //for loop 1-n
    for(i=1; i<=n; i++){
        printf("%d ", i);
    }
    printf("\n");

    //while loop n-1
    i=n;
    while(i>0){
        printf("%d ", i);
        i--;
    }
    printf("\n");

    //do...while loop 1-n
    i=1;
    do{
        if(i%2 == 0){
            printf("%d ", i);
        }
        i++;
    }while(i<=n);
    printf("\n");

    //for loop n-1
    for(i=n; i>0; i--){
        if(i%2 == 0){
            printf("%d ", i);
        }
    }
    printf("\n");

    //while loop 1-n
    i=1;
    while(i<=n){
        if(i%2 != 0){
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");

    //do..while loop n-1
    i=n;
    do{
        if(i%2 != 0){
            printf("%d ", i);
        }
        i--;
    }while(i>0);

    return 0;
}
