/*
    TASK: Oversort
    AUTHOR: Weeraya Watchara-amphaiwan
    SCHOOL: CRU
    LANG: C
*/
#include <bits/stdc++.h>
using namespace std;
int a[100005];
double b[100005];
char c[100005];
struct A
{
    char str[105];
    bool operator < (const A &o) const
    {
    return strcmp(str, o.str) < 0;
    }
};
A d[100005];

int main(){

    int op, n, i;
    scanf("%d %d", &op, &n);
    if(op == 1){
        for(i=0; i<n; i++)
            scanf("%d", &a[i]);
        sort(a,a+n);
        for(i=0; i<n; i++)
            printf("%d ", a[i]);
        printf("\n");
        for(i=n-1; i>=0; i--)
            printf("%d ", a[i]);
    }

    if(op == 2){
        for(i=0; i<n; i++)
            scanf("%lf", &b[i]);
        sort(b,b+n);
        for(i=0; i<n; i++)
            printf("%.0lf ", b[i]);
        printf("\n");
        for(i=n-1; i>=0; i--)
            printf("%.0lf ", b[i]);
    }

    if(op == 3){
        for(i=0; i<n; i++)
            scanf(" %c", &c[i]);
        sort(c,c+n);
        for(i=0; i<n; i++)
            printf("%c ", c[i]);
        printf("\n");
        for(i=n-1; i>=0; i--)
            printf("%c ", c[i]);
    }

    if(op == 4){
        for(i=0; i<n; i++)
            scanf(" %s", &d[i]);
        sort(d,d+n);
        for(i=0; i<n; i++)
            printf("%s ", d[i].str);
        printf("\n");
        for(i=n-1; i>=0; i--)
            printf("%s ", d[i].str);
    }

    return 0;
}
/*
4
5
peatt peat e pot handsome
*/
