#include<iostream>
#include<vector>
using namespace std;
void solve(int ind,int arr[],vector<int> vec,int n,int sum,int k);
bool printOnlyOne(int ind,int arr[],vector<int> vec,int n,int sum,int k);
int countIt(int ind,int arr[],int n,int sum,int k);

int main(){
    int arr[]={1,2,1};
    int k=2;
    int sum=0;
    vector<int> vec;
    int n=3;
    solve(0,arr,vec,n,0,k);
    //function to print only one output;
    printOnlyOne(0,arr,vec,n,0,k);
    //function to count number of subsets with sum equal k;
    cout<<endl<<countIt(0,arr,n,0,k);
}
void solve(int ind,int arr[],vector<int> vec,int n,int sum,int k)
{
    if(ind==n)
    {
        if(sum==k)
        {
            for(auto it:vec)
            {
                cout<<it<<" ";
            }
        }
        cout<<endl;
        return;
    }
    vec.push_back(arr[ind]);
    sum+=arr[ind];
    solve(ind+1,arr,vec,n,sum,k);
    vec.pop_back();
    sum-=arr[ind];
    solve(ind+1,arr,vec,n,sum,k);

}
bool printOnlyOne(int ind,int arr[],vector<int> vec,int n,int sum,int k)
{
    if(ind==n)
    {
        if(sum==k)
        {
            for(auto it:vec)
            {
                cout<<it<<" ";
            }
            return true;
        }
        else
        return false;
    }
    vec.push_back(arr[ind]);
    sum+=arr[ind];
    if(printOnlyOne(ind+1,arr,vec,n,sum,k)==true)
    {
        return true;
    }
    vec.pop_back();
    sum-=arr[ind];
    if(printOnlyOne(ind+1,arr,vec,n,sum,k)==true)
    {
        return true;
    }
    return false;
}
int countIt(int ind,int arr[],int n,int sum,int k)
{
    if(ind==n)
    {
        if(sum==k)
        {
            return 1;
        }
        else 
        return 0;
    }
    sum+=arr[ind];
    int l=countIt(ind+1,arr,n,sum,k);
    sum-=arr[ind];
    int r=countIt(ind+1,arr,n,sum,k);

    return l+r;
}