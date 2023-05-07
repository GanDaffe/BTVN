#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
    ifstream file("DSSV");
    ofstream file1("KQHT.txt", ios::app);
    string subject[5] = {"DSTT" , "GTKT" , "JAVA", "CPP", "PYTHON"};

    if(!file) 
    {
        cout << "Khong co du lieu" << endl;
    }
    else 
    {
        string name; 
        int sl, count, index = 0; 
        double score;

        file >> sl; 
        cout << "So luong mon hoc: " << sl << '\n';
        file1 << "So luong mon hoc: " << sl << endl; 

        while(!file.eof()) 
        {  
            index = 0;
            count = 0;
            
            file.ignore(); 
            getline(file, name);
            cout << "Ten sinh vien: " << name << '\n';
            file1 << "Ten sinh vien: " << name << endl;

            while(file.peek() != '\n' && !file.eof()) 
            {
                file >> score; 
                cout << "Diem mon " << subject[index++] << ": " << score << endl;
                if(score < 5.5) count++;
            }
            cout << "So mon hoc duoi 5.5: " << count << '\n';
            file1 << "So mon hoc duoi 5.5: " << count << endl;
        }
        file1.close();
        file.close();
    }

}