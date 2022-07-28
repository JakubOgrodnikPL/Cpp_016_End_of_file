#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

float numbers[100];

int main()
{
    cout << "This program is for learnin EOF - end of file" << endl;

    string line;
    int linenumber;

    fstream file;
    file.open("pomiary.txt", ios::in);

    if(file.good()==false) cout<<"No such file";

    int counter=0;

    while(!file.eof())
    {
        getline(file,line);
        numbers[counter]=atof(line.c_str());
        counter++;
    }
    file.close();
    cout<<"Number of measurements given in file: "<<counter<<endl;

    for(int i=0; i<counter; i++)
    {
        cout<<numbers[i]<<endl;
    }

    return 0;
}
