#include<bits/stdc++.h>
using namespace std;
int remove_duplicates(int a[], int n)
{
    set<int> s;
    for(int i=0;i<=n-1;i++)
    {
        s.insert(a[i]);
    }
    int j=0;
    for(auto k: s)
    {
        a[j]=k;
        j++;
    }
    return s.size();
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<remove_duplicates(a,n)<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}