//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> printPat(int n) {
        vector<int> result;  
        for (int row = n; row >= 1; row--) { // Loop for rows
            for (int num = n; num >= 1; num--) { // Loop for numbers
                for (int repeat = 0; repeat < row; repeat++) { // Repeat numbers
                    result.push_back(num);
                }
            }
            result.push_back(-1); // Indicating row change
        }
        return result;
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
        vector<int> ans = obj.printPat(n);

        // Print ans vector with space separation
        for (int num : ans) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends