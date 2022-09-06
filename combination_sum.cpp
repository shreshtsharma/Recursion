#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>vec;
        vector<int>arr;
        solve(0,vec,arr,candidates,target);
        return vec;
        
    }
    void solve(int ind,vector<vector<int>> &vec,vector<int> arr,vector<int> nums,int tar)
    {
        if(ind==nums.size())
        {
            if(tar==0)
            {
                vec.push_back(arr);
            }
            return;
        }
        if(tar==0)
        {
            vec.push_back(arr);
            return;
        }
        if(nums[ind]<=tar)
        {
            arr.push_back(nums[ind]);
            solve(ind,vec,arr,nums,tar-nums[ind]);
            arr.pop_back();

        }
        solve(ind+1,vec,arr,nums,tar);
    }
};

int main()
{
    vector<int> arr;
    int target;
    int n;
    cout<<"enter array size"<<endl;
    cin>>n;
    cout<<"enter array elements"<<endl;
    int temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<"enter target "<<endl;
    cin>>target;
    Solution obj;
    vector<vector<int>> vec= obj.combinationSum(arr,target);
    for(int i=0;i<vec.size();i++)
    {
        cout<<"[ ";
        for(int j=0;j<vec[i].size();j++)
        {
            cout<<vec[i][j]<<" ";
        }

        cout<<"]"<<endl;
    }
    

}