#include <iostream>

using namespace std;

int main()
{
    int a,b,lkkt;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    lkkt=a*b;
    while(a!=b){
      if(a>b)
      {
        a-=b;
      }
      else
        b-=a;
    }
    cout<<"lnko"<<a<<endl;
    cout<<"lkkt="<<lkkt/a;
    return 0;
}
