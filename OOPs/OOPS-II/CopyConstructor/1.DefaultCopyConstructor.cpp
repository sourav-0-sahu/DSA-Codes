/*
    Beginning Notes of copy ctor
    - If you do not have any copy constructor in your class, then compiler adds its default copy constructor.
    - The copy constructor added by compiler by DEFAULT does SHALLOW COPY.
    -In a copy constructor ,only the data members of the object are copied, Member functions are not.
*/

#include<iostream>
using namespace std;

class House {
    public:
    int length;
    int bredth;

    //Default ctor
    House() { cout << "Default Copy ctor Called" << endl; }

    //Parameterized ctor
    House(int _length,int _bredth) {
        cout << "Parameterized Constructor Called" << endl;
        this->length = _length;
        this->bredth = _bredth;
    }

    //No Copy Constructor is defined in the class,so compiler will add its default copy ctor
};

int main() {

    House h1(10,20); //During h1 Object creation ,Paramterized ctor will be invoked because we passed arguments
    House h2; //During h2 object creation, Default ctor will be invoked because we did not pass any args
    h2 = h1; // Here h1 is assigned to h2, since we did not define any copy ctor, the default copy ctor will be invoked which is added by compiler
    return 0;
}