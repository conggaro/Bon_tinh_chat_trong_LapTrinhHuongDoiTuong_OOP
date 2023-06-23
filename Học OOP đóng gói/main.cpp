// tính đóng gói
// là gói dữ liệu và thông tin vào trong một lớp (class)

// tính đóng gói (Encapsulation) là cơ chế của che giấu dữ liệu

#include <iostream>
#include <string>
using namespace std;

class MayViTinh {
    private:
        string mausac;
        int chieudai, chieurong;
    
    public:
        // hàm khởi tạo có tham số
        MayViTinh(string data1 = "NO COLOR", int data2 = 0, int data3 = 0){
            mausac = data1;
            chieudai = data2;
            chieurong = data3;
        }

        void input()
        {
            cout << "Nhap mau sac may: ";
            
            // Thực hiện lệnh fflush(stdin) 
            // để xóa bỏ kí tự '\n' còn sót lại trong bộ nhớ đệm.
            fflush(stdin);
            getline(cin, mausac);

            cout << "Nhap chieu dai may: ";
            cin >> chieudai;

            cout << "Nhap chieu rong may: ";
            cin >> chieurong;
        }
    
        void output()
        {
            cout << "Mau sac may: " << mausac << endl;
            cout << "Chieu dai may: " << chieudai << endl;
            cout << "Chieu rong may: " << chieurong << endl;
        }
};

int main(){
    // tạo đối tượng
    MayViTinh dt = MayViTinh();

    // gọi phương thức input
    dt.input();

    // gọi phương thức output
    cout << "\nThong tin:\n";
    dt.output();

    return 0;
}

// Trong đoạn code trên tính đóng gói được thể hiện qua các thuộc tính 
// mausac, chieudai, chieurong 
// và phương thức input(), output()

// Bạn không thể truy cập đến các "private properties" 
// hoặc gọi đến "private methods" 
// của class từ bên ngoài class đó.