// reading chars to end of file

#include <iostream>

int main(void)
{
    using namespace std;
    char ch;
    int count = 0;
    cin.get(ch);
    while (cin.fail() == false)
    {
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << count << " characters read\n";

    return 0;
}