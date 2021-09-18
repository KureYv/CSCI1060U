#include <iostream>
using namespace std;

int main(){
    char a;
    cout << "Enter a letter: ";
    cin >> a;
    if((a >= 32 and a<=47) or (a>=58 and a<=64) or (a>=91 and a<=96) or (a>=123 and a<=126)  )
    {
        cout << "Entered letter is a special character";
    }
    else if(a>=48 and a<= 57){
        cout << "Entered letter is a number";
    }
    else{
        cout << "Entered letter is a letter";
    }

    return 0;
}