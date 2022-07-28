#include<iostream>
using namespace std;
void printSubsets(string ip,string op);
int main()
{
    string ip;
    cout<<"enter a string"<<endl;
    cin>>ip;
    string op="";
    cout<<"subsets are"<<endl;
    printSubsets(ip,op);
}
void printSubsets(string ip,string op)
{
    if(ip.size()==0)
    {
        cout<<op<<endl;
        return;
    }
    string op1=op;
    string op2=op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    printSubsets(ip,op1);
    printSubsets(ip,op2);
}