/*
    TASK: Parenthesis
    AUTHOR: Weeraya Watchara-amphaiwan
    SCHOOL: CRU
    LANG: C++
*/
#include <bits//stdc++.h>
using namespace std;
char a[200];
stack <char> st;
int main(){

    int n, q, len, i, ch;
    scanf("%d", &q);
    while(q--){
        scanf(" %s", a);
        len = strlen(a);
        ch = 1;
        for(i=0; i<len; i++){
            if(a[i] == '[' || a[i] == '(')
                st.push(a[i]);
            else if(a[i] == ']'){
                if(a[i] == ']' && !st.empty() && st.top() == '[')
                    st.pop();
                else{
                    ch = 0; break;
                }
            }
            else{
                if(a[i] == ')' && !st.empty() && st.top() == '(')
                    st.pop();
                else{
                    ch = 0; break;
                }
            }
        }
        if(st.empty() && ch)    printf("Yes\n");
        else    printf("No\n");
        st.empty();
    }

    return 0;
}
/*
3
([])
(([()])))
([()[]()])()
*/
