/**
 * Author - Sandeep Das

 1.) Q2 of 450DSA
 2.) Problem - Print the max. and min. element(s) in an array
 3.) Input  : 1, 2, 3, 4, 5
     Output : 1 5
 4.) T.C. = O(n)
 5.) Algo :- Take 2 variables max and min. Initialize them as
     max=min=a[0]. Iterate through the array and use if-else clause
     if(ele[i]>max) => change max as max = ele[i]
     else-if(ele[i]<min) => change min as min = ele[i]
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    int min,max;
    min=max=arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]>max)
            max = arr[i];
        else if(arr[i]<min)
            min = arr[i];
    }

    cout<<min<<" "<<max;
    return 0;
}
