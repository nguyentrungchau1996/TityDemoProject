#include "NhanVienQuanLy.h"

NhanVienQuanLy::NhanVienQuanLy()
{
	HeSo = 2;
	Thuong = 1000;
}

NhanVienQuanLy::~NhanVienQuanLy()
{
}

void NhanVienQuanLy::Nhap() {
	NhanVien::Nhap();
}

void NhanVienQuanLy::Xuat() {
	NhanVien::Xuat();
	cout << "\n Loai nhan vien: TP";
}

float NhanVienQuanLy::TinhLuong() {
	return LuongCoBan*HeSo + Thuong;
}
