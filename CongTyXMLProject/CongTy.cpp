#include "CongTy.h"

CongTy::CongTy()
{
}


CongTy::~CongTy()
{
}

void CongTy::Nhap() {
	int luaChon;
	NhanVien* temp;
	do {
		cout << "\n-----------------Tao nhan vien-----------------";
		cout << "\n Chon nhan vien: ";
		cout << "\n 1. NV Van Phong";
		cout << "\n 2. NV San Xuat";
		cout << "\n 3. NV Quan Ly";
		cout << "\n 4. Huy";
		cout << "\n Nhap lua chon: ";
		cin >> luaChon;
		switch (luaChon)
		{
		case 1:
			temp = new NhanVienVanPhong();
			temp->Nhap();
			DSNhanVien.push_back(temp);
			break;
		case 2:
			temp = new NhanVienSanXuat();
			temp->Nhap();
			DSNhanVien.push_back(temp);
			break;
		case 3:
			temp = new NhanVienQuanLy();
			temp->Nhap();
			DSNhanVien.push_back(temp);
			break;
		case 4:
			break;
		default:
			cout << "\n Nhap sai cu phap!";
		}
	} while (luaChon != 4);
}

void CongTy::Xuat() {
	cout << "\n-------------------DS Nhan Vien-------------------";
	for (int i = 0; i < DSNhanVien.size(); i++) {
		DSNhanVien[i]->Xuat();
		cout << "\n---------------------";
	}
}

void CongTy::NhapXML() {
	TiXmlDocument doc("CongTy.xml");
	if (!doc.LoadFile()) {
		cout << doc.ErrorDesc();
		return;
	}
	else {
		int id;
		TiXmlElement* root = doc.RootElement();
		//Lay ra Element nhanVienCuoi cua file XML
		TiXmlElement* nhanVienCuoi = root->LastChild()->ToElement();
		//Lay ra id cua nhanVienCuoi
		id = nhanVienCuoi->QueryIntAttribute("id", &id);
		TiXmlElement* nhanVienMoi = nhanVienCuoi->NextSiblingElement();
		nhanVienMoi->SetAttribute("id", (id + 1));

	}
}

void CongTy::XuatXML() {
	TiXmlDocument doc("CongTy.xml");
	if (!doc.LoadFile()) {
		cout << doc.ErrorDesc();
		return;
	}
	else {
		TiXmlElement* root = doc.RootElement();
		TiXmlElement* nhanVien = nullptr;
		int id;
		for (nhanVien = root->FirstChildElement(); nhanVien != NULL; nhanVien = nhanVien->NextSiblingElement()) {
			nhanVien->QueryIntAttribute("id", &id);
			TiXmlElement* HoTen = nhanVien->FirstChildElement();
			TiXmlElement* Tuoi = HoTen->NextSiblingElement();
			TiXmlElement* LoaiNV = Tuoi->NextSiblingElement();
			cout << id << " ";
			cout << HoTen->GetText() << " ";
			cout << Tuoi->GetText() << " ";
			cout << LoaiNV->GetText() << " " << endl;
		}
	}
}
