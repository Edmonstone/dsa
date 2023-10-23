#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int ans = 0;
    while(n>0){
        int temp = n % 10;
        ans = ans*10 + temp;
        n = (int)n/10;
    }
    cout << "Reversed Number is :"<<ans;
    return 0;
}