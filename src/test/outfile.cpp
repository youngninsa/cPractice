#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream file;

    file.open("test.txt",ios::out);

    file << "r  v  100000123" << endl;
    file << "h  h  100000147" << endl;
    file << "c  c  100000348" << endl;

    file.close();
    return 0;
}
