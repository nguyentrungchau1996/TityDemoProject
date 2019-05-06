#include "NhanVien.h"

NhanVien::NhanVien()
{
	HoTen = "";
	Tuoi = 0;
	Luong = 0;
	LuongCoBan = 1000;
}

NhanVien::~NhanVien()
{
}

void NhanVien::Nhap() {
	cin.ignore();
	cout << "\n Nhap ten: ";
	getline(cin, HoTen);
	cout << "\n Nhap tuoi: ";
	cin >> Tuoi;
}

void NhanVien::NhapXML() {
	cin.ignore();
	cout << "\n Nhap ten: ";
	getline(cin, HoTen);
	cout << "\n Nhap tuoi: ";
	cin >> Tuoi;
	TiXmlDocument doc("CongTy.xml");
	if (!doc.LoadFile()) {
		cout << doc.ErrorDesc();
		return;
	}
	else {
		TiXmlElement* root = doc.RootElement();
		TiXmlElement* newNhanVien = new TiXmlElement("NhanVien");
		root->LinkEndChild(newNhanVien);
		TiXmlNode* lastNhanVien = root->LastChild();
	}
	
	
	
}

void NhanVien::Xuat() {
	cout << "\n Ho Ten: " << HoTen;
	cout << "\n Tuoi: " << Tuoi;
}


