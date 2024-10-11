#include <iostream>
#include <fstream>
using namespace std;

int main()
{
int n,a[10][10],sor,oszlop;
ifstream in("input.txt");
in>>n;
for(sor=0;sor<n;sor++){
    for(oszlop=0;oszlop<n;oszlop++){
        in>>a[sor][oszlop];
    }
}
sor=0;
for(oszlop=0;oszlop<n;oszlop++){
      cout<<a[0][oszlop];
}
cout<<endl;
sor=n-1;
for(oszlop=0;oszlop<n;oszlop++){
    cout<<a[n-1][oszlop];
}
cout<<endl;
oszlop=0;
for(sor=0;sor<n;sor++){
    cout<<a[sor][0];
}
cout<<endl;
oszlop=n-1;
for(sor=0;sor<n;sor++){
    cout<<a[sor][n-1];
}
cout<<endl;
return 0;
}
