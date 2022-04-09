#include <iostream>
#include <string>

// CON TRỎ 

using namespace std;

void DoubleX(int *x) {
    /**
        @param {int*} x > là 1 địa chỉ của 1 biến bất kỳ
        * VÍ DỤ: DoubleX(&a);
    **/
    (*x) *= 2;
    cout << "X has been changed to: " << (*x) << endl;
}

void swap(int* x, int* y) {
    /**
        @param {int*} x > là 1 địa chỉ của 1 biến bất kỳ
        @param {int*} y > là 1 địa chỉ của 1 biến bất kỳ
        * VÍ DỤ: swap(&a, &b);
    **/
    int temp = *x;
    *x = *y;
    *y = temp;
}

struct Student {
    string name, address;
    int age;
};

int main()
{
    int a = 100;
    // int* aAdress = &a; // gán địa chỉ của biến a cho con trỏ 
    // cout << (&a) << endl;
    // cout << (aAdress) << endl;
    // thông qua con trỏ ta có thể lấy, thay đổi giá trị của biến mà con trỏ này trỏ tới, cú pháp: (*tên_con_trỏ)
    // (*aAdress)++; // thay đổi 
    // cout << (*aAdress) << endl; // lấy ra 

    // Hàm sử dụng địa chỉ và con trỏ 
    DoubleX(&a);
    cout << a << endl;

    // ----------------------------------------

    // #CON TRỎ VÀ STRUCT

    Student X;
    X.name = "Tung";
    X.address = "Hai Phong";
    X.age = 18;

    Student* XAdress = &X;
    // Để in ra giá trị mà XAdress trỏ tới, ta có 2 cách:

    cout /* Cách 1 */
        << XAdress->name << endl 
        << XAdress->address << endl;

    cout /* Cách 2 */
        << (*XAdress).name << endl
        << (*XAdress).address << endl;

    // ----------------------------------------

    // #MỐI QUAN HỆ GIỮA MẢNG VÀ CON TRỎ 

    int arr[10];
    // giá trị của arr là địa chỉ của phần tử đầu tiên trong mảng 
    cout << "first element address: " << arr << endl;
    for (int i = 0; i < 10; i++) {
        cout << &arr[i] << endl;
    }
    cout << " " << endl;
    // Phép chuyển dịch con trỏ:
    for (int i = 0; i < 10; i++) {
        cout << (arr + i) << endl;
    }

    for (int i = 0; i < 10; i++) {
        cout << "Enter value: ";
        cin >> (* (arr + i));
        cout << endl;
    }

    // ----------------------------------------

    // #CẤP PHÁT ĐỘNG 

    int* dynamic = new int[99999];
    // Khi cấp phát động, các ô nhớ không nhất thiết phải liền nhau 
    delete [] dynamic; // Giải phóng bộ nhớ 

    // ----------------------------------------

    return 0;
}
