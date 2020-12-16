/**
 * Author - Sandeep Das

 1.) Q8 of 450DSA
 2.) Problem - Print maximum sum contiguous subarray/Kadane's Algo
 3.) Input  : arr[]= 1 2 3 -2 5
     Output : 9
 4.) T.C. = O(n)
 5.) Algo :- Take 2 variables curr,max and initialize both with 0
     Now, iterate through the array, do summation and store them in 
     curr. Now apply if-else conditions of Kadane's Algo -
     i) if (curr<0) => revert back to 0 i.e., curr=0
     ii) if (curr>max) => make curr the new max i.e., max=curr
*/

#include <iostream>
using namespace std;

int main() {
    int i,n,currSum=0,maxSum=0;
    cin>>n;
    int a[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    //Kadane's Algorithm    
    for(i=0;i<n-1;i++) 
    {
        currSum = currSum + a[i];
        if(currSum < 0)
            currSum = 0;
        if(currSum > maxSum) 
            maxSum = currSum;
    }

    cout<<maxSum;
    return 0;
}

