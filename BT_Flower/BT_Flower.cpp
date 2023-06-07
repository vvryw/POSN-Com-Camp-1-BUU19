/*
    TASK: BT_Flower
    AUTHOR: Weeraya Watchara-amphaiwan
    SCHOOL: CRU
    LANG: C++
*/
#include <bits//stdc++.h>
using namespace std;

stack <int> st;

int main(){

    int q,opr, num;
    scanf("%d", &q);
    while(q--){
        scanf("%d", &opr);
        if(opr == 1){
            scanf("%d", &num);
            st.push(num);
        }
        else if(opr == 2){
            if(!st.empty()){
                printf("%d\n",st.top());
                st.pop();
             }
            else printf("-1\n");
        }
    }

    return 0;
}
/*
15
1 7
2
2
1 11
1 8
1 9
2
2
1 10
2
2
1 7
1 6
2
2
*/
