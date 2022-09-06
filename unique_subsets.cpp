#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void uniquesub(vector<int> nums,vector<int> arr,vector<vector<int>> &vec,int ind);
int main()
{
    vector<int> nums = {1,2,1,2};
    vector<int> arr;
    vector<vector<int>> vec;
    sort(nums.begin(),nums.end());
    uniquesub(nums,arr,vec,0);
    for(int i=0;i<vec.size();i++)
    {
        for(int j=0;j<vec[i].size();j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
}
void uniquesub(vector<int> nums,vector<int> arr,vector<vector<int>> &vec,int ind)
{
    vec.push_back(arr);
    if(ind==nums.size())
    {

        return;
    }
    for(int i=ind;i<nums.size();i++)
    {
        if(i>ind && nums[i]!=nums[i-1])continue;
        arr.push_back(nums[i]);
        uniquesub(nums,arr,vec,i+1);
    }
}
