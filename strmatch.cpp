#include<bits/stdc++.h>
using namespace std ;
struct node 
{
    long long  is_end_of_word ;
    node*alphabets[26] ;
};
node * new_node()
{
    node * x = new node ;
    for(long long  i = 0;i<26;i++)
    {
        x ->alphabets[i]=NULL;    
    }
    return x;
}
void insert(string s1,node * root)
{
    long long  n = s1.size();
    node * temp = root;
    for(long long  i = 0;i<n;i++)
    {
        if(temp->alphabets[s1[i]-'a']!=NULL)
        {
            //temp->is_end_of_word++;
            temp = temp -> alphabets[s1[i]-'a'];
            temp->is_end_of_word++;
        }
        else
        {
            node * neymar = new_node();
            neymar->is_end_of_word = 0 ;
            temp -> alphabets[s1[i]-'a'] = neymar ;
            temp = temp->alphabets[s1[i]-'a'] ;      
            temp -> is_end_of_word++; 
      
        }
    }
    return ; 
} 
long long  search(string s1,node * root)
{
    node * temp = root;
    node * pen ;
    long long  flag  = 0;
    for(long long  i = 0;i<s1.size();i++)
    {
        if(temp->alphabets[s1[i]-'a']==NULL)
        {
            //pen = temp ;
            //cout<<"fuck off it is not there\n";
            return 0;
        }
        else
        {
            pen = temp ;
            temp = temp -> alphabets[s1[i]-'a'];
        }
    }
    if(s1.size()==1)
    {
        return temp ->is_end_of_word ;
    }    //cout<<"there is there\n";
    //cout<<" count1 "<<pen->is_end_of_word<<endl;
    //return pen->is_end_of_word;
    else
    {
        return temp -> is_end_of_word;
    } 
}
int  main()
{
    long long  q,n ;
    cin>>n>>q;
    node * root = new_node() ;
    root->is_end_of_word=0;
    string s1 ;
    cin>>s1 ;
    for(long long  i = 1;i<=s1.size();i++)
    {
        string tmp(s1.end()-i,s1.end()) ;
        //cout<<tmp<<endl;
        insert(tmp,root);

    }
    
    while(q--){
    string search1 ;
    string s2 ;
    //cin>>s2 ;
    cin>>search1 ;
    /*if(search1.size()==1)
    {
        long long  count1 = 0;
        for(long long  i = 0;i<s1.size();i++)
        {
            if(s1[i]==search1[0])
            {
                count1++;
            }
        }
        cout<<count1<<endl;
    }*/
   // else{
    /*insert(s1,root);
    insert(s2,root);*/
    cout<<search(search1,root)<<endl;}
    return 0 ;
}