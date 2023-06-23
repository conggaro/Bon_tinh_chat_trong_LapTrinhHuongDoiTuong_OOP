#include <iostream>
using namespace std;

// tạo lớp ConNguoi
class ConNguoi{       // lúc này lớp ConNguoi sẽ trở thành abstract class
    public:
        virtual void ThongTin() = 0;        // đây là phương thức thuần ảo
};

// tạo lớp KySu
class KySu : public ConNguoi{
    protected:
        int id;
        string ho_ten;
        string ten_cong_ty;

    public:
        // hàm khởi tạo có tham số
        KySu(int data1 = 0, string data2 = "NO NAME", string data3 = "NO COMPANY"){
            id = data1;
            ho_ten = data2;
            ten_cong_ty = data3;
        }

        void ThongTin(){
            cout << "Toi la ky su\n\n";
        }
};

// tạo lớp BacSi
class BacSi : public ConNguoi{
    protected:
        int id;
        string ho_ten;
        string ten_benh_vien;

    public:
        // hàm khởi tạo có tham số
        BacSi(int data1 = 0, string data2 = "NO NAME", string data3 = "NO HOSPITAL"){
            id = data1;
            ho_ten = data2;
            ten_benh_vien = data3;
        }

        void ThongTin(){
            cout << "Toi la bac si\n\n";
        }
};

int main(){
    // tạo đối tượng
    // ConNguoi dt1;        // lỗi, không thể tạo dt1 từ lớp trừu tượng ConNguoi
    KySu dt2 = KySu();
    BacSi dt3 = BacSi();

    // gọi phương thức thông tin
    dt2.ThongTin();
    dt3.ThongTin();

    return 0;
}