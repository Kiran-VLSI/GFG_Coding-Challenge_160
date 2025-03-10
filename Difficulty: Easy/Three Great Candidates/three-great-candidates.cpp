//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int n = arr.size();
        if (n < 3) return -1; // Not enough candidates

        sort(arr.begin(), arr.end());

        // Maximum product can be either:
        // 1. Product of the top 3 largest numbers
        // 2. Product of the 2 smallest (negative) numbers and the largest number
        int option1 = arr[n-1] * arr[n-2] * arr[n-3];
        int option2 = arr[0] * arr[1] * arr[n-1];

        return max(option1, option2);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        auto ans = ob.maxProduct(arr);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends