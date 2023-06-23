// Yêu cầu:
// 1. tạo lớp Diem
// 2. tạo lớp HinhChuNhat

#include <iostream>
#include "HinhChuNhat.cpp"
using namespace std;

int main(){
    // tạo đối tượng
    HinhChuNhat dt1 = HinhChuNhat();
    HinhChuNhat dt2 = HinhChuNhat(1);
    HinhChuNhat dt3 = HinhChuNhat(1, 2);
    HinhChuNhat dt4 = HinhChuNhat(1, 2, 5);
    HinhChuNhat dt5 = HinhChuNhat(1, 2, 5, 5);

    // gọi phương thức hiển thị
    cout << "\nHien thi:\n";
    dt1.HienThi();
    dt2.HienThi();
    dt3.HienThi();
    dt4.HienThi();

    // dùng để gọi phương thức hiển thị
    // trong phạm vi HinhChuNhat
    dt5.HinhChuNhat::HienThi();     

    return 0;
}