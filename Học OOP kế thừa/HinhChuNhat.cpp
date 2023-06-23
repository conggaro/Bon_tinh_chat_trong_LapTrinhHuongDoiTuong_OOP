#include <iostream>
#include "Diem.cpp"
using namespace std;

class HinhChuNhat : public Diem{
    protected:
        int length;             // chiều dài
        int width;              // chiều rộng

    private:
        static int dem_HinhChuNhat;         // tạo biến static để đếm đối tượng
        int stt;                            // tạo biến để đánh số thứ tự

    public:
        // hàm khởi tạo có tham số
        HinhChuNhat(int data1 = 0, int data2 = 0, int data3 = 0, int data4 = 0) : Diem(data1, data2){
            length = data3;
            width = data4;
            
            dem_HinhChuNhat = dem_HinhChuNhat + 1;
            stt = dem_HinhChuNhat;

            cout << "Tao doi tuong HinhChuNhat " << stt << "\n";
        }

        // tạo hàm hiển thị
        // nó sẽ tự động ghi đè
        void HienThi(){
            // sử dụng phương thức của lớp cơ sở (lớp cha) trong ghi đè
            // override
            Diem::HienThi();

            cout << "(" << x << ", " << y << ")\t\t";
            cout << "length = " << length << "\t";
            cout << "width = " << width << "\n\n";
        }

        // hàm hủy HinhChuNhat
        ~HinhChuNhat(){
            cout << "Huy doi tuong HinhChuNhat " << stt << "\n";
        }
};

int HinhChuNhat::dem_HinhChuNhat = 0;