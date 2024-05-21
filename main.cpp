#include <iostream>

using namespace std;

int main()
{
    int a,b,n,s;
    cin>>a;
    cin>>b;
    n=a;
    s=b;
    while(a!=b)
    {
        if(a>b){
            a=a-b;
        }
        else
            b=b-a;
    }
    cout<<n/a<<endl;
    cout<<s/a;
    return 0;
}
