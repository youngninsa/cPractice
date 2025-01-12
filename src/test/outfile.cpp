#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream file;

    file.open("test.txt",ios::out);

    file << "name:Alex" << endl;
    file << "gender:male" << endl;
    file << "age:19" << endl;

    file.close();
    return 0;
}
