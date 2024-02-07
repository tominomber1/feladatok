#include <iostream>

using namespace std;

int main()
{
    int n,i,szam,szorzat=1;
    cout<<"n=";
    cin>>n;
   for(i=0;i<n;i++)
    {
      cout<<"szam=";
      cin>>szam;
      for(int oszto=2;oszto<=szam/2;oszto++)
        {
        if(oszto%2!=0)
          {
          szorzat=szorzat*oszto;
        }

      }
    }
    cout<<"szorzat="<<szorzat;
    return 0;
}
