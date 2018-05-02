//C++ program to prlong long  prlong long  all primes smaller than
// n using segmented sieve
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
long long prime_array[33000]={-1};
void gen_prime()
{
    long long  j = 0;
    for(long long  i = 2;i<33000;i++)
    {
        long long  flag = 0;
        long long  temp=sqrt(i);
        for(long long  j = 2;j<=temp;j++)
        {
            if(i%j==0)
            {
                flag = 1 ;
                break ;
            }
            
        }
        if(flag==0)
        {
            //cout<<i<<endl;
            prime_array[j++]=i;
        }
    }
}
void print_primes(long long  m,long long  n)
{
    for(long long  i = m;i<=n;i++)
    {
        
        long long  flag = 0;
        long long  temp = sqrt(i);
        for(long long  j =0;prime_array[j]<=temp;j++)
        {
            //cout<<prime_array[j]<<"***"<<i<<endl;
            if(i%prime_array[j]==0)
            {
                flag = 1;
                
                break;
            }
        }
        if(flag==0)cout<<i<<endl;  
    }
}
int  main()
{
    long long  n,m,t ; 
    gen_prime();
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        if(m==1)m++;
        print_primes(m,n);
    }
    return 0 ;
}