#include<iostream>
using namespace std;


int fact(int n){
    return (n==0 || n==1)? 1 : n*fact(n-1);
}
int main()
{
    int rows;
    cout << "Enter the number of rows : ";
    cin >> rows;
    cout << endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<=i;j++){
            int n = i;
            int r = j;
            int ans = fact(n) / (fact(r) * fact(n-r));
            cout<<ans;
        }
        cout<<endl;
    }

    return 0;
}




    // for (int i = 0; i < rows; i++)
    // {
    //     int val = 1;
    //     for (int j = 1; j < (rows - i); j++)
    //     {
    //         cout << "   ";
    //     }
    //     for (int k = 0; k <= i; k++)
    //     {
    //         cout << "      " << val;
    //         val = val * (i - k) / (k + 1);
    //     }
    //     cout << endl << endl;
    // }
    // cout << endl;