#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int shotestPath(vector<vector<int>> mat, int n, int m, int k)
    {
        // code here

    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k, x;

        cin >> n >> m >> k;
        vector<vector<int>> mat;

        for (int i = 0; i < n; i++)
        {
            vector<int> row;
            for (int j = 0; j < m; j++)
            {
                cin >> x;
                row.push_back(x);
            }
            mat.push_back(row);
        }

        Solution ob;
        cout << ob.shotestPath(mat, n, m, k);
        cout << "\n";
    }
    return 0;
}
