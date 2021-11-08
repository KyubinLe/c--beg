#include <iostream>
using namespace std;

int g = 20;

int add(int x, int y){
    return x+y;
}

int main(){
    const double gj=21.0;
    int a, b, sum;
    cout << "정수 두 입력>>";
    cin >> a >> b;
    sum = a + b;
    cout << "합은 "<< sum << "\n";
    cout << "합은 "<< add(a,b) << "\n\a";

    return 0;
}