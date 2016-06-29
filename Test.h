//
// Created by Mesa on 6/23/2016.
//

#ifndef TEST_H //if not defined
#define TEST_H


#include <iostream>

using namespace std;

namespace evansSpace {
    class Test {
    public:
        Test();

        Test(string);

        inline string getName(){
            return name;
        }

        void setName(string);

        friend Test addNames(Test&, Test&);
        friend Test operator +(Test&, Test&);
        friend Test operator - (Test&, Test&);
        friend bool operator > (Test&, Test&);
        friend ostream& operator << (ostream& os, Test& ob);
        friend istream& operator >> (istream& is, string);

    private:
        string name;
    };
}

#endif //TEST_H
