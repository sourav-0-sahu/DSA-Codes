//A static data member is going to share the same memory with all the instaces of a class
#include<iostream>
using namespace std;

class House {
    public:
    static int x;
    static int y;

    void print() const {
        cout << x << " " << y << endl;
    }
};

//Since x and y are static data members of the class ,they must be initialized globally outside the class
int House::x;
int House::y;

int main() {

    House obj1;
    obj1.x = 10;
    obj1.y = 20;
    obj1.print(); //OUTPUT : 10 20

    House obj2;
    obj2.x = 75;
    obj2.y = 65;
    obj2.print(); //OUTPUT : 75 65

    obj1.print(); //OUTPUT : 75 65
    //The output is 75 65 instead of 10 20 because x and y are Static Data Members of the class House

    House obj3;
    cout << obj3.x << " " << obj3.y << endl; //OUTPUT : 75 65
    return 0;
}

/*
    NOTE:
    x and y are the variable of the class , they are shared across all instance
*/