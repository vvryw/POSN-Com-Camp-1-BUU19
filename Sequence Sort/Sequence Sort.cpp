/*
    TASK: Sequence Sort
    AUTHOR: Weeraya Watchara-amphaiwan
    SCHOOL: CRU
    LANG: C++
*/
#include <bits//stdc++.h>
using namespace std;
vector <int> a[20000];
int main(){

	int i, n, m, num, j;
	scanf("%d %d", &n, &m);
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d", &num);
			a[i].push_back(num);
		}
	}
	sort(a, a+n);
	for(i=0; i<n; i++){
		for(j=0; j<m; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}

	return 0;
}
/*
5 3
7 10 6
1 3 5
1 2 7
1 3 4
3 10 6
*/
