#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum;
    for(int i=1;i<=n;i++){
        sum +=i;
    }
    cout << "Sum of " << n << " digits are "<<sum;
    return 0;
}