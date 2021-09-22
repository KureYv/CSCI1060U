# include <iostream>
using namespace std;

void login(string userName, string password)
{
    cout << "Enter user name: ";
    cin >> userName;
    cout << "Enter password: ";
    cin >> password;    
}



void solveExpression()
{
    int x = 5, y = 6;
    int result = 2*x + 5;
    cout << result << endl;
}

void display()
{
    cout << "Hello World" << endl;
}

void evenOdd(int i); 
// prototype method
int main()
{
    string userName, password;
    login(userName, password);
    evenOdd(5);
    return 0;
}

void evenOdd(int number)
{
    if(number % 2 == 0)
    {
        cout << "Even"<< endl;
    }
    else
    {
        cout << "Odd" << endl;
    }
}