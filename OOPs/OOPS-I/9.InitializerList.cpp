#include<iostream>
using namespace std;

class House {
    private:
    int length;
    int bredth;

    public:
    /*
    //Old Method -> Constructor

    House(int _length,int _bredth) {
        length = _length;
        bredth = _bredth;
    }

    */

   //New Method ->Initializer List
   House(int _length,int _bredth) : length(_length), bredth(_bredth) {
    cout <<" Initializer List called" << endl;
   }


};

int main() {
    House h1(10,20);
    
    return 0;
}