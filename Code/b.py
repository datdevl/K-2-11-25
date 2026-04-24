import os

# Nhập tên file
file_name = input("Nhập tên file: ")

# Kiểm tra file có tồn tại hay không
if os.path.exists(file_name):
    lua_chon = input("Bạn có chắc chắn muốn xóa file không (y/n)? ")

    if lua_chon.lower() == "y":
        os.remove(file_name)
        print("File đã được xóa thành công.")
    elif lua_chon.lower() == "n":
        print("Đã hủy thao tác.")
    else:
        print("Lựa chọn không hợp lệ!")
else:
    print("Lỗi: File không tồn tại!")
