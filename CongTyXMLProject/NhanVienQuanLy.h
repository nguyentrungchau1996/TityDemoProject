#pragma once
#include "NhanVien.h"

class NhanVienQuanLy : public NhanVien
{
private:
	float HeSo, Thuong;
public:
	NhanVienQuanLy();
	~NhanVienQuanLy();
	void Nhap();
	void Xuat();
	float TinhLuong();
};

