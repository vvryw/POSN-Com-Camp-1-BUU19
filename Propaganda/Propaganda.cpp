/*
    TASK: Propaganda
    AUTHOR: Weeraya Watchara-amphaiwan
    SCHOOL: CRU
    LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;

int main(){

    int i, num, r;
    scanf("%d", &num);
    r=(int)sqrt(num);
    for(i=2; i<=r; i++){
        if(!(num%i)){
            printf("No\n");
            return 0;
        }
    }
    if(num>1) printf("Yes\n");
    else printf("No\n");

    return 0;
}
// 6
