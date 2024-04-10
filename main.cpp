#include <iostream>
#include <fstream>

using namespace std;

int main(){

    int a;
    ifstream myfile ("input.txt");
    while (myfile >> a)
    {
        cout << "a beolvasott szam:" << a << endl;
    }
    return 0;
}
