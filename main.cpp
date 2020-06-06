#include <iostream>

using namespace std;

class test
{
    public:

        static int dodawanie;

        void testVoid()
        {
            cout << dodawanie << endl;
            dodawanie++; // dodanie o jeden
        }
};

int test::dodawanie = 0;

int main()
{
    test a, b, c;
    a.testVoid();
    b.testVoid();
    c.testVoid();
}
