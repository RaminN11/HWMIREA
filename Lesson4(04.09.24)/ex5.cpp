#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int size = 100;
    int height = 21;

    vector<string> sinGraph(height, string(size, ' ')); 
    sinGraph[height / 2] = string(size, '-'); 

    for (int i = 0; i < size; i++) {
        sinGraph[(round(10 * sin(i / 4.5) + 10))][i] = '*';
    }

    for (auto s : sinGraph) {
        cout << "|";
        cout << s << endl;
    }
}