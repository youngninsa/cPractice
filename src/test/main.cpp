#include <iostream>
#include <map>
#include <string>

using namespace std;

void printMap(map<string,int> &);

int main()
{
    string s;
    map<string,int> m;
    cin >> s;
    while(s != "0")
    {
        m[s]++;
        cin >> s;
    }
    printMap(m);

    return 0;
}

void printMap(map<string,int> &m)
{
    for(auto & it : m)
        cout << "key = " << it.first << " value = " << it.second << endl;
}