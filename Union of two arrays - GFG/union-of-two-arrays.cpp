// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        unordered_set<int> set;
        /*
        int count = 0;
        int ans[m+n];
        int i;
        for( i=0;i<n;i++)
        {
            ans[i] = a[i];
        }
        int j,k;
        for(j=0,k=0;k<m;k++,j++)
        {
            ans[j]=b[k];
        }
        sort(ans,ans+m+n);
        
        for(int l=0;i<l;l++)
        {
            if(ans[i]!=ans[i-1])
            {
                count++;
                
            }
        }
        return count;
        */
        for(int i =0;i <n;i++)
       {
           set.insert(a[i]);
       }
       for(int i=0;i<m;i++)
       {
           set.insert(b[i]);
       }
       
       return set.size();
   
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends