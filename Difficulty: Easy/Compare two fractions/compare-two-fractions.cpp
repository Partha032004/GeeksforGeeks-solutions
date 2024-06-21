//{ Driver Code Starts

#include <iostream>
#include <regex>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string compareFrac(string str) {

        // Code here
         vector<int> t(4,0);
        int comma;
        for(int x=0,i=0;i<str.size();i++){
            if(str[i]=='/'){
                x++;    continue;
            }
            if(str[i]==','){
                comma=i;
                i++;    x++;    continue;
            }
            t[x]=t[x]*10+(str[i]-'0');
        }
        int p = t[0]*t[3], q = t[1]*t[2];
        if(p==q)
            return "equal";
        if(p>q)
            return str.substr(0,comma);
        return str.substr(comma+2,str.size());
    }
};


//{ Driver Code Starts.

int main() {
    Solution ob;
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {

        string str;
        getline(cin, str);

        cout << ob.compareFrac(str) << endl;
    }
    return 0;
}

// } Driver Code Ends