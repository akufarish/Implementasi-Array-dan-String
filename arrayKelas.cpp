#include <iostream>
using namespace std;

string kelas[30];
int pos = 0;
void inputData(string nama);

int main() {
    inputData("Farish Asqalani");
    return 0;
}

void inputData(string nama) {
    kelas[pos] = nama;
    pos++;
}