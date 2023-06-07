/*
    TASK: Mazu
    AUTHOR: Weeraya Watchara-amphaiwan
    SCHOOL: CRU
    LANG: C++
*/
#include <bits//stdc++.h>
using namespace std;
stack <char> A;
int main(){

    int q;
    char a;
    scanf("%d", &q);
    while(q--){
        scanf(" %c", &a);
        if(!A.empty() && A.top() == a)
            A.pop();
        else    A.push(a);
    }
    printf("%d\n", A.size());
    if(A.size() == 0)
        printf("empty\n");
    while(!A.empty()){
        printf("%c", A.top());
        A.pop();
    }
    return 0;
}
/*
5
A
D
D
D
C
*/
