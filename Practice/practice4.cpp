#include <iostream>
using namespace std;

int main(){
    int num2,lastdigit;
    int num;
    cout << "Input a number: ";
    cin >> num;
    while (num != 0){
        lastdigit = num%10;
        num2+=lastdigit;
        num = (num - lastdigit)/10;
       
    }
    cout << num2 << endl;
    if(num2 == 0){
        cout << "No numbers"<<endl;
    }    
    return 0;
}   