#include<iostream>
#include<stack>
using namespace std;
void printStack(stack<int> st);
void delete_middle(stack<int> &st,int k);

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
     cout<<"resultant stack is\n";
     delete_middle(st,(st.size()/2)+1);
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
void delete_middle(stack<int> &st,int k)
{
    if(st.size()==k)
    {
        st.pop();
        return;
    }
    int val=st.top();
    st.pop();
    delete_middle(st,k);
    st.push(val);
}