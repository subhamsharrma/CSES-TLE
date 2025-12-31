#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("07.11_cpp");   // open file

    string line;
    while (getline(file, line)) {
        cout << line << endl;    // read line by line
    }

    file.close();               // close fileq

    return 0;
}
