#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream in("input.txt");
    ofstream out("output.txt");
    int n,v[20];
    in>>n;
    for(int i=0;i<n;i++){
        in>>v[i];
        out<<v[i]<<" "<<v[i]/2<<endl;
    }
    out.close();
    in.close();
    return 0;
}
