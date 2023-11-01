/*Given an array of integers greater than zero, find if it is possible to split it in two subarrays (without reordering the elements), such that the sum of the two subarrays is the same. Print the two subarrays.*/
#include<iostream>
using namespace std;

void printEqualSum(int arr[], int n){
    int half = n/2;
    int arr1[n-half];
}

int main(){
    int arr[] = {1 , 2 , 3 , 4 , 5 , 5 };
    int n = sizeof(arr);
    printEqualSum(arr,n);
    return 0;
}