#include<bits/stdc++.h>
using namespace std;
void move_zeros(int a[],int n)
{
    int i = 0;
    for(int j=0;j<=n-1;j++)
    {
        if(a[j]!=0)
        {
            swap(a[i],a[j]);
            i++;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<=n-1;i++)
    {
        cin>>a[i];
    }
    move_zeros(a,n);
    for(int i=0;i<=n-1;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}