#include<iostream>
#include<vector>
using namespace std;

int main () {
    vector <int> array;
    //taking array input
    int n ;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    for (int i=0; i<n; i++) {
        int ele;
        cout<<"Enter element: ";
        cin>>ele;
        array.push_back(ele);
    }
    int max=array[0];
    for (int i=0;i<n; i++) {
        if (array[i]>max) {
            max = array[i];
        }
    }
    cout<<"Maximun value in the array is: "<<max;
    return 0;
}