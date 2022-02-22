#include <iostream>
#include <string>

using namespace std;

int main(){

    cout << "Hello C++20 " << endl;

    int age{21};
    cout << "Age : " << age << endl;

    // Error message
    cerr << "Error message : Something is wrong" << endl;

    // Log message
    clog << "Log message : Something happend" << endl;

    // Input Full name (Data with spaces)
    string full_name;
    int age3;
    cout << "Please type your full name and age : " << endl;
    getline(cin,full_name);
    cin >> age3;
    cout << "Hello " << full_name << " you are " << age3 << " years old!" << endl;

    int age1;
    string name;

    cout << "Please type your name and age : " << endl;
    // Input data using "cin"
    cin >> name;
    cin >> age1;

    cout << "Hello " << name << " you are " << age1 << " years old!" << endl;
    
    // Input data using "cin" (Different style)
    cout << "Please type your name and age : " << endl;
    cin >> name >> age1;
    cout << "Hello " << name << " you are " << age1 << " years old!" << endl;

    return 0;


}