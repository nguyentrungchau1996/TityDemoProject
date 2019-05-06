#pragma once
#include <iostream>
#include <string>
#include "tinyxml.h"
using namespace std;

class NhanVien
{
protected:
	string HoTen;
	int Tuoi, id;
	float Luong, LuongCoBan;
public:
	NhanVien();
	~NhanVien();
	virtual void Nhap();
	virtual void NhapXML();
	virtual void Xuat();
	virtual float TinhLuong() = 0;
};

