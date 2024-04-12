// Checking Vowel or Consonant Using Switch Case
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character : ";
    cin >> ch;

    switch (ch)
    {
     case 'a':
     case 'A':
     case 'e':
     case 'E':
     case 'i':
     case 'I':
     case 'o':
     case 'O':
     case 'u':
     case 'U':
        cout << "The Character is a Vowel" << endl;
        break;

    default:
        //This will be executed when the above case wont Execute
        cout << "The character is Consonant" << endl;
        break;
    }

    return 0;
}