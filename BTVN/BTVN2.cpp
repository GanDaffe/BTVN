#include <iostream> 
#include <fstream>

using namespace std;

int main() {
    ifstream file("DSTT");

    if(!file) 
    {
        cout << "Khong co du lieu!";
    }
    else 
    {
        string name;
    
        int count = 0;
        while(!file.eof()) 
        {
            getline(file, name);
            cout << name << '\n';
            count += 1;
        }
        cout << "So tinh thanh trong DS: " << count;
        file.close();
    }
}
  
    