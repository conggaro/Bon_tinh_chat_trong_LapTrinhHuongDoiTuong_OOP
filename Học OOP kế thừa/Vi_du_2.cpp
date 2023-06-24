#include <iostream>
#include <string>
using namespace std;

// tạo lớp ConNguoi
class ConNguoi{
	protected:
		int id;
		string ho_ten;
	
	public:
		// hàm khởi tạo có tham số
		ConNguoi(int data1 = 0, string data2 = ""){
			id = data1;
			ho_ten = data2;
		}
		
		// hàm hủy
		~ConNguoi(){
			cout << "Huy doi tuong\n";
		}
		
		// hàm nhập dữ liệu
		void NhapDuLieu(){
			cout << "Nhap id: ";
			cin >> id;
			cin.ignore();
			
			cout << "Nhap ho ten: ";
			getline(cin, ho_ten, '\n');
		}
		
		// hàm hiển thị
		void HienThi(){
			cout << "Thong tin:\n";
			cout << "Id: " << id << "\n";
			cout << "Ho va ten: " << ho_ten << "\n";
		}
};

// tạo lớp SinhVien
class SinhVien : public ConNguoi{
	protected:
		int ma_sv;
		string ten_lop;
	
	public:
		// hàm khởi tạo có tham số
		SinhVien(int data1 = 0, string data2 = "", int data3 = 0, string data4 = "") : ConNguoi(data1, data2)
		{
			ma_sv = data3;
			ten_lop = data4;
		}
		
		// hàm hủy
		~SinhVien(){
			cout << "Huy doi tuong\n";
		}
		
		// hàm nhập dữ liệu
        // viết code như này là ghi đè (vừa kế thừa, vừa đa hình)
		void NhapDuLieu(){
			// gọi hàm của lớp cha
            // để tái sử dụng code
			ConNguoi::NhapDuLieu();
			
			cout << "Nhap ma sinh vien: ";
			cin >> ma_sv;
			cin.ignore();
			
			cout << "Nhap ten lop: ";
			getline(cin, ten_lop, '\n');
		}
		
		// hàm hiển thị
        // viết code như này là ghi đè (vừa kế thừa, vừa đa hình)
		void HienThi(){
			// gọi hàm của lớp cha
            // để tái sử dụng code
			ConNguoi::HienThi();
			
			cout << "Ma sinh vien: " << ma_sv << "\n";
			cout << "Ten lop: " << ten_lop << "\n";
		}
};

int main(){
	// tạo đối tượng
	ConNguoi dt1 = ConNguoi();
	SinhVien dt2 = SinhVien();
	
	// gọi phương thức nhập dữ liệu
	dt1.NhapDuLieu();
	cout << "\n";
	
	dt2.NhapDuLieu();
	cout << "\n";
	
	// gọi phương thức hiển thị
	dt1.HienThi();
	cout << "\n";
	
	dt2.HienThi();
	cout << "\n";
	
	return 0;
}