#include<iostream>
using namespace std;

class House {
    private:
    const int length;

    public:
   //New Method -> Initializer list
   House(int _length) : length(_length) {
    cout << "Initializer list called" << endl;
   }
};

int main() {

    House h1(10);
    return 0;
}