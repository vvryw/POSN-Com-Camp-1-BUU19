/*
    TASK: Star Edge
    AUTHOR: Weeraya Watchara-amphaiwan
    SCHOOL: CRU
    LANG: C++
*/
#include <iostream>
using namespace std;

void star(int num){
int m=2*num+1;
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            if(i==0 || j==0 || i==m-1 || j==m-1){
                cout << "*";
            }
            else if(i%2==0 && j<=i){
                cout << "*";
            }
            else if(j%2==0 && i<=j){
                cout << "*";
            }
            else cout << "-";
        }
        cout << endl;
    }
}

int main(){

    int q,n;
    cin >> q;

    for(int i=0; i<q; i++){
        cin >> n;
    }
    for(int i=0; i<q; i++){
        star(n);
    }

    return 0;
}
