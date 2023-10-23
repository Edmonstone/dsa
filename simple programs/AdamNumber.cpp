/*
1. The number to be checked is entered.
2. It is squared and reversed.
3. Square root of the reversed number is found.
4. It is reversed again and compared with the original number.
5. If they are same, the number entered is an Adam number, else not.
*/

#include <iostream>
#include <cmath>
using namespace std;

int reverse(int n){
    int ans = 0;
    while(n>0){
        int temp = n % 10;
        ans = ans*10 + temp;
        n = (int)n/10;
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    int original = n;
    int first_square = n*n;
    int first_reverse = reverse(first_square);
    int square_root = sqrt(first_reverse);
    if(reverse(square_root) == original){
        cout << n << " is an Adam number.";
    }
    else{
        cout << n << " is not an Adam number.";
    }
    return 0;
}