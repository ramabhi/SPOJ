#include<bits/stdc++.h>
using namespace std ;
int create_diff(vector< vector<int> > &arr,int n)
{
    vector<int> temp ;
    for(int i = 0;i<arr[n].size()-1;i++)
    {
        temp.push_back(arr[n][i+1]-arr[n][i]);
        //cout<<arr[n][i+1]-arr[n][i]<<" ";
    }
    //cout<<endl;
    arr.push_back(temp);
    for(int i = 0;i<temp.size()-1;i++)
    {
        if(temp[i]!=temp[i+1]||temp.size()==1)
        {
            return 0 ;
        }
    }
    return 1;
}
void make_changes(vector< vector <int> > &arr,int c)
{
    //vector <vector<int>> temp ;
    int levels = arr.size();
    for(int j = 0;j<c;j++)
    {
        for(int i = arr.size()-2;i>=0;i--)
        {
            int x = arr[i+1][arr[i+1].size()-1]+arr[i][arr[i].size()-1];
            arr[i].push_back(x);
        }
    }    
    return ;
}
int main()
{
    int t ;
    cin>>t;
    while(t--){
    vector < vector<int> > arr ;
    int s,c; 
    cin>>s>>c; 
    if(s!=1){
    vector <int> temp ;
    for(int i = 0;i<s;i++)
    {
        int x;
        cin>>x;
        temp.push_back(x);
    }
    arr.push_back(temp);
    int i = 0;
    while(1)
    {
        int flag ;
        flag=create_diff(arr,i);
        if(flag==1)break;
        i++;
        //break ;
    }
    make_changes(arr,c);
    for(int i = 0;i<c;i++)
    {
        cout<<arr[0][i+s]<<" ";
    }
    cout<<endl;}
    else
    {
        int x ;
        cin>>x;
        for(int i = 0;i<c;i++)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    }
    return 0;
}