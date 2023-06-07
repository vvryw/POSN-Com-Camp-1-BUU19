/*
    TASK: Peatty Robot
    AUTHOR: Weeraya Watchara-amphaiwan
    SCHOOL: CRU
    LANG: C
*/
#include <stdio.h>
#include <string.h>
int main(){

    char c[111];
    scanf("%s",&c);
    int len = strlen(c);
    int i,x=0,y=0;
    for(i=0; i<len; i++){
        if(c[i] == 'N') y++;
        if(c[i] == 'S') y--;
        if(c[i] == 'E') x++;
        if(c[i] == 'W') x--;
        if(c[i] == 'Z') x=0,y=0;
    }

    printf("%d %d",x,y);

    return 0;
}
