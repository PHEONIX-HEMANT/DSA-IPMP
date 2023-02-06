// Given an array arr[] of N positive integers. Push all the zeros of the given array to the right end of the array while maitaining the order of non-zero elements.

//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    
	    //pointing j to the first zero
	    int i=0,j=0;
	    for(;j<n;i++){
	        if(arr[i]==0){
	            j=i+1;
	            break;
	        }
	    }
	    
	    while(j<n){
	        if(arr[j]==0)
	            j++;
	        else{
	            swap(arr[i],arr[j]);
	            i++;
	            j++;
	        }
	    }
	   	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends