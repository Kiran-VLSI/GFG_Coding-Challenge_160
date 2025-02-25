//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> findMissing(vector<int>& a, vector<int>& b) {
    vector<int> finalAns;
        map<int, int> mp1;
        
        for (int i = 0; i < b.size(); i++) {
            mp1[b[i]]++;
        }
        
        for (int i = 0; i < a.size(); i++) {
            if (mp1.find(a[i]) == mp1.end()) {
                finalAns.push_back(a[i]);
            }
        }
        
        return finalAns;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        vector<int> ans;

        Solution ob;
        ans = ob.findMissing(arr, brr);
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";

        cout << "\n";
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends