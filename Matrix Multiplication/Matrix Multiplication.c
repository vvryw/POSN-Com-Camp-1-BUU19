/*
    TASK: Matrix Multiplication
    AUTHOR: Weeraya Watchara-amphaiwan
    SCHOOL: CRU
    LANG: C
*/
#include <stdio.h>
#include <math.h>
int main(){

    int n1, m1, n2, m2;
    int i,j,k;
    int arr1[100][100], arr2[100][100], arr3[10][10];

    scanf("%d %d %d %d", &n1, &m1, &n2, &m2);
    //input
    for(i=0; i<n1; i++){
        for(j=0; j<m1; j++){
            scanf("%d", &arr1[i][j]);
        }
    }

    for(i=0; i<n2; i++){
        for(j=0; j<m2; j++){
            scanf("%d", &arr2[i][j]);
        }
    }

    if(m1 != n2){
        printf("Can\'t Multiply.\n");
        return 0;
    }
    //process
    for(i=0; i<n1; i++){
        for(j=0; j<m2; j++){
            arr3[i][j] = 0;
        }
    }

    for(i=0; i<n1; i++){
        for(j=0; j<m2; j++){
            for(k=0; k<m1; k++){
                //printf("%d", arr1[i][j]*arr2[i][j]);
                arr3[i][j] += arr1[i][k]*arr2[k][j];
                //printf("%d %d\n",arr1[i][j],arr2[j][i]);
            }//printf("%d ", a);
        }//printf("\n");
    }

    //output
    for(i=0; i<n1; i++){
        for(j=0; j<m2; j++){
            //printf("%d", arr1[i][j]*arr2[i][j]);
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
