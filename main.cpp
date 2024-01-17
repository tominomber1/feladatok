#include <iostream>

using namespace std;

int main()
{
    int a,b,aux,ujszam;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    for(int szam=a;szam<=b;szam++){
      bool prim=true;
      for(int oszto=2;oszto<=szam/2;oszto++){
        if(szam%oszto==0){
          prim=false;
        }
      }
      aux=szam;
      ujszam=0;
    while(aux!=0){
      int szj=aux%10;
      aux/=10;
      ujszam=ujszam*10+szj;
    }
    if((ujszam==szam)&&(prim)){
      cout<<szam<<endl;
    }
    }
    return 0;
}
