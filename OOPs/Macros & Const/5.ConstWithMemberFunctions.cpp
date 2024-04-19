#include<iostream>
using namespace std;

class House {
    private:
    int length;

    public:
    //Default Constructor
    House() {
        length = 0;
    }

    //Setters
    void setLength(int _length) {
        this->length = _length;
    }

    //Getters
    //if you make a function constant ,then it would not allow that function to modify data members  inside the function
    int getLength() const
    {
        return this->length;
    }
};

int main() {

    House h1;
    h1.setLength(10);

    cout << h1.getLength() << endl;
    return 0;
}

/*
    Note
    ----
    If you want to write a member function in which the member variables must not be modified,then declare that functon as const.
    Therefore, we make getters as const function and setters as non const function
*/