/*
    TASK: Richly sort
    AUTHOR: Weeraya Watchara-amphaiwan
    SCHOOL: CRU
    LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;

struct A{
    int x ,y;
    bool operator < (const A &o) const{
        if(x !=o.x)
            return x<o.x;
        return y>o.y;
    }
};

A a[100005];

int main(){

    int n, i;
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d %d", &a[i].x, &a[i].y);
    sort(a,a+n);
    for(i=0; i<n; i++)
        printf("%d %d\n", a[i].x, a[i].y);

    return 0;
}
/*
5
1 4
2 7
3 9
1 8
2 4
*/
