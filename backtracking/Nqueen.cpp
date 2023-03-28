#include <iostream>
#include <vector>
#include <string>
using namespace std;
void solve(int n, vector<string> &vec, int row, int col, vector<vector<string>> &res);
void display(vector<vector<string>> res, int n);
vector<vector<string>> Nqueens(int n);
bool isSafe(int n, int row, int col, vector<string> vec);

int main()
{
    int n;
    cout << "enter number of queens\n";
    cin >> n;
    vector<vector<string>> res = Nqueens(n);
}

vector<vector<string>> Nqueens(int n)
{
    vector<string> vec;
    string str;
    for (int i = 0; i < n; i++)
    {
        str.push_back('.');
    }
    for (int i = 0; i < n; i++)
    {
        vec.push_back(str);
    }
    vector<vector<string>> res;
    solve(n, vec, 0, 0, res);
    return res;
}
void solve(int n, vector<string> &vec, int row, int col, vector<vector<string>> &res)
{
    if (row == n)
    {
        res.push_back(vec);
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (isSafe(n, row, i, vec))
        {
            vec[row][i] = 'Q';
            solve(n, vec, row + 1, i, res);
            vec[row][i] = '.';
        }
    }
}
bool isSafe(int n, int row, int col, vector<string> vec)
{
    int tempr = row;
    while (tempr >= 0)
    {
        if (vec[tempr--][col] == 'Q')
            return false;
    }
    tempr = row;
    int tempc = col;
    while (tempc >= 0 && tempr >= 0)
    {
        if (vec[tempr--][tempc--] == 'Q')
            return false;
    }
    tempr = row;
    tempc = col;
    while (tempr >= 0 && tempc < n)
    {
        if (vec[tempr--][tempc++] == 'Q')
            return false;
    }

    return true;
}
