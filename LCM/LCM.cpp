/*
    TASK: LCM
    AUTHOR: Weeraya Watchara-amphaiwan
    SCHOOL: CRU
    LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;

int gcd(long long i, long long j){
    if(i%j == 0) return j;
    return gcd(j,i%j);
}

int main(){

    long long n, num, ans;
    scanf("%lld %lld", &n, &ans);
    while(n-- > 1){
        scanf("%lld", &num);
        ans = ans * num / gcd(num, ans);
    }
    printf("%lld\n", ans);

	return 0;
}
/*
5
3
9
12
24
18
*/
