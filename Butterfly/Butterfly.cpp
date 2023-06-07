/*
    TASK: Butterfly
    AUTHOR: Weeraya Watchara-amphaiwan
    SCHOOL: CRU
    LANG: C++
*/
#include <iostream>
using namespace std;
int main(){

    int n;
    cin >> n;
    int m=2*n-1;
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            if(i-j>=0 && i+j<=m-1){ //i-j>=0 && i+j<=m-1
                cout << "*";
            }
            else if(i+j>=m-1 && i-j<=0){
                cout << "*";
            }
            else cout << "-";
        }
        cout << endl;
    }

    return 0;
}
