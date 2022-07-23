#include<iostream>
#include<stack>
using namespace std;

void printStack(stack<int> st);
void sort(stack<int> &st);
void insert(stack<int> &st,int temp);

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
     cout<<"Sorted stack is\n";
     sort(st);
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
void sort(stack<int> &st)
{
    if(st.empty())
    return;
    int val=st.top();
    st.pop();
    sort(st);
    insert(st,val);
}

void insert(stack<int> &st,int temp)
{
    if(st.empty() || st.top()<=temp)
    {
        st.push(temp);
        return;
    }
    int val=st.top();
    st.pop();
    insert(st,temp);
    st.push(val);
}
