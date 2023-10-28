#include <iostream>
using namespace std;

void first_half(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void second_half(int n){
    for(int i=1;i<n;i++){
        for(int j=i;j<n;j++){
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
