/**
 * Author - Sandeep Das

 1.) Q4 of 450DSA
 2.) Problem - Sort an array of 0's,1's and 2's without using any sorting algo
 3.) Input  : arr[]= {0 2 1 2 0}
     Output : arr[]= {0 0 1 2 2}
 4.) T.C. = O(n)
 5.) Algo :- Take 23 ptrs. low,mid,high. Initialize them as low=0,mid=0 and high=n-1
     Base case - low<mid<high || 0<mid<2
     while(mid<=high) => 
     if(ele[mid] = 0) -> swap(ele[low],ele[mid]), low++, mid++
     else-if(ele[mid] = 1) -> mid++
     else -> swap(ele[mid],ele[high]), high--
     
*/

#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;

    int nums[n];

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    int low=0,mid=0,high=n-1;
    
        while(mid<=high){
            switch(nums[mid]){
                case 0:
                    swap(nums[low++],nums[mid++]);
                    break;
                    
                case 1:
                    mid++;
                    break;
                    
                case 2:
                    swap(nums[mid],nums[high--]);
                    break;
            }
        }

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }

    return 0;    
}
