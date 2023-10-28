#include <iostream>
using namespace std;

void first_half(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void second_half(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=i;j<2*n-i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main() {
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;
    first_half(row);
    second_half(row);
    return 0;
}
