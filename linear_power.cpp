//Given a number x, and another number n,
// you are required to calculate x raised to the power n i.e. x multiplied n times.
#include<iostream>
using namespace std;
int LinearPow(int num,int pow)
{
    if(pow==0)
    {
        return 1;
    }
    else 
    return num*LinearPow(num,pow-1);
}
int main()
{
    cout<<"enter a number"<<endl;
    int num,pow;
    cin>>num;
    cout<<"enter power\n";
    cin>>pow;
    int res=LinearPow(num,pow);
    cout<<"result is : "<<res;
}
