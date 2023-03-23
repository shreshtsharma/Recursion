#include <iostream>
using namespace std;
// count number of ways to reach at end point
void solve_maze(int &ans, int row, int col)
{
    if (row == 1 || col == 1)
    {
        ans++;
        return;
    }
    // going right;
    solve_maze(ans, row - 1, col);
    // going down
    solve_maze(ans, row, col - 1);
}
int main()
{
    int ans = 0;
    cout << "enter row and column" << endl;
    int row, col;
    cin >> row >> col;
    solve_maze(ans, row, col);
    cout << ans;
}