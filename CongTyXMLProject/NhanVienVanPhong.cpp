#include "NhanVienVanPhong.h"

NhanVienVanPhong::NhanVienVanPhong()
{
	SoNgayLamViec = 0;
	TroCap = 200;
}


NhanVienVanPhong::~NhanVienVanPhong()
{
}

void NhanVienVanPhong::Nhap() {
	NhanVien::Nhap();
	cout << "\n So ngay lam viec: ";
	cin >> SoNgayLamViec;
}

void NhanVienVanPhong::Xuat() {
	NhanVien::Xuat();
	cout << "\n So ngay lam viec: " << SoNgayLamViec;
	cout << "\n Loai nhan vien: VP";
}

float NhanVienVanPhong::TinhLuong() {
	return (float)SoNgayLamViec * LuongCoBan + TroCap;
}
