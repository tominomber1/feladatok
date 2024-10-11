#include <iostream>
#include <fstream>
using namespace std;

int main()
{
int n,a[10][10],b[10][10],szorzat[10][10],sor,oszlop,S;
ifstream in("input.txt");
in>>n;
for(sor=0;sor<n;sor++){
    for(oszlop=0;oszlop<n;oszlop++){
        in>>a[sor][oszlop];
        in>>b[sor][oszlop];
    }
}
for(sor=0;sor<n;sor++){
    for(oszlop=0;oszlop<n;oszlop++){
            for(int index=0;index<n;index++){
       szorzat[sor][oszlop]+=a[sor][index]*b[index][oszlop];
    }
}
}
for(sor=0;sor<n;sor++){
    for(oszlop=0;oszlop<n;oszlop++){
          cout<<szorzat[sor][oszlop]<<" ";
    }
    cout<<endl;
}
    return 0;
}
