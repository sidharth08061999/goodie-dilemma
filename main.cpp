 
#include<bits/stdc++.h> 
using namespace std; 

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   bool swapped; 
   for (i = 0; i < n-1; i++) 
   { 
     swapped = false; 
     for (j = 0; j < n-i-1; j++) 
     { 
        if (arr[j] > arr[j+1]) 
        { 
           swap(&arr[j], &arr[j+1]); 
           swapped = true; 
        } 
     } 
  
     // if no two elements were swapped by inner loop, then break 
     if (swapped == false) 
        break; 
   } 
}

int minDiff(int arr[], int n, int k) 
{ 
	int result = INT_MAX; 

	
	for (int i=0; i<=n-k; i++) 
		result = min(result, arr[i+k-1] - arr[i]); 

	return result; 
} 

int main() 
{ 
	int arr[] = {7980, 22349, 999, 2799, 229900, 11101, 9999, 2195, 9800, 4999}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	int k = 3; 
    bubbleSort(arr, n); 
	cout << minDiff(arr, n, k) << endl; 
	return 0; 
} 
