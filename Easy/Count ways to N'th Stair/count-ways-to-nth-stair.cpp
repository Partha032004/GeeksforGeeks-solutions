//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
  long long countWays(int n)
    {
        long long ans=1;
        while(n>=2)
        {
            n=n-2;
            ans+=1;
        }
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    // taking count of testcases
    int t;
    cin >> t;

    while (t--) {
        // taking stair count
        int n;
        cin >> n;
        Solution ob;
        cout << ob.countWays(n) << endl; // Print the output from our pre computed array
    }
    return 0;
}
// } Driver Code Ends