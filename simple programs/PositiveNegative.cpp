#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a integer : ";
    cin >> n;
    if(n == 0){
        cout << "Neither Positive Nor Negative.";
    }else if(n > 0){
        cout << "Positive Integer";
    }
    cout << "Negative Integer.";
    return 0;
}
