/*
    TASK: LCM
    AUTHOR: Weeraya Watchara-amphaiwan
    SCHOOL: CRU
    LANG: C
*/
#include <stdio.h>

long long gcd(long long i, long long j){
	if(i%j == 0) return j;
	return gcd(j, i%j);
}

int main(){
	long long n, num, ans;
	scanf("%lld %lld", &n, &num);
	while(n-- > 1){
		scanf("%lld", &num);
		ans = ans * num / gcd(num,ans);
	}
	printf("%lld\n", ans);
	return 0;
}
