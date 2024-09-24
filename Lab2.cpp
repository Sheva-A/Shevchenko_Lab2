#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "Enter a number" <<endl;
    cin>>i;
    int a = i/100;
    int c = i%10;
    if(a == c) {
        cout << "The number is a palindrome" <<endl;
    }
    else {
        cout << "The number isn't a palindrome" <<endl;
    }

    return 0;
}
