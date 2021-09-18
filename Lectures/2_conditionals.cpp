#include <iostream>

using namespace std;

int main()
{
    int marks;
    cout<< "Enter marks: ";
    cin>>marks;

    if(marks>=90)
    {
        cout << "You grade is A" << endl;
    }
    else if(marks>=80)
    {
        cout << "You grade is B" << endl;
    }
    else if(marks>=70)
    {
        cout << "You grade is C" << endl;
    }
    else if(marks>=60)
    {
        cout << "You grade is D" << endl;
    }
    else
    {
        cout << "You grade is E" << endl;
    }

    return 0;
}
