#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(n <=0){
        cout << "Invalid number.";
    }
    if(n%2==0){
        cout << n << " is even.";
    }
    cout << n << " is odd.";
    return 0;
}