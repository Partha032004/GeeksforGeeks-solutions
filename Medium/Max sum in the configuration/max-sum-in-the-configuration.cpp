//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/
class Solution {
  public:
    long long max_sum(int a[], int n) {
        // Your code here
         long long  sum=0,cs=0,N=n;
        for(long long i=0;i<N;i++){
           sum+=a[i];
           cs+=i*a[i];
        }
        long long res=cs;
        for(long long  j=1;j<N;j++){
            cs=cs-(sum-a[j-1])+a[j-1]*(N-1);
            if(res<cs)
                res=cs;
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution ob;
        cout << ob.max_sum(A, N) << endl;
        /*keeping track of the total sum of the array*/
    }
}

// } Driver Code Ends