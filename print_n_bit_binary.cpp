#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:	
	vector<string> NBitBinary(int N)
	{
	    // Your code goes here
	    vector<string> vec;
	    int ones=0,zeroes=0;
	    string op="";
	    fun(N,ones,zeroes,op,vec);
	    return vec;
	}
	void fun(int n,int ones,int zeroes,string op,vector<string> &vec)
	{
	    if(n==0)
	    {
	        vec.push_back(op);
	        return;
	    }
	    string op1=op;
	    op1.push_back('1');
	    fun(n-1,ones+1,zeroes,op1,vec);
	    
	    if(ones>zeroes)
	    {
	        string op2=op;
	        op2.push_back('0');
	        fun(n-1,ones,zeroes+1,op2,vec);
	    }
	}
};
int main()
{
    int n;
    cout<<"enter a integer : "<<endl;
    cin>>n;
    Solution obj;
    vector<string> str=obj.NBitBinary(n);
    cout<<"result is : "<<endl;
    for(int i=0;i<str.size();i++)
    {
        cout<<str[i]<<" ";
    }
}