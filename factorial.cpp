#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long t ;
    cin>>t;
    while(t--){
    long long n ; 
    long long sum = 0;
    cin>>n;
    while(n!=0)
    {
        sum+=n/5;
        n=n/5;
    }
    cout<<sum<<endl;}
    return 0;
}