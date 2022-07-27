#include<iostream>
using namespace std;
void TOH(int n,int S,int D,int H);
int main()
{
    int n;
    cout<<"enter number of disks"<<endl;
    cin >>n;
    int S=1;
    int H=2;
    int D=3;
    TOH(n,S,D,H);
}
void TOH(int n,int S,int D,int H)
{
    //base condition;
    if(n==1)
    {
        //moving disk from source to destination;
        cout<<" from "<<S<<" to "<<D<<endl;
        return;
    }
    TOH(n-1,S,H,D);
    cout<<" from "<<S<<" to "<<D<<endl;
    TOH(n-1,H,D,S);

}