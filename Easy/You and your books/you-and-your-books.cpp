//{ Driver Code Starts
#include <algorithm>
#include <cstdio>
#include <iostream>
//#include<Windows.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public :
    long long max_Books(int arr[], int n, int k) {
        long long sum = 0, max_sum = 0;
        
        for(int i = 0; i < n; i++)
        {
            sum = 0;
            if(arr[i] > k)
                continue;
            else
            {
                while(i < n && arr[i] <= k)
                {
                    sum += arr[i];
                    i++;
                }
                max_sum = max(max_sum, sum);
            }
        }
        return max_sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int ar[n];
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
        }
        Solution ob;
        cout << ob.max_Books(ar, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends