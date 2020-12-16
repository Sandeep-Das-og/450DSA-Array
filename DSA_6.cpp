/**
 * Author - Sandeep Das

 1.) Q1 of 450DSA
 2.) Problem - Reverse an array of integers
 3.) Input  : arr[] = {1, 2, 3}
     Output : arr[] = {3, 2, 1}
 4.) T.C. = O(n)
 5.) Algo :- Take 2 ptrs. start,end. Initialize them as start=0 and end=n-1
     while(start<=end) => swap(ele[start],ele[end])
     increment start and decrement end.
*/

#include <iostream>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
	    cin>>arr[i];

    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    for(int i=0;i<n;i++)
	    cout<<arr[i]<<" ";

    return 0;
}