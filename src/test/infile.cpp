#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int t=0;
    string line;
    ifstream ifs;

    ifs.open("test.txt",ios::in);
    if(!ifs.is_open())
    {
        cout << "the file open is error" << endl;
        return -1;
    }
    while (ifs >> line){cout << line << endl; t++;}
    ifs.close();
    return 0;
}
