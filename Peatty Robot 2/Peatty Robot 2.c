/*
    TASK: Peatty Robot 2
    AUTHOR: Weeraya Watchara-amphaiwan
    SCHOOL: CRU
    LANG: C
*/
#include <stdio.h>
#include <string.h>
char str[111];
int main(){

    scanf("%s", &str);
    int i, len = strlen(str);

    for(i=0;i<len;i++){
        if(str[i] == 'N'){
            if(str[i-1] == 'N') printf("F");
            else if(str[i-1] == 'S') printf("RRF");
            else if(str[i-1] == 'E') printf("RRRF");
            else if(str[i-1] == 'W') printf("RF");
            else if(str[i-1] == 'Z')printf("F");
            else printf("F");
        }
        else if(str[i] == 'S'){
            if(str[i-1] == 'N') printf("RRF");
            else if(str[i-1] == 'S') printf("F");
            else if(str[i-1] == 'E') printf("RF");
            else if(str[i-1] == 'W') printf("RRRF");
            else if(str[i-1] == 'Z')printf("RRF");
            else printf("RRF");
        }
        else if(str[i] == 'E'){
            if(str[i-1] == 'N') printf("RF");
            else if(str[i-1] == 'S') printf("RRRF");
            else if(str[i-1] == 'E') printf("F");
            else if(str[i-1] == 'W') printf("RRF");
            else if(str[i-1] == 'Z')printf("RF");
            else printf("RF");
        }
        else if(str[i] == 'W'){
            if(str[i-1] == 'N') printf("RRRF");
            else if(str[i-1] == 'S') printf("RF");
            else if(str[i-1] == 'E') printf("RRF");
            else if(str[i-1] == 'W') printf("F");
            else if(str[i-1] == 'Z')printf("RRRF");
            else printf("RRRF");
        }
        else if(str[i] == 'Z') printf("Z");

    }

    return 0;
}
