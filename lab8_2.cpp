#include <iostream>

using namespace std;

int main () {

        char name[] = {"Somluk"};
        int nameLength = 6;
        cout << name;

        // TODO: เขียนโปรแกรมเพื่อสลับชื่อ
        // hint : สร้าง array มารับค่าตัวอักษรแบบย้อนกลับ สามารถใช้ loop เข้ามาช่วยได้

        char revName[nameLength+1];

        for (int i = 0 ; i < nameLength ; i++){
            revName[i] = name [5-i];
        }
        revName[nameLength] = '\0';
        cout << revName << endl;

        for (int i = 0 ; i < 6 ; i++){
            revName[i] =revName[i] +1;
        }

        return 0;
}
