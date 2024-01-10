#include <iostream>

using namespace std;

int main()
{
    int n,aux,szamjegy,ujszam;
    cout<<"n=";
    cin>>n;
    ujszam=0;
    aux=n;
    while(aux>0)
      {
      szamjegy=aux%10;
    aux=aux/10;
    ujszam=ujszam*10+szamjegy;
    }
    if(n==ujszam)
      {
      cout<<"a szam pallindrom";}
    else
    {
      cout<<"a szam nem pallindrom";}
    return 0;
}
