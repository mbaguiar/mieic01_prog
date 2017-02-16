#include <iostream>
using namespace std;
int main() {
int operand1, operand2; // input operands
// NOTE THE DIFFERENCE FROM PREVIOUS EXAMPLE: other var.s not declared
     // input 2 integers
     cout << "operand1 ? ";
     cin >> operand1;
     cout << "operand2 ? ";
     cin >> operand2;
//compute and show results
cout << " sum = " << operand1 + operand2 << endl; cout << "difference = " << operand1 - operand2 << endl; cout << " product = " << operand1 * operand2 << endl; cout << " quotient = " << operand1 / operand2 << endl;
return 0; }
