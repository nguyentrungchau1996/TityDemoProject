#include "NhanVienSanXuat.h"

NhanVienSanXuat::NhanVienSanXuat()
{
	SoSanPham = 0;
}


NhanVienSanXuat::~NhanVienSanXuat()
{
}

void NhanVienSanXuat::Nhap() {
	NhanVien::Nhap();
	cout << "\n Nhap so san pham: ";
	cin >> SoSanPham;
}

void NhanVienSanXuat::Xuat() {
	NhanVien::Xuat();
	cout << "\n So san pham: " << SoSanPham;
	cout << "\n Loai nhan vien: SX";
}

float NhanVienSanXuat::TinhLuong() {
	return LuongCoBan + (float)SoSanPham * 50;
}
