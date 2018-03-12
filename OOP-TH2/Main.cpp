#include "DanhSachNVL.h"

int main()
{
	DanhSachNVL ds;
	ds.nhap();
	cout << "Danh sach nguyen vat lieu da nhap: " << endl;
	ds.xuat();
	ds.sortItems();
	cout << "Danh sach sau khi duoc sap xep: " << endl;
	ds.xuat();
	cout << "Tim nguyen vat lieu theo ma: " << endl;
	string id;
	getline(cin,id);
	ds.xuatById(id);
	system("pause");
	return 0;
}