//recursive program to print numbers in decreasing order
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
    if(n>0)
    {
    // printing the number 
        cout<<n<<" ";
    // making a function call and decresing the number on every call;
         fun(n-1);
    }
}