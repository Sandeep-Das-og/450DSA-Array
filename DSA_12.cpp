/**
 * Author - Sandeep Das

 1.) Q7 of 450DSA
 2.) Problem - Cyclically rotate an array by 1 position
 3.) Input  : 9 8 7 6 4 2 1 3
     Output : 3 9 8 7 6 4 2 1 
 4.) T.C. = O(n)
 5.) Algo :- Take a temp. variable and initialize it as a[n-1].
	 Now shift remaining array by 1 position to the right.
	 Finally place a[0]=temp 

	 Note - This algo works only for right-shift of elements.
	 For left-shift, do the same algo in reverse i.e., assign temp = a[0],
	 shift remaining elements by 1 position to left and place back a[n-1] = temp
*/

#include <iostream>
using namespace std;

int main() {
	//code
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	
 	while(t--){
	
		int n;
		cin>>n;
	    
		int a[n];
		for(int i=0;i<n;i++)
	    	cin>>a[i];
	        
		int temp = a[n-1];

		for(int i=n-2;i>=0;i--)
	    	a[i+1]=a[i];
	    
		a[0] = temp;
	    
    	for(int i=0;i<n;i++)
    		cout<<a[i]<<" ";
		cout<<"\n";
 	}

	return 0; 
}
