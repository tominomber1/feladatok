#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int n=10,i,j,aux;
    int v[100];
    for(i=0;i<n;i++)
    {
      v[i]=rand()%100;
    }
    for(i=0;i<n;i++)
    {
       cout<<v[i]<<" ";
    }
    cout<< endl;
    for (i=0; i< n-1; i++)
        {
            for (j=i+1; j< n; j++)
            {         if ( v[i]> v[j])
                {
                    aux= v[j];
                    v[j]= v[i];
                    v[i]=aux;
                }
            }
        }
        for(i=0;i<n;i++)
            {
        cout<<v[i]<<" ";
            }
    return 0;
}
