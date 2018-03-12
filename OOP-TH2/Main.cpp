#include "DetailsNVL.h"

int main()
{
	DanhSachNVL ds;
	ds.nhap();
	ds.sortItems();
	DetailsNVL a;
	a.nhap(ds);
	a.xuat(ds);
	system("pause");
	return 0;
}