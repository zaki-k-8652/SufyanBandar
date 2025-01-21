#include<iostream>
using namespace std;

class Complex
{
    int real, imag;
    public:
    Complex()
    {
        real = imag = 0;
    }
    Complex(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }
    bool operator &&(Complex C2)
    {
        if(this->real == C2.real && this->imag == C2.imag)
            return true;
        else
            return false;
    }
};

int main()
{
    Complex C1(5, 6), C2(5, 7), C3;
    if(C1 && C2)
        cout << "Both C1 and C2 are same complex numbers" << endl;
    else
        cout << "C1 and C2 are not same complex numbers" << endl;

    return 0;
}