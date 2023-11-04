#include<iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    cout<<"Enter number of rows of matrix A: ";
    cin>>r1;
    cout<<"Enter number of columns of matrix A: ";
    cin>>c1;
    cout<<"Enter number of rows of matrix B: ";
    cin>>r2;
    cout<<"Enter number of columns of matrix B: ";
    cin>>c2;

    int A[r1][c1];
    for (int i=0; i<r1; i++) {
        for (int j=0; j<c1; j++) {
            cin>>A[i][j];
        }
    }
    int B[r2][c2];
    for (int i=0; i<r2; i++) {
        for (int j=0; j<c2; j++) {
            cin>>B[i][j];
        }
    }
    int C[r1][c2];
    if (c1!=r2) {
        cout<<"Invalid matrices. Multiplication not possible";
    } 
    else {
        
        for (int i=0; i<r1; i++) {
            for (int j = 0; j<c2; j++) {
                int ans=0;
                for (int k = 0; k <r2; k++) {
                    ans += A[i][k] * B[k][j];
                }
                C[i][j]=ans;
            }
            cout<<"\n";
        }
        
    }

    for (int i=0; i<r1; i++) {
        for (int j=0; j<c2; j++) {
            cout<<C[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}