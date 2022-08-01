#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<string> letterCasePermutation(string IP) {
        vector<string> res;
        string OP="";
        permute(IP,OP,res);
        return res;
    }
    void permute(string IP,string OP,vector<string> &res)
    {
        if(IP.size()==0)
        {
            res.push_back(OP);
            return;
        }
        if(IP[0]>='0' && IP[0]<='9')
        {
            OP.push_back(IP[0]);
            IP.erase(IP.begin()+0);
            permute(IP,OP,res);
        }
        else{
        string OP1=OP;
        string OP2=OP;
        OP1.push_back(tolower(IP[0]));
        OP2.push_back(toupper(IP[0]));
        IP.erase(IP.begin()+0);
        permute(IP,OP1,res);
        permute(IP,OP2,res);
        }
        
    }
};
int main()
{
    string st;
    cout<<"enter a string"<<endl;
    cin>>st;
    Solution obj;
    vector<string> res=obj.letterCasePermutation(st);
    cout<<"result is"<<endl;
    for(int i=0;i<st.size();i++)
    {
        cout<<res[i]<<" ";
    }
}