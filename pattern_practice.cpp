#include<iostream>
using namespace std;

int main() {
int n;
cout<<"Enter number: ";
cin>>n;

for (int i=1; i<=n; i++){
    int j;
    for (j=1; j<=(n-i); j++){
        cout<<" ";
    }
    for (j=n; j>=(n-i); j--){
        cout<<j;
    }
    for (int k=1; k<=i; k++){
        cout<<k;
    }
    cout<<endl;
}
    return 0;
}