/*
    TASK: BT_2Hands
    AUTHOR:Weeraya Watchara-amphaiwan
    SCHOOL: CRU
    LANG: c
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char L[555], R[555], w[505], temp;

int main(){

    int q,c;
    char a,b;
    scanf("%d", &q);
    while(q--){
        scanf(" %c",&a);
        if(a == 'p'){
            scanf(" %c", &b);
            if(b == 'L') scanf(" %s",L);
            else scanf(" %s", R);
        }
        if(a == 'b'){
            scanf(" %c %d", &b,&c);
            if(b=='L') {
                temp = L[c];
                L[c]=0;
            }
            else temp = R[c], R[c]=0;
        }
        if(a == 'r'){
            if(b == 'L') L[c] = temp;
            if(b == 'R') R[c] = temp;
        }
        if(a == 'c'){
            scanf(" %c",&b);
            if(b=='L'){
                strcat(L,R);
                R[0]=0;
            } 
            else strcat(R,L), L[0]=0;
        }
        if(a == 'q'){
            if(L[0]==0) printf("- ");
            else printf("%s ", L);
            if(R[0]==0) printf("-\n");
            else printf("%s\n", R);
        }

    }

    return 0;
}
