#include <iostream>
#include <fstream>

using namespace std;

int main() {

    string rc;
    ifstream file("Matrix");

    if(!file) {
        cout << "Khong co du lieu\n";
    }
    else {
        getline(file, rc);
        cout << "So hang, so cot: ";
        
        while(!file.eof()) {
            cout << rc << '\n';
            getline(file, rc);
        }
    }
    file.close();
}