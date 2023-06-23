# Bốn tính chất trong lập trình hướng đối tượng (OOP - Object Oriented Programming)
1. Tính đóng gói (Encapsulation)
2. Tính kế thừa (Inheritance)
3. Tính đa hình (Polymorphism)
4. Tính trừu tượng(Abstraction)

# Đặc trưng của tính đóng gói
1. Là viết code thuộc tính và phương thức bên trong 1 lớp.
2. Có lý thuyết về hàm bạn.
3. Có lý thuyết về lớp bạn.
4. Có biến static (dùng để đếm đối tượng).

# Đặc trưng của tính kế thừa
Là lớp B thì kế thừa thuộc tính và phương thức của lớp A (phải có chữ public hoặc protected).

# Đặc trưng của tính đa hình
Là ghi đè (override) và nạp chồng (overload), có 2 kiểu đa hình (đa hình biên dịch COMPILE TIME và đa hình thực thi RUN TIME).<br>
1. ghi đè phương thức.
2. nạp chồng phương thức.
3. nạp chồng toán tử (+, -, *, /, <<).&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;// &nbsp;"<<" là toán tử hiển thị trong C++

<br>
Ghi đè phương thức của đa hình biên dịch (COMPILE TIME) thì không cần từ khóa "virtual".<br>
Ghi đè phương thức của đa hình thực thi (RUN TIME) thì cần từ khóa "virtual".

# Đặc trưng của tính trừu tượng
1. có ít nhất một phương thức thuần ảo.
2. chỉ viết phần đặc tả, tức là chỉ viết tên phương thức và tham số thôi.
3. cú pháp nó kiểu "= 0".

Ví dụ:
1. public: virtual void HienThi() = 0; &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;// đây là phương thức thuần ảo
2. public: virtual double Tinh_DienTich() = 0; &emsp;&emsp;&emsp;// đây là phương thức thuần ảo

# Đặc trưng của một đối tượng
1. Có thuộc tính.
2. Có phương thức.
3. Có hàm khởi tạo.
4. Có hàm hủy.
5. Có thể tạo biến static (nhưng biến static phải được gán giá trị ở ngoài lớp, nhớ thêm toán tử phạm vi "::" nhé).
