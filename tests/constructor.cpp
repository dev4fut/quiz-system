#include<iostream>

using namespace std; 

class entity
{
    public:
    int a;
    entity()
    {
        cout << "Hello World\n";
        this->a = 6;
    }
    entity(int a)
    {
        cout << "\nLMAO\n";
        this->a = a;
    }
};

int main(void)
{
    entity ahah;
    cout << ahah.a;
    entity hoho(1234);
    cout << hoho.a;
}