#include <iostream>
#include <fstream>

using namespace std;

void menu();
void saveBinary();

void saveBinary() {
    cout << "\nSave the array to a binary file.\n";
    ofstream ofs("test.bin");
    int a[10], i;
    cout << "Enter the number to convert: ";
    int num;
    cin >> num;
    for (i = 0; num > 0; i++) {
        a[i] = num % 2;
        num = num / 2;
    }
    for (i = i - 1; i >= 0; i--) {
        ofs << a[i];
    }
    ofs.close();
}
void menu() {
    int action;
    cout << "Enter action: ";
    cin >> action;
    if (action == 1) {
        saveBinary();
    } if (action == 2) {
        cout << "\nLoads an array of integers from a binary file.\n";
    }
}

int main()
{
    menu();
    std::cout << "Hello World!\n";

}
