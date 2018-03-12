#include "DetailsNVL.h"



DetailsNVL::DetailsNVL()
{

}


DetailsNVL::~DetailsNVL()
{
}

void DetailsNVL::nhap(const DanhSachNVL & ds)
{
	ds.xuat();
	string idp;
	bool flag = false;
	do {
		if (flag)
			cout << "Khong ton tai ma, nhap lai: ";
		else
			cout << "Nhap ma NVL: ";
		getline(cin, idp);
		flag = true;
	} while (ds.findById(idp) == -1);
	id = idp;
	cout << "Nhap so thu tu NVL: ";
	getline(cin, stt);
	cout << "Nhap so luong NVL: ";
	cin >> quantity;
	cin.ignore();
}

void DetailsNVL::xuat(const DanhSachNVL & ds)
{
}
