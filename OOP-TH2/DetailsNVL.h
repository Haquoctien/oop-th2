#include "DanhSachNVL.h"
class DetailsNVL
{
private:
	string stt, id;
	int quantity;
public:
	DetailsNVL();
	~DetailsNVL();
	void nhap(const DanhSachNVL &ds);
	void xuat(const DanhSachNVL &ds);
};

