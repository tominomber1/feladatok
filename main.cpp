#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int matrix[10][10],sor,oszlop,n,e,k,ny,d,S;
    ifstream in("input.txt");
    in>>n;
    for(sor=0;sor<n;sor++){
        for(oszlop=0;oszlop<n;oszlop++){

            in>>matrix[sor][oszlop];
        }
    }
    for(sor=0;sor<n;sor++){
        for(oszlop=0;oszlop<n;oszlop++){
            in>>matrix[sor][oszlop];

    }
    if(sor<oszlop){
            {
               if(sor+oszlop<n-1){
                 e+=matrix[sor][oszlop];
               }
               if(sor+oszlop>n-1){
                k+=matrix[sor][oszlop];
               }
            }
    }
    if(sor>oszlop){
        if(sor+oszlop<n-1){
            ny+=matrix[sor][oszlop];
        }
    if(sor+oszlop>n-1){
        d+=matrix[sor][oszlop];
    }
    }
    }
    cout<<"E="<<e<<endl;
    cout<<"K="<<k<<endl;
    cout<<"NY="<<ny<<endl;
    cout<<"D="<<d<<endl;
    return 0;
}
