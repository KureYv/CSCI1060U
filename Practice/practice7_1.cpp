#include <iostream>
#include <string>
#include <fstream>


using namespace std;

void writeToFile(int number)
{
    ofstream file;
    file.open("prac7.txt",ios::app);
    if(number % 2 == 0)
    {
        file << number << endl;

    }
    file.close();

}

void driver()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    writeToFile(number);
}

int main()
{
    driver();

    return 0;
}
