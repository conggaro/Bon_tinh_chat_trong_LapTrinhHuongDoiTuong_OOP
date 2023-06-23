// Hàm bạn friend trong OOP

// Nếu một hàm nằm ngoài lớp 
// được định nghĩa là một hàm bạn (Friend function)
// thì dữ liệu protected 
// và riêng tư private của một lớp 
// có thể được truy cập bằng cách sử dụng hàm.

// Một lớp có thể có nhiều hàm bạn
// và chúng phải nằm bên ngoài class

#include <iostream>  
using namespace std;

class May_Laptop;   // dòng này phải viết, đây là cú pháp bắt buộc

class May_ViTinh {
    private:
        int chieudaiMVT;
    
    public:
        void setChieudaiMVT(int data){
            chieudaiMVT = data;
        }

        void HienThi(){
            cout << "Chieu dai may vi tinh la " << chieudaiMVT << endl;
        }

        // Khai báo hàm bạn
        friend void TimChieuDaiNhoNhat(May_ViTinh dt1, May_Laptop dt2);
};

class May_Laptop {
    private:
        int chieudaiML;
    
    public:
        void setChieudaiML(int data){  
            chieudaiML = data;  
        }

        void HienThi(){
            cout << "Chieu dai may laptop la " << chieudaiML << endl;
        }

        // Khai báo hàm bạn
        friend void TimChieuDaiNhoNhat(May_ViTinh dt1, May_Laptop dt2);
};

void TimChieuDaiNhoNhat(May_ViTinh dt1, May_Laptop dt2)  {
    int ketQua = 0;
    
    if(dt1.chieudaiMVT <= dt2.chieudaiML){
        ketQua = dt1.chieudaiMVT;
    }
    else{
        ketQua = dt2.chieudaiML;
    }

    cout << "Chieu dai nho nhat trong 2 may la: " << ketQua << "\n\n";
}

int main(){
    // tạo đối tượng
    May_ViTinh mayLenovo;
    May_Laptop mayAsus;

    // gọi hàm thiết lập dữ liệu
    // setChieudaiMVT
    // setChieudaiML
    mayLenovo.setChieudaiMVT(20);
    mayAsus.setChieudaiML(10);
    
    // gọi phương thức hiển thị
    mayLenovo.HienThi();
    mayAsus.HienThi();
    
    // gọi hàm bạn tìm chiều dài nhỏ nhất
    TimChieuDaiNhoNhat(mayLenovo, mayAsus);
    
    return 0;
}