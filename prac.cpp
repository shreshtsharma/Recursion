#include <iostream>
#include <vector>
using namespace std;
void sort(vector<int> &num);
void insert(vector<int> &vec, int temp);
int main()
{
    int n;
    cin >> n;
    int temp;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        vec.push_back(temp);
    }
    sort(vec);
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}
void sort(vector<int> &vec)
{
    if (vec.size() == 1)
        return;
    int temp = vec.back();
    vec.pop_back();
    sort(vec);
    insert(vec, temp);
}
void insert(vector<int> &vec, int temp)
{
    if (vec.size() == 0 || vec.back() < temp)
    {
        vec.push_back(temp);
        return;
    }
    int num = vec.back();
    vec.pop_back();
    insert(vec, temp);
    vec.push_back(num);
}