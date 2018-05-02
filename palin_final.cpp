#include<bits/stdc++.h>
using namespace std ;
void add_1(string &s1,int n )
{
    //cout<<"hello"<<endl;
    int i = (n-1)/2;
    int carry = 1;
    //cout<<"$$$$$$"<<i<<endl;
    while(carry>0&&i>=0)
    {
        if(s1[i]=='9')
        {
            //cout<<"hello "<<i<<endl;
            s1[i]='0';
            s1[n-i-1]=s1[i];
            i--;
            //cout<<"I&&"<<i<<endl;
        }
        else
        {
            //cout<<"****"<<endl;
            carry=0;
            s1[i]++;
            s1[n-1-i]=s1[i];
            i--;
            break ;
        }
        
    }
    while(i>=0)
    {
        s1[n-i-1]=s1[i];
        i--;
    }
    return  ;
}
int main()
{
    int t ;
    cin>>t;
    while(t--){
    string s1 ;
    cin>>s1;
    int n = s1.size();
    
    //add_1(s1,s1.size());
    //scan through the array 
    int i = (n-1)/2;
    int j = n-i-1 ;
    while(i>=0&&j<=n-1)
    {
        if(s1[i]!=s1[j])
        {
            break ;
        }
        i--;j++;
    }
    //cout<<"i "<<i<<" j "<<j<<endl;
    if(i<0&&j==n)
    {
        add_1(s1,n);
        //cout<<"hello world"<<endl;
    }
    else
    {
        if(s1[i]>s1[j])
        {
            int i1=i;
            while(i1>=0)
            {
                s1[n-i1-1]=s1[i1];
                i1--;
            }
        }
        else
        {
            add_1(s1,n);
        }
    }
    if(s1[0]!='0')
        cout<<s1<<endl;
    else
    {
        cout<<"1";
        for(int i = 0;i<n-1;i++)
            cout<<"0";
        cout<<"1"<<endl;
    }
    }
    return 0 ;
}