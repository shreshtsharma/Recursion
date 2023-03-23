#include <iostream>
using namespace std;
void solve_maze2(string &ans, int row, int col)
{
    if (row == 1 && col == 1)
    {
        cout << ans << endl;
        return;
    }
    if (row > 1)
    {
        ans.push_back('R');
        solve_maze2(ans, row - 1, col);
        ans.pop_back();
    }

    if (col > 1)
    {
        ans.push_back('D');
        solve_maze2(ans, row, col - 1);
        ans.pop_back();
    }
}
int main()
{
    int row, col;
    cout << "enter number of rows and column" << endl;
    cin >> row >> col;
    string ans;
    solve_maze2(ans, row, col);
}