#include <iostream>
#include "Test.h"
using namespace std;
using namespace evansSpace;


inline int max(int a, int b){
    return a >= b ? a : b ;
}

int main() {
    cout << "Hello, World!" << endl;
    Test t("Evan");
    Test n("Mesa");
    cout << max(5, 9) << endl;
    Test v = t + n;
    cout << v << endl;
    Test a = t - n;
    if( a > v){
        cout << "a is greater" << endl;
    }
    else{
        cout << "v is greater" << endl;
    }
    return 0;
}