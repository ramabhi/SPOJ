#include<bits/stdc++.h>
using namespace std ;
struct tree
{
    string x ;
    tree* left ;
    tree* right ;    
};
int is_operator(char x)
{
    if(x=='/'||x=='*'||x=='+'||x=='-')
    {
        return 1;
    }
    else
    {
        return 0 ;
    }
}
stack <tree*> stack ;
et* construct(string expr)
{
    for(int i = 0;i<expr.size();i++)
    {
        if(is_operator(expr[i]))
        {
            
        }
    }
    return NULL;
}
int main()
{
    return 0 ;
}