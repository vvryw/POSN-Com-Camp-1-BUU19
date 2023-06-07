/*
    TASK: Grade Easy
    AUTHOR: Weeraya Watchara-amphaiwan
    SCHOOL: Chonradsadornumrung School
    LANG: C
*/
#include <stdio.h>
int main(){

    int a;
    scanf("%d", &a);

    if(a>79 && a<101){
        printf("A\n");
    }
    else if(a<80 && a>74){
        printf("B+\n");
    }
    else if(a<75 && a>69){
        printf("B\n");
    }
    else if(a<70 && a>64){
        printf("C+\n");
    }
    else if(a<65 && a>59){
        printf("C\n");
    }
    else if(a<60 && a>54){
        printf("D+\n");
    }
    else if(a<55 && a>49){
        printf("D\n");
    }
    else printf("F\n");

    return 0;
}
