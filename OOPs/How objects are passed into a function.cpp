#include<iostream>
using namespace std;

class House {
    private:
    
    int length;
    int bredth;
    
    public:

    //Default Ctor
    House() {
        length = 0;
        bredth = 0;
    }

    void setLength(int _val) {
        this->length = _val;
    }

    void setBredth(int _val) {
        this->bredth = _val;
    }

    int getLength() const {
        return this->length;
    }

    int getBredth() const {
        return this->bredth;
    }

};

void printObject(const House &obj) {
    cout << "Length: " << obj.getLength() << endl;
    cout << "Bredth: " << obj.getBredth() << endl;
}

int main() {

    House h1;
    h1.setLength(10);
    h1.setBredth(20);

    //Object h1 is passed to the function
    printObject(h1);
    return 0;
}