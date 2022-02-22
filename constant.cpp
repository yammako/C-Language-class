#include <iostream>

using namespace std;

int main() {
    const int year = 2000;
    float f = 46.5;
    cout << f << endl;
    printf("%.2f\n", f);
    printf("%d\n", year);
    //year = 2002;          상수형은 변경 불가
    //printf("%d\n", year);
    return 0;
}