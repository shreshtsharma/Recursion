//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        vector<vector<bool>> vis;
        vector<bool> temp;
        for (int j = 0; j < n; j++)
        {
            temp.push_back(false);
        }
        for (int i = 0; i < n; i++)
        {
            vis.push_back(temp);
        }
        vector<string> res;
        string path;
        if (m[0][0] == 1)
            solve(m, n, res, path, vis, 0, 0);
        return res;
    }
    void solve(vector<vector<int>> &m, int n, vector<string> &res, string &path, vector<vector<bool>> &vis, int row, int col)
    {
        if (row == n - 1 && col == n - 1)
        {
            res.push_back(path);
            return;
        }
        if (row < n - 1 && m[row + 1][col] == 1 && vis[row + 1][col] == false)
        {
            path.push_back('D');
            vis[row][col] = true;
            solve(m, n, res, path, vis, row + 1, col);
            vis[row][col] = false;
            path.pop_back();
        }
        if (col > 0 && m[row][col - 1] == 1 && vis[row][col - 1] == false)
        {
            path.push_back('L');
            vis[row][col] = true;
            solve(m, n, res, path, vis, row, col - 1);
            vis[row][col] = false;
            path.pop_back();
        }
        if (col < n - 1 && m[row][col + 1] == 1 && vis[row][col + 1] == false)
        {

            path.push_back('R');
            vis[row][col] = true;
            solve(m, n, res, path, vis, row, col + 1);
            vis[row][col] = false;
            path.pop_back();
        }
        if (row > 0 && m[row - 1][col] == 1 && vis[row - 1][col] == false)
        {

            path.push_back('U');
            vis[row][col] = true;
            solve(m, n, res, path, vis, row - 1, col);
            vis[row][col] = false;
            path.pop_back();
        }
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends