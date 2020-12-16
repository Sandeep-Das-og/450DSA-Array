/**
 * Author - Sandeep Das

 1.) Q5 of 450DSA
 2.) Problem - Move all the negative elements to one side of the array 
 3.) Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
     Output: -12 -13 -5 -7 -3 -6 11 6 5
 4.) T.C. = O(n)
 5.) Algo :- Using the partition() method of QuickSort algo we perform swap operations and rearrange
     to have all negative numbers followed by positive numbers.
*/

#include <bits/stdc++.h>
using namespace std;

/** rearrange() is another form of the partition() function of Quick sort. */ 
void rearrange(int arr[], int n){
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
}

// function to print the array  
void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
 
// Driver code
int main(){
    int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    printArray(arr, n);
    return 0;
}