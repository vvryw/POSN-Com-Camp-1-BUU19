/*
    TASK: GCD
    AUTHOR: Weeraya Watchara-amphaiwan
    SCHOOL: CRU
    LANG: C
*/
#include <stdio.h>

int gcd(int a, int b){
	if(a%b == 0) return b;
	return gcd(b, a%b);
}

int main(){
	int n, ans, num;
	scanf("%d %d", &n, &ans);
	while(n-- > 1){
		scanf("%d", &num);
		ans = gcd(num, ans);
	}
	printf("%d\n", ans);
	
	return 0;
}
