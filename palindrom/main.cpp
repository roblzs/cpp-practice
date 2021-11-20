#include <iostream>
#include <string>
using namespace std;

int get_reverse_number(int& num){
    string reverse_num_string = "";

    string num_string = to_string(num);
    int num_len = num_string.length() - 1;

    while(num_len >= 0){
        char num_part = num_string.at(num_len);
        reverse_num_string.push_back(num_part);

        num_len --;
    }

    int reverse_num = stoi(reverse_num_string);

    return reverse_num;
}

bool check_if_palindrom(int& n, int& reversed_n){
    bool result;

    result = n == reversed_n;

    return result;
}

int main(){
    int n;

    cout << "Enter number: ";
    cin >> n;

    int reversed_n = get_reverse_number(n);

    bool result = check_if_palindrom(n, reversed_n);

    if(result){
        cout << "Is palindrom";
    }else{
        cout << "Is not palindrom";
    }
}