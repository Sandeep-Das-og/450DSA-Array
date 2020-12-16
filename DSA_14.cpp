/**
 * Author - Sandeep Das

 1.) Q9 of 450DSA
 2.) Problem - Minimise the max. diff. b/w heights
 3.) Input  : k: 3
              arr: {3, 9, 12, 16, 20} 
     Output : 11
 4.) T.C. = O(nlogn)
 5.) Algo :- Sort the array using STL. Preassume ans = diff.(max-min) = a[n-1]-a[0] 
     Iterate over the array and check 
     if (a[i]>=k) => var1=min(a[0]+k,a[i]-k) as a[0] is min of the array upon sorting
     also var2=max(a[n-1]-k,a[i-1]+k) as a[n-1] is max of the array upon sorting
     Finally compute answer as the min of assumed answer and the diff. b/w var2 and var1
     i.e., ans = max(ans,var2-var1)
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
        int n,k,maxm,minm,ans;
        cin>>k;
        cin>>n;
        int a[n];

        for(int i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n); 
        ans = a[n-1]-a[0];  
        
        for(int i=0;i<n;i++)
        {
            if(a[i]>=k)
            {
                minm = min(a[0]+k, a[i]-k);
                maxm = max(a[n-1]-k, a[i-1]+k);
                ans = min(ans, maxm-minm);
            }
        }
        cout<<ans;
    
    return 0;       
}