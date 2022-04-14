//program to find factorial of a number.
#include<iostream>
using namespace std;
int fact(int n);
int main()
{
    int num;
    cout<<"enter a number to find factorial of :\n";
    cin>>num;
    long int res=fact(num);
    cout<<"factorial of number is :"<<res;
    return 0;
}
int fact(int n)
{
    if(n==0|| n==1)
    {
         return 1;
    }
    else 
    return n*fact(n-1);
}