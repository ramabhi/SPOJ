#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        list <int> stack1 ;
        string op;
        cin>>op;
        //cout<<op<<endl;
        for(int i = 0;i<op.size();i++)
        {
            if(op[i]<='z'&&op[i]>='a')cout<<op[i];
            else
            {
                if(op[i]=='(')stack1.push_front(op[i]);
                else
                {
                    if(op[i]==')')
                    {
                        while(stack1.front()!='(')
                        {
                            cout<<char(stack1.front());
                            stack1.pop_front();
                        }
                    }
                    else
                    {
                        stack1.push_front(op[i]);
                    }
                }
            }
        }
        while(!stack1.empty())
        {
            if(stack1.front()!='('&&stack1.front()!=')')
            {
                cout<<char(stack1.front());
            }
            stack1.pop_front();
        }
        cout<<endl;
    }
    return 0 ;
}