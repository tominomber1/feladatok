#include <iostream>
#include <fstream>
using namespace std;

int main()
{
int a[10][10],n,sor,oszlop;
ifstream in("input.txt");
in>>n;
for(sor=0;sor<n;sor++){
    for(oszlop=sor+1;oszlop<n;oszlop++){
        in>>a[sor][oszlop];
    }
}
for(sor=0;sor<n;sor++){
    for(oszlop=0;oszlop<n;oszlop++){
        in>>a[sor][oszlop];

if(sor==oszlop){
    a[sor][oszlop]=1;
}
if(sor+oszlop==n-1){
    a[sor][oszlop]=1;
}
}
}
for(sor=0;sor<n;sor++){
    for(oszlop=sor+1;oszlop<n;oszlop++){
        in>>a[sor][oszlop];
    }

cout<<a[sor][oszlop]<<" ";
}
cout<<endl;
in.close();
return 0;
}
