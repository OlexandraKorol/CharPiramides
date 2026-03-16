#include <iostream>
#include <string>

using namespace std;

int main() {
    string userString {};
    cout << "Type your string there: " << endl;
    cin >> userString;

    string leftSide {};
    int length = userString.length();

    for (int i {0}; i < length; i++) {
        string blanks(length - i - 1, ' ');
        leftSide += userString[i];
        string rightSide(leftSide.rbegin() + 1, leftSide.rend());
        cout << blanks << leftSide << rightSide << endl;
    };

    return 0;
}
