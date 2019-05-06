#pragma once
#include "NhanVienVanPhong.h"
#include "NhanVienSanXuat.h"
#include "NhanVienQuanLy.h"
#include <vector>
#include "tinyxml.h"

class CongTy
{
private:
	vector<NhanVien* > DSNhanVien;
public:
	CongTy();
	~CongTy();
	void Nhap();
	void Xuat();
	void NhapXML();
	void XuatXML();
};

