#include <iostream>
using namespace std;

class Distance
{
    int feet;
    int inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }

    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }
    friend ostream &operator<<(ostream &output, const Distance &D)
    {
        output << "F : " << D.feet << " I : " << D.inches;
        return output;
    }
    friend istream &operator>>(istream &input, Distance &D)
    {
        input >> D.feet >> D.inches;
        return input;
    }
};

int main()
{
    Distance D1(11, 10), D2(5, 11), D3;

    cout << "Enter the value of the object : " << endl;
    cin >> D3;
    cout << "FD : " << D1 << endl;
    cout << "SD : " << D2 << endl;
    cout << "TD : " << D3 << endl;

    return 0;
}