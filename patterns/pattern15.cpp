#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >>n;
    for(int i=0;i<n;i++){
        for(char ch = 'A';ch<'A'+n-i;ch++){
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}
