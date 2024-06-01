//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string oddEven(string s) {
        // code here
         unordered_map<char,int> mp;
        set<char>s1;
        int x=0,y=0;
        
        for(int i=0;s[i];i++){
            mp[s[i]]++;
            s1.insert(s[i]);
        }
        
        for(char i:s1){
            if((i-'a'+1)%2==0 &&  mp[i]%2==0)x++;
            if((i-'a'+1)%2!=0 && mp[i]%2!=0)y++;
        }
             
        if((x+y)%2==0)return "EVEN";
        else return "ODD";
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s;
        getline(cin, s);

        Solution obj;
        string res = obj.oddEven(s);

        cout << res << "\n";
    }
}

// } Driver Code Ends