// Lớp bạn friend trong OOP

// Tương tự như hàm bạn
// lớp bạn ( friend class )
// cũng cho phép lớp bạn của lớp kia
// truy cập các "thuộc tính private", "phương thức private".

// Khai báo lớp A là bạn của lớp B
// không có nghĩa lớp B là bạn của lớp A (chỉ có tính 1 chiều).

// Điều đó có nghĩa là chỉ có lớp A
// truy cập được thành viên của lớp B
// nhưng ngược lại lớp B không thể truy cập ngược lại của lớp A.

#include <iostream>
using namespace std;

class May_Laptop {
    private:
        int chieudai = 20;
    
    public:
        friend class May_ViTinh;
};

class May_ViTinh {
    private:
        float khoi_luong = 2;       // khối lượng = 2 (kg)

    public:
        void HienThi(May_Laptop mayAcer){
            cout << "Chieu dai cua may laptop la: "<< mayAcer.chieudai;
        }
};

int main(){
    // tạo đối tượng
    May_Laptop mayAcer;
    May_ViTinh mayLenovo;

    // gọi phương thức hiển thị
    mayLenovo.HienThi(mayAcer);

    return 0;
}

// Trong ví dụ trên
// May_ViTinh được khai báo là friend trong lớp May_Laptop

// Do đó, May_ViTinh là bạn của May_Laptop.
// May_ViTinh có thể truy cập các thành viên private của May_Laptop.

// Nhưng ngược, May_Laptop thì không phải bạn của May_ViTinh
// dẫn đến May_Laptop không truy cập được thuộc tính private trong May_ViTinh