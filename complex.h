#include <iostream>
#include <iomanip>
using namespace std;

class complex{
    friend complex operator*(const complex& c1, const complex& c2);
    friend complex operator-( complex& c1,  complex& c2);
    friend ostream& operator<<(ostream& out, const complex c2);    
    friend bool operator==(const complex& lhs, const complex& rhs);

public:
    complex();
    complex(double newReal);
    complex(double real, double imaginary);
    complex compliment();
    
    double getReal();
    double getImaginary();
    void setReal(double real);
    void setImaginary(double imaginary);

    complex operator+(complex& c1) const;
    complex operator-(complex& c1) const;

private:
    double realNum;
    double imaginaryNum;

};