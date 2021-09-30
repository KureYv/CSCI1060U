#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool isAbove60(int age)
{
    if (age > 60){
        return true;
    }
    return false;
}

void driver(){
    ifstream file;
    string name,name2;
    int age;
    int counter = 0;
    file.open("people.csv");
    while(!file.eof())
    {
        if(counter != 2){
            counter+=1;
            getline(file,name2,',');
            name +=name2 + ' ';
        }
        else{
            file >> age;
            if(isAbove60(age)){
                cout << name;
            }
            counter = 0;
            name = "";
        }
    }

    file.close();
}

int main()
{
    cout << "People above 60"<<endl;
    cout << "***************";
    driver();
    return 0;
}