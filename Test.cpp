//
// Created by Mesa on 6/23/2016
//
#include "Test.h"


namespace evansSpace {

    Test::Test(string newName) {
        name = newName;
    }

    void Test::setName(string v){
        name = v;
    }

    Test addNames(Test &ob1, Test &ob2) {
        Test combinedName(ob1.name + ob2.name);
        return combinedName;
    }

    Test operator + (Test& ob1, Test& ob2){
        Test ob3(ob1.name + ob2.name);
        return ob3;
    }

    Test operator - (Test& ob1, Test& ob2){
        string str = str.substr(0, ob1.getName().size() - ob2.getName().size());
        Test ob3(str);
        return ob3;
    }

    bool operator > (Test& ob1, Test& ob2){
        return ob1.getName().size() > ob2.getName().size();
    }

    ostream& operator << (ostream& os, Test& ob){
        os << ob.name;
        return os;
    }

    istream& operator >> (istream& is, string ob){
        is >> ob;
        return is;
    }


}