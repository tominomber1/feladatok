#include <iostream>

using namespace std;

int main()
{
    int a,szj,hatvany=1,b=0,szamrendszer;
    cin>>a;
    cin>>szamrendszer;
    while(a>0)
    {
        szj=a%10;
        a=a/10;
        b=b+szj*hatvany;
        hatvany=hatvany*2;
    }
    cout<<b;
    return 0;
}
