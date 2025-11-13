// solve a codeforces dsa problem
#include <iostream>
using namespace std;
int main() {
    // palindrome check
    string str;
    cin >> str;
    string rev = string(str.rbegin(), str.rend());
    if (str == rev) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a Palindrome" << endl;
    }
    return 0;
}