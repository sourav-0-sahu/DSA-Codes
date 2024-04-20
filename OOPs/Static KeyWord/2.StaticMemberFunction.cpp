//Ek static member function ke andaar koi bhi instance k this pointer pass nahi hota
#include<iostream>
using namespace std;

class House {
    public:
    static int x;
    static int y;

    static void print()  {
        cout << x << " " << y << endl;
    }
};

int House::x = 5;
int House::y = 99;


int main() {

    House::print(); //Invoking Static Member Function
    //OUTPUT : 5 99

    House obj1;
    obj1.x = 10;
    obj1.y = 20;

    obj1.print(); //10 20

    House::print(); //10 20
    return 0;
}

/*
    NOTE:
    Jaise static Member variable Ek class ka variable hota hai and wo variable har instance ke saath share hota hai wo Ek particular instance se related nahi hota.

    Similarly Static Member function , Ek class ka function hota hai and wo function ke andar this pointer nahi hota.

    Static member function can only access static member variables
*/