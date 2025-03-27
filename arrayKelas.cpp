#include <iostream>
using namespace std;

string kelas[30];
int pos = 0;
void inputData(string nama);
void outputData();

int main() {
    inputData("Farish Asqalani");
    outputData();
    inputData("Mie Ayam sedap");
    outputData();
    inputData("Minum air putih");
    outputData();
    return 0;
}

void inputData(string nama) {
    kelas[pos] = nama;
    pos++;
}

void outputData() {
    for (int i = 0; i < pos; i++)
    {
        cout << kelas[i];

        if (i < pos - 1) {
            cout << ",";
        } else {
            cout << "." << endl;
        }
    }
    
}