#include<iostream>
using namespace std;
void PWS(string IP, string OP);

int main(){
    string IP;
    string OP;
    cout<<"enter the string"<<endl;
    cin>>IP;
    OP="";
    OP.push_back(IP[0]);
    IP.erase(IP.begin() +0);
    PWS(IP,OP);
}
void PWS(string IP, string OP)
{
    if(IP.size()==0)
    {
        cout<<OP<<endl;
        return;
    }
    string OP1=OP;
    string OP2=OP;
    OP1.push_back(' ');
    OP1.push_back(IP[0]);
    OP2.push_back(IP[0]);
    IP.erase(IP.begin() +0);
    PWS(IP,OP1);
    PWS(IP,OP2);
}