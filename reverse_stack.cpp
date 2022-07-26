#include<iostream>
#include<stack>
using namespace std;

void printStack(stack<int> st);
void reverseStack(stack<int> &st);
void insert(stack<int> & st,int val);

int main()
{
     stack<int> st;
     int n;
     cout<<"number of elements in stack?\n";
     cin>>n;
     int temp;
     while(n!=0)
     {
        cin>>temp;
        st.push(temp);
        n--;
     }
     cout<<"Given Stack is\n";
     printStack(st);
     cout<<"\n";
     cout<<"reversed stack is\n";
     reverseStack(st);
     printStack(st);
}
void printStack(stack<int> st)
{
    while(!st.empty())
    {
        cout<<st.top()<<"\t";
        st.pop();
    }
}
void reverseStack(stack<int> &st)
{
    if(st.empty())
    {
        return;
    }
    int val=st.top();
    st.pop();
    reverseStack(st);
    insert(st,val);
}
void insert(stack<int> & st,int val)
{
    if(st.empty())
    {
        st.push(val);
        return;
    }
    int temp=st.top();
    st.pop();
    insert(st,val);
    st.push(temp);
}