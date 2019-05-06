#pragma once
#include "NhanVien.h"

class NhanVienSanXuat: public NhanVien
{
private:
	int SoSanPham;
public:
	NhanVienSanXuat();
	~NhanVienSanXuat();
	void Nhap();
	void Xuat();
	float TinhLuong();
};

