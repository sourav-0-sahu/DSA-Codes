#include<iostream>
using namespace std;

class House {
    private:
    const int length;

    public:
    //Old Method -> Constructor
    House(int _length) {
        length = _length; //This throws error because a const member variable cant be assigned under a ctor
    }
};

int main() {

    House h1(10);
    return 0;
}