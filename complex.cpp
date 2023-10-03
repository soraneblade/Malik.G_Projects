#include "complex.h"
//default statement to see which constructor is called
complex::complex(){
    realNum = 0;
    imaginaryNum = 0;
    cout << "Default" << endl;
}
complex::complex(double newReal) {
    realNum = newReal;
    imaginaryNum = 0;
    cout << "Conversion 1: " << fixed << setprecision(2) << *this << endl;
}
complex::complex(double real, double imaginary) {
    realNum = real;
    imaginaryNum = imaginary;
    cout << "Conversion 2" << endl;
}
complex complex::compliment(){
    return complex(realNum, -imaginaryNum);
}
double complex::getReal() {
    return realNum;
}
double complex::getImaginary() {
    return imaginaryNum;
}
void complex::setReal(double real) {
    realNum = real;
}
void complex::setImaginary(double imaginary) {
    imaginaryNum = imaginary;
}
//works
complex complex::operator +(complex& c1) const{
    return complex(this->realNum + c1.realNum, this->imaginaryNum + c1.imaginaryNum);
}
//not sure if operator- works
complex complex::operator -(complex& c1) const{
    return complex(this->realNum - c1.realNum, this->imaginaryNum - c1.imaginaryNum);
}
//not sure if operator== works
bool operator==(const complex& lhs, const complex& rhs){
    return (lhs.realNum == rhs.realNum) && (lhs.imaginaryNum == rhs.imaginaryNum);
}
//not sure if operator- works
complex operator-( complex& c1,  complex& c2){
    return complex(c1.realNum - c2.realNum, c1.imaginaryNum - c2.imaginaryNum);
}
//not sure if operator- works
complex operator*(const complex& c1, const complex& c2) {
    complex result;
    result.realNum = c1.realNum * c2.realNum - c1.imaginaryNum * c2.imaginaryNum;
    result.imaginaryNum = c1.realNum * c2.imaginaryNum + c1.imaginaryNum * c2.realNum;
    return result;
}
ostream& operator<<(ostream& out, complex c2){
    out << c2.realNum << " + " << c2.imaginaryNum << endl;
    return out;
}
