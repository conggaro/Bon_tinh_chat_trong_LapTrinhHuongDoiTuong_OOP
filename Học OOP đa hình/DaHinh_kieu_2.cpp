// đa hình kiểu thực thi (run time)

#include <iostream>
using namespace std;

// tạo lớp ConNguoi
class ConNguoi{
    protected:
        int id;
        string ho_ten;

    public:
        // hàm khởi tạo có tham số
        ConNguoi(int data1 = 0, string data2 = "NO NAME"){
            id = data1;
            ho_ten = data2;
        }

        virtual void ThongTin(){
            cout << "Toi la con nguoi\n\n";
        }
};

// tạo lớp KySu
class KySu : public ConNguoi{
    protected:
        // tên công ty
        string ten_cong_ty;

    public:
        // hàm khởi tạo có tham số
        KySu(int data1 = 0, string data2 = "NO NAME", string data3 = "NO COMPANY") : ConNguoi(data1, data2){
            ten_cong_ty = data3;
        }

        void ThongTin(){
            cout << "Toi la ky su\n\n";
        }
};

// tạo lớp BacSi
class BacSi : public ConNguoi{
    protected:
        // tên bệnh viện
        string ten_benh_vien;

    public:
        BacSi(int data1 = 0, string data2 = "NO NAME", string data3 = "NO HOSPITAL") : ConNguoi(data1, data2){
            ten_benh_vien = data3;
        }

        void ThongTin(){
            cout << "Toi la bac si\n\n";
        }
};

int main(){
    // tạo đối tượng
    ConNguoi *dt1 = new ConNguoi();
    ConNguoi *dt2 = new KySu();
    ConNguoi *dt3 = new BacSi();

    // gọi phương thức thông tin
    dt1->ThongTin();
    dt2->ThongTin();
    dt3->ThongTin();

    return 0;
}