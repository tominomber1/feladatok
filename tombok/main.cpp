#include <iostream>

using namespace std;

int main()
{
    int tomb[200],index,n;
    cout<<"n=";
    cin>>n;

    for(index=0;index<n;index++)
    {
      cout<<"tomb["<<index<<"]=";
     cin>>tomb[index];
    }
     for(index=0;index<n;index++)
      {
        cout<<tomb[index]<<" ";
      }

    return 0;
}
