#include <iostream>

using namespace std;

int main()
{
    int v[100];
    int n,i;
    cout<<"n=";
    cin>>n;
    for(i=0;i<n;i++)
    {
     cout<<"v["<<i<<"]=";
     cin>>v[i];
    }
    for(i=0;i<n-1;i++)
        {
        for(int j=i+1;j<n;j++)
        {
            if(v[i]>v[j])
                {
                int csere=v[i];
                v[i]=v[j];
                v[j]=csere;
            }
        }
    }
    for(i=0;i<n;i++){
     cout<<v[i]<<" ";

    }
    return 0;
}
