#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void print_n(int n)
{
    cout << n << ' ';
}

void print_if_odd(int n)
{
    if (n % 2 == 1)
        cout << n << ' ';
}

void print_if_even(int n)
{
    if (n % 2 == 0)
        cout << n << ' ';
}

bool is_gsm7(const char &c) {
    return true;
}

int main()
{
    vector<int> numbers { 1, 2, 3, 4, 5, 10, 15, 20, 25, 35, 45, 50 };

    cout << "\nall: ";
    for_each(numbers.begin(), numbers.end(), print_n);

    cout << "\nodd: ";
    for_each(numbers.begin(), numbers.end(), print_if_odd);

    cout << "\neven: ";
    for_each(numbers.begin(), numbers.end(), print_if_even);

    std::string msg;
    const uint_fast8_t parts =
        (std::find_if_not(msg.begin(), msg.end(), ::is_gsm7) == msg.end())
        ? ((msg.length() < 160) ? 1 : (msg.length() + 152) / 153)
        : ((msg.length() < 70) ? 1 : (msg.length() + 66) / 67);
    cout << "\n\n";
}
