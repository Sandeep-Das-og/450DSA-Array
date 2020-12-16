/**
 * Author - Sandeep Das

 1.) Q6 of 450DSA
 2.) Problem - Union/Intersection of 2 arrays
 3.) Input  : 6 2
              85 25 1 32 54 6
              85 2
     Output : 7
 4.) T.C. = O(n)
 5.) Algo :- Map is a function of C++ STL which keeps only distinct elements.
     So, we can iterate over the arrays one-by-one and finally print the size 
     of the resulting map that will give the no. of elements in [arr1 union arr2]
*/

#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
     
    int n,m;
    cin>>n>>m;

    int a[n],b[m];
    unordered_map<int,int> map;

    for(int i=0;i<n;i++){
        cin>>a[i];
        map[a[i]]++;
    }
        
    for(int i=0;i<m;i++){
        cin>>b[i];
        map[b[i]]++;
    }
   
    cout<<map.size();  

    return 0;
}