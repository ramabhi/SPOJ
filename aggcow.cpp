#include<bits/stdc++.h>
using namespace std ;
long long check(vector <int> &arr,long long x,long long c)
{
    long long i = 1,count=1;
    long long prev_loc = arr[0];
    //cout<<"called for c "
    while(i<arr.size())
    {
        if(arr[i]-prev_loc>=x)
        {
            count++;
            prev_loc = arr[i];
            if(count==c)return 1;
        }
        i++;
    }
    return 0;
}
int main()
{
    long long t ;
    cin>>t;
    while(t--){
    long long n,c ;
    cin>>n>>c;
    vector <int> arr ;
    for(long long i = 0;i<n;i++)
    {
        long long x;
        cin>>x; 
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    //for(long long i = 0;i<arr.size();i++)cout<<arr[i];
    //cout<<check(arr,1,c);
    long long right = 1000000000;
    long long left = 0;
    long long mid;
    long long answer = 0 ;
    while(left!=right)
    {
         mid = (left+right)/2;
        if(check(arr,mid,c))
        {
            answer = mid;
            
            //cout<<"going right for "<<mid<<endl;
            left = mid + 0+1;
        }
        else
        {
            //cout<<"going left for "<<mid<<endl;
            right = mid + 1-1;
        }
    }
    cout<<answer<<endl;}
    return 0;
}