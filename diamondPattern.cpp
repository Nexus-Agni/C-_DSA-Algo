#include<iostream>
using namespace std;

int main() {
    // printing upper triangle
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for (int line=0; line <=n; line++) { // for row traversing
        int no_of_chars = (2*line)-1;
        int space = (n-line);
        for(int j=0; j<space; j++) { //printing space
            cout<<" ";
        }
        for(int j=0; j<no_of_chars; j++) { //printing chars
            cout<<(char)('A'+j);
        }
        cout<<endl;
    }
    // printing lower triangle
    int m = 4;
   
    for (int line=4; line>=0; line--) {
        int no_of_chars = (2*line)-1;
        int space = m-line+1;
        for (int j=0; j<space; j++) {
            cout<<" ";
        }
        for(int j=0; j<no_of_chars; j++) { //printing chars
            cout<<(char)('A'+j);
        }
        cout<<endl;
        
    }
    return 0;
}