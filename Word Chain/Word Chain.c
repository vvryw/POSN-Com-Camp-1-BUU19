/*
    TASK: Word chain
    AUTHOR: Weeraya Watchara-amphaiwan
    SCHOOL: Chonradsadornumrung School
    LANG: C
*/
#include <stdio.h>
#include <string.h>
char str[300000][1010];
int main(){

    int l,n,i,j;
    scanf("%d\n%d", &l, &n);

    for(i=0; i<n; i++){
        scanf("%s", &str[i]);
    }

    for(i=0; i<n; i++){
        int cnt=0;
        for(j=0; j<l; j++){
            if(str[i][j] != str[i+1][j]) cnt++;
            if(cnt == 3){
                printf("%s", str[i]);
                return 0;
            }
        }

    }

    return 0;
}
/*
4
12
HEAD
HEAP
LEAP
TEAR
REAR
BAER
BAET
BEEP
JEEP
JOIP
JEIP
AEIO
*/
