//how static and global variables work in recursion.
#include<iostream>
using namespace std;
//normal function
// using global variable;
int y=0;
int fun(int n)
{

    if(n>0)
    {
        
        return fun(n-1)+n;
    }
    return 0;
}
//function using static variable
int fun1(int n)
{
    static int x=0;
    if(n>0)
    {
        x++;
        return fun1(n-1)+x;
    }
    return 0;
}
//using global variable
int fun2(int n)
{
    
    if(n>0)
    {
        y++;
        return fun2(n-1)+y;
    }
    return 0;
}
int main()
{
    int a=5;
  
    cout<<fun(a);
     cout<<endl<<fun1(a);
     cout<<endl<<fun2(a);
    return 0;
}