#include<iostream>
#include<vector>
using namespace std;
void caseChange(string IP,string OP,vector<string> &res);
int main()
{
    string IP;
    string OP;
    cout<<"enter string"<<endl;
    cin>>IP;
    vector<string> res;
    caseChange(IP,OP,res);
    cout<<"result is"<<endl;
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<endl;
    }
}
void caseChange(string IP,string OP,vector<string> &res)
{
    if(IP.size()==0)
    {
        res.push_back(OP);
        return;
    }
    char temp=IP[0];
    temp-=32;
    string OP1=OP,OP2=OP;
    OP1.push_back(temp);
    OP2.push_back(IP[0]);
    IP.erase(IP.begin()+ 0);
    caseChange(IP,OP1,res);
    caseChange(IP,OP2,res);
}