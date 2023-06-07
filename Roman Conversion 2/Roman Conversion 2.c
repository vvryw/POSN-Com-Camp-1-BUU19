/*
    TASK: Roman Conversion 2
    AUTHOR: Weeraya Watchara-amphaiwan
    SCHOOL: CRU
    LANG: C
*/
#include <stdio.h>
#include <string.h>
char str[4400][200];
int main(){

    int q,i,j,num,len;

    scanf("%d", &q);
    for(i=0; i<q; i++){
        scanf("%s", str[i]);
        num = 0;
        len = strlen(str[i]);

        for(j=0;j<len;j++){
            if(str[i][j] == 'M'){
                if(str[i][j-1] == 'C') num+=900;
                else num+=1000;
            }
            else if(str[i][j] == 'D'){
                if (str[i][j-1] == 'C') num+=400;
                else num+=500;
            }
            else if(str[i][j] == 'C'){
                if(str[i][j-1] == 'X') num+=90;
                else if(str[i][j+1] == 'M') num+=0;
                else if(str[i][j+1] == 'D') num+=0;
                else num+=100;
            }
            else if(str[i][j] == 'L'){
                if(str[i][j-1] == 'X') num+=40;
                else num+=50;
            }
            else if(str[i][j] == 'X'){
                if(str[i][j-1] == 'I') num+=9;
                else if(str[i][j+1] == 'L') num+=0;
                else if(str[i][j+1] == 'C') num+=0;
                else num+=10;
            }
            else if(str[i][j] == 'V'){
                if(str[i][j-1] == 'I') num+=4;
                else num+=5;
            }
            else if(str[i][j] == 'I'){
                if(str[i][j+1] == 'V') num+=0;
                else if(str[i][j+1] == 'X') num+=0;
                else num+=1;
            }

        }
        printf("%d\n", num);

    }

    return 0;
}
/*
3
DCCXXVI+
XLIX
MMCDLXXXIX
*/
