#include <iostream>

using namespace std;

int factorial(int number){
    int sum = 1;
    int numbers = number;
    for (int i =1;i<= numbers;i++){
        sum = sum*i;
        cout << sum << endl;
        
    }
    return sum;
}

int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << factorial(number);

    return 0;
}