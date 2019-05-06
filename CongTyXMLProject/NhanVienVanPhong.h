#pragma once
#include "NhanVien.h"
class NhanVienVanPhong: public NhanVien
{
private:
	int SoNgayLamViec;
	float TroCap;
public:
	NhanVienVanPhong();
	~NhanVienVanPhong();
	void Nhap();
	void Xuat();
	float TinhLuong();
};

