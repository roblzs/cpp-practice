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

bool check_if_equal(int& n, int& reversed_n){
    bool result;

    result = n == reversed_n;

    return result;
}

void print_six_digit_palindromes(){
    for(int i = 100000; i < 1000000; i++){
        int reversed_i = get_reverse_number(i);

        bool result = check_if_equal(i, reversed_i);

        if(result){
            cout << i << endl;
        }
    }
}

void check_if_palindrome(){
    int n;

    cout << "Enter number: ";
    cin >> n;

    int reversed_n = get_reverse_number(n);

    bool result = check_if_equal(n, reversed_n);

    if(result){
        cout << "Is palindrom";
    }else{
        cout << "Is not palindrom";
    }
}

int main(){
    string test_case = "";

    cout << "A: Check if palindrome" << endl << "B: Get six digit palindromes" << endl;
    cout << "Test case: ";
    cin >> test_case;

    if(test_case == "A" || test_case == "a"){
        check_if_palindrome();
    }else if(test_case == "B" || test_case == "b"){
        print_six_digit_palindromes();
    }else{
        cout << "Something went wrong!";
        main();
    }
}