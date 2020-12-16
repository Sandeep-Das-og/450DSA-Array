/**
 * Author - Sandeep Das

 1.) Q3 of 450DSA
 2.) Problem - Print kth max./min. element in an array
 3.) Input  : arr[]= {4, 7, 3, 1, 9}
              k = 3
     Output : 4
 4.) T.C. = O(n)
 5.) Algo :- Use priority_queue of C++ STL and push first 'k' elements
     of array into the max-heap pq. Next, for the remaining array elements
     compare them with the 'top' element of pq.
     if(ele[i]>pq.top()) => pq.pop() , push(ele[i])
     Finally, the 'top' of pq contains the kth largest element.  
*/

#include <iostream>
#include <queue>

using namespace std;

int main(){
    int n,k;
    cin>>n;

    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];

    cin>>k;
    
    priority_queue<int,vector<int>,greater<int>> pq;

    for(int i=0;i<k;i++)
        pq.push(ar[i]);

    for(int i=k;i<n;i++){
        if(ar[i]>pq.top()){
            pq.pop();
            pq.push(ar[i]);
        }
    }

    cout<<pq.top();
    return 0;
}