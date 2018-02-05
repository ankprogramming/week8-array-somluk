#include <iostream>
using namespace std;

int main () {
        // สร้างตัวแปร array ชื่อ calendar เพื่อสร้างที่เก็บปฏิทิน
        // calendar[5][7]

        int calender [5][7];
        int day = 1;

        for (int i = 0; i < 5; i++){
            calender[0][i]=0;
        }

        for (int i=4; i<7; i++){
            calender[0][i]=day;
            day++;
        }

        for (int i=1; i<5; i++){
            for (int j=0; j<7; j++){
                calender[i][j]=day;
                day++;
            }
        }

        for (int i = 0; i < 5; i++){
            for(int j = 0; j < 7; j++){
                cout << calender [i][j] << " ";
            }
            cout << endl;
        }

        // เขียนโปรแกรมแสดงปฏิทินเดือน ธันวาคม /2560
        // วันที่ไม่ใช่วันของเดือน ธันวาคมให้แสดงด้วย x


        // เขียนโปรแกรมเพื่อรับวันจากผู้ใช้ แล้วแสดงเฉพาะวันที่นั้น
        // 0 = อาทิตย์, 1 = จันทร์ ... 7 = เสาร์

        int cmd;
        cin >> cmd;

        for (int i = 0; i < 5; i++){
            if (calender[i][cmd]!=0){
                cout << calender[i][cmd] << " ";
            }
        }


        // เขียนโปรแกรมเพื่อรับสัปดาห์ของเดือนจากผู้ใช้ เขียนโปรแกรมเพื่อคัด เฉพาะวันของสัปดาห์
        // 1 หมายถึง สัปดาห์ที่ 1 ของเดือนธันวาคม 2560 จะได้เลข {1, 2}

        cout << endl;
        cin >> cmd;
        for (int i = 0; i < 7; i++){
            if (calender[cmd][i]!=0){
                cout << calender[cmd][i] << " ";
            }
        }

        return 0;
}
