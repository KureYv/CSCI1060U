#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool isYour(string word)
{
    if (word == "Your")
    {
        return true;
    }
    else if(word == "your")
    {
        return true;
    }
    return false;

}


void driver()
{
    ifstream file;
    string s;
    int counter = 0;
    file.open("Quote.txt");
    while(!file.eof())
    {
        file >> s;
        if(isYour(s) == true){
            counter+=1;
        }
    }
    cout << "Total 'Your' count: "<<counter;
    file.close();

}

int main()
{
    driver();
    return 0;
}