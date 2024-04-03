#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int value[5] = {0, 5, 10, 15, 20};
    int& ref_value = value[1];

        cout << "ref_value = " << ref_value << endl;

        ref_value = 20;
        cout << "value = " << value << endl;

        int* ptr_value = value;
        cout << "Pointer Address = " << ptr_value << endl;
        cout << "Pointer Value = " << *ptr_value << endl;

        cout << "Value arr = ";
        for(int i=0;i<5;i++){
            cout << value[i] << " " ;
        }
        cout << endl;
}