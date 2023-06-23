#include <iostream>
using namespace std;

class Diem{
    protected:
        int x;
        int y;

    private:
        static int dem_Diem;         // tạo biến static để đếm đối tượng
        int stt;                     // tạo biến để đánh số thứ tự

    public:
        // hàm khởi tạo có tham số
        Diem(int data_x = 0, int data_y = 0){
            x = data_x;
            y = data_y;

            dem_Diem = dem_Diem + 1;
            stt = dem_Diem;

            cout << "Tao doi tuong Diem " << stt << "\n";
        }

        // hàm hiển thị
        void HienThi(){
            cout << "(" << x << ", " << y << ")\n";
        }

        // hàm hủy Diem
        ~Diem(){
            cout << "Huy doi tuong Diem " << stt << "\n";
        }
};

int Diem::dem_Diem = 0;