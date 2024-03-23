//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    vector<int> Series(int n) {
        
         if(n==0)
         return {0};
          if(n==1)
         return {0,1};
         vector<int>ans(n+1);//Create a vector to store Fibonacci series take( n+1) because start with 0;
         int mod=1e9+7; // create module function
         ans[0]=0; // first / First Fibonacci numb
         ans[1]=1;//// Second Fibonacci number
         for(int i=2;i<=n;i++)
         {
             ans[i]=(ans[i-1]+ans[i-2])%mod; //Calculate Fibonacci number and take modulo
             
         }
         return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<int> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends