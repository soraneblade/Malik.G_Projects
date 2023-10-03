#include "complex.h"

int main() {
    complex complex1;
    cout << "Default Constructor: " << complex1 << endl;
    complex complex2(5.0);
    cout << "Conversion Constructor: " << complex2 << endl;
    complex complex3(3.0, 4.0);
    cout << "Parameterized Constructor: " << complex3 << endl;
    complex resultAdd = complex2 + complex3;
    cout << "Addition: " << resultAdd << endl;
    complex resultSubtractMember = complex2 - complex3;
    cout << "Subtraction (Member Function): " << resultSubtractMember << endl;
    //ran out of time to fix the negation portion
    // complex resultNegateFriend = -complex2;
    // cout << "Negation (Friend Function): " << resultNegateFriend << endl;
    complex resultMultiplyFriend = complex2 * complex3;
    cout << "Multiplication (Friend Function): " << resultMultiplyFriend << endl;
    complex complementedComplex = complex3.compliment();
    cout << "Complement: " << complementedComplex << endl;
    bool isEqual = (complex2 == complex3);
    cout << "Equality (Friend Function): " << isEqual << endl;





}
