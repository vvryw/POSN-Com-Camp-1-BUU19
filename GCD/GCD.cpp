/*
    TASK: GCD
    AUTHOR: Weeraya Watchara-amphaiwan
    SCHOOL: CRU
    LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;

int gcd(int i, int j){
    if(i%j == 0) return j;
    return gcd(j,i%j);
}

int main(){

    int n, num, ans;
    scanf("%d %d", &n, &ans);
    while(n-- > 1){
        scanf("%d", &num);
        ans = gcd(num, ans);
    }
    printf("%d\n", ans);

	return 0;
}
/*
4
16
24
12
32
*/
