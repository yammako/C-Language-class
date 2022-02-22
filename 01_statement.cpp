#include <iostream>

using namespace std;

// User-defined function
int addNumbers(int first_param, int second_param){

    int result = first_param + second_param;
    return result;
}

int main(){

    // Assign the value to variables
    //int first_number {3};
    //int second_number {7};

    int first_number = 3;
    int second_number = 7;

    cout << "First number : " << first_number << endl;
    cout << "Second number : " << second_number << endl;

    int sum = first_number + second_number;
    cout << "Sum : " << sum << endl;

    // Call the function
    sum = addNumbers(13, 7);
    cout << "Sum : " << sum << endl;

    // Call the function
    sum = addNumbers(35, 20);
    cout << "Sum : " << sum << endl;
    
    // Call the function in cout
    cout << "Sum : " << addNumbers(100, 50) << endl;
    return 0;
}