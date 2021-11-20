#include <iostream>
#include <string>
using namespace std;

int get_num(){
    int num;

    cout << "Enter a number: ";
    cin >> num;
    cin.clear();
    cin.ignore(1000, '\n');

    return num;
}

int get_sum(int& num1, int& num2){
    int sum = num1 + num2;
    
    return sum;
}

int main(){
    int num1, num2;

    num1 = get_num();
    num2 = get_num();

    int sum = get_sum(num1, num2);

    cout << "Result: " << sum;
}