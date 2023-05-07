#include <iostream> 
#include <fstream> 

using namespace std; 

int main()
{ 
    ifstream file("DSHS.txt");

    if(!file) 
    {
        cout << "Khong co du lieu!" << endl; 
    }
    else 
    {
        string name, sl, score;

        file >> sl; 
        cout << "So luong mon hoc: " << sl << endl;

        while(!file.eof()) 
        {
            file.ignore();
            getline(file, name); 
            cout << "Ten hoc sinh: " << name << endl; 
            cout << "Diem so: ";
        
            while(file.peek() != '\n' && !file.eof()) 
            {
                file >> score;
                cout << score << ' ';
            }
            cout << endl;
        }
    }
    file.close();
    
    char ch;
    cout << "Ban co muon them so lieu khong? <Y/N> " << endl; 
    cin >> ch;
    cin.ignore();

    if(toupper(ch) == 'Y') 
    {
        ofstream file1("DSHS.txt", ios::app);

        int sl = 5; 
        string name;
        double score; 

        cout << "SO lUONG MON HOC MAC DINH LA 5.\n";
        cout << "Nhap ten hoc sinh: "; 
        getline(cin, name);

        file1 << '\n' << name << endl;

        for(int i = 0; i < 5; i++) 
        {
            cout << "Nhap diem mon hoc thu: " << i + 1 << ": ";
            cin >> score; 
            if(i == 4) file1 << score;
            else file1 << score << ' ';
        }
        file1.close();
    }
    return 0;
}