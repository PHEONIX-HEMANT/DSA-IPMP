/*Given two sorted arrays a[] and b[] of size n and m respectively. The task is to find the number of elements in the union between these two arrays.
Union of the two arrays can be defined as the set containing distinct elements from both the arrays. If there are repetitions, then only one occurrence of element should be printed in the union.

Note : Elements are not necessarily distinct.*/

//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution{
    public:

    //Function to search a element in an array
    bool search(vector<int> arr,int ele){
        int start=0;
        int end=arr.size()-1;
        while(start<end){
            int mid = start + (end-start)/2;
            if(arr[mid]==ele)
                return true;
            else if(ele<arr[mid])
                end=mid-1;
            else
                start=mid+1;
        }
        
        return false;
    }

    //function to find the union of sorted arrays
    int Union(int a[],int n,int b[],int m){
        int count=0;
        int la=0,lb=0;
        for (int i = 0,j=0; i < n && j<m ;)
        {   
            la=i;
            lb=j;
            if(a[i]==b[j]){
                cout<<a[i]<<" ";
                i++;
                j++;
            }
            else if(a[i]<b[j]){
                cout<<a[i]<<" ";
                i++;                
            }
            else{
                cout<<b[j]<<" ";
                j++;
            }
            count++;
        }

        //print remaining of larger array
        if(n>m){
            for(int i=la;i<n;i++){
                cout<<a[i]<<" ";
                count++;
            }
        }
        else{
            for(int i=lb;i<n;i++){
                cout<<b[i]<<" ";
                count++;
            }
        }

        return count;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	//cin >> t;
	t=1;
	while(t--){
	    

	    int n, m;
	    cin >> n >> m;

        int a[n],b[m];

	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
        ob.Union(a, n, b, m);
	    
	}
	
	return 0;
}
// } Driver Code Ends