#include <iostream>

using namespace std;

int main()
{
    int n, oszto;
    bool prim=true;
    cout<<"n=";
    cin>>n;
    for(oszto=2;oszto<n/2+1;oszto++)
      {
      if(n%oszto==0)
        {
        prim=false;
      }
    }
      if(prim==true)
        {
        cout<<"szam prim";}
      else
       {
        cout<<"a szam nem prim;";
      }
    return 0;
}
