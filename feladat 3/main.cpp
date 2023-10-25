#include <iostream>

using namespace std;

int main()
{
   int a,b=0;
   cout<<"a=";
   cin>>a;
   b=a%10;
   if(b%2==0)
   {
     cout<<"paros";
   }
   else {
    cout<<"paratlan";
   }
   cout<<b;
    return 0;
}
