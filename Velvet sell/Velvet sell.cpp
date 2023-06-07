/*
    TASK: Velvet sell
    AUTHOR: Weeraya Watchara-amphaiwan
    SCHOOL: CRU
    LANG: C
*/
#include <bits/stdc++.h>
using namespace std;
const int N = 100100;
int a[N], b[N];
int main(){

    int n, q, i;
    scanf("%d %d", &n, &q);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    sort(a+1, a+n+1);
    while(q--){
        int x;
        scanf("%d", &x);
        int ans = lower_bound(a+1, a+n+1, x) - a;
        printf("%d\n", ans -1);
    }

    return 0;
}
/*
5 3
2
4
6
10
10
1
20
6
*/
