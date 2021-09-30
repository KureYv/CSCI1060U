#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// int main()
// {
//     string word;

//     cout << "Enter a word: ";
//     getline(cin, word);
//     word = word + "\n";

//     ofstream file;
//     file.open("myfile.txt",ios::app);
//     file << word;
//     file.close();

//     cout << "You entered: " << word;
//     return 0;
// }


int main()
{
    string word;

    
    ifstream file;
    file.open("myfile.txt");

    // while(!file.eof())
    // {
    //     getline(file, word);
    //     cout << word << endl;
    // }

    file.seekg(6);
    getline(file,word);
    cout << word << endl;

    file.close();

    

    return 0;
}