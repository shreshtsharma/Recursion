#include<iostream>
using namespace std;
void fun(int n);
    int main()
{
    int n;
    cout<<"enter a  number \n";
    cin>>n;
    fun(n);
}
void fun(int n)
{
    // if(n>0)
    // {
    //     fun(n-1);
    //     cout<<n<<" ";
    // }
    if(n==0)
    {
        return;
    }
    fun(n-1);
    cout<<n<<" ";
}
