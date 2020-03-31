#include <iostream>
#include <string>
#include <bitset>

using namespace std;

void Print(unsigned short value, string nama){
    cout << nama << " Binary : " << bitset<8>(value) << endl;
}

int main(){
    system("cls");

    // Bitwise Operator 
    // adalah sebuah operasi matematika yang menggunakan biner dalam mengoperasikannya

    // & Bitwise AND 
    // | Bitwise Inclusive OR
    // ^ Bitwise Exclusive OR
    // ~ NOT
    // << SHL Shift bits Left
    // << SHR Shift bits Right

    
    unsigned short A = 6;
    unsigned short B = 10;
    unsigned short Hasil;

    // & Bitwise AND 
    Hasil = A & B;
    cout << "AND" << endl;
    Print(A,"A");
    Print(B,"B");
    Print(Hasil,"C");
    cout << endl;

    // | Bitwise OR 
    Hasil = A | B;
    cout << "OR" << endl;
    Print(A,"A");
    Print(B,"B");
    Print(Hasil,"C");
    cout << endl;

    // ^ Bitwise XOR 
    Hasil = A ^ B;
    cout << "XOR" << endl;
    Print(A,"A");
    Print(B,"B");
    Print(Hasil,"C");
    cout << endl;

    // ~ Bitwise NOT  
    Hasil = ~A;
    cout << "NOT" << endl;
    Print(A,"A");
    Print(Hasil,"C");
    cout << endl;

    // << Shift bits Left 
    Hasil = A << 1;
    cout << "SHL" << endl;
    Print(A,"A");
    Print(Hasil,"C");
    cout << endl;

    // >> Shift bits Right 
    Hasil = A >> 1;
    cout << "SHR" << endl;
    Print(A,"A");
    Print(Hasil,"C");
    cout << endl;

    cin.get();

    return 0;
}