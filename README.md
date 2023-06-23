# Bốn tính chất trong lập trình hướng đối tượng (OOP - Object Oriented Programming)
1. Tính đóng gói (Encapsulation)
2. Tính kế thừa (Inheritance)
3. Tính đa hình (Polymorphism)
4. Tính trừu tượng(Abstraction)

# Đặc trưng của tính đóng gói
là viết code thuộc tính và phương thức bên trong 1 lớp.

# Đặc trưng của tính kế thừa
là lớp B thì kế thừa thuộc tính và phương thức của lớp A (phải có chữ public hoặc protected).

# Đặc trưng của tính đa hình
là ghi đè (override) và nạp chồng (overload), có 2 kiểu đa hình (đa hình biên dịch COMPILE TIME và đa hình thực thi RUN TIME).
1. ghi đè phương thức.
2. nạp chồng phương thức.
3. nạp chồng toán tử (+, -, *, /, <<).&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;// &nbsp;"<<" là toán tử hiển thị trong C++

ghi đè phương thức của đa hình biên dịch (COMPILE TIME) thì không cần từ khóa "virtual".<br>
ghi đè phương thức của đa hình thực thi (RUN TIME) thì cần từ khóa "virtual".

# Đặc trưng của tính trừu tượng
1. có ít nhất một phương thức thuần ảo.
2. chỉ viết phần đặc tả, tức là chỉ viết tên phương thức và tham số thôi.
3. cú pháp nó kiểu "= 0".

Ví dụ:
1. public: virtual void HienThi() = 0; &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;// đây là phương thức thuần ảo
2. public: virtual double Tinh_DienTich() = 0; &emsp;&emsp;&emsp;// đây là phương thức thuần ảo
