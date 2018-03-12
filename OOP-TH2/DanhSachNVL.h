#include "NVL.h"
#include "Date.h"
class DanhSachNVL
{
private:
	int quantity;
	NVL * list;
public:
	DanhSachNVL();
	~DanhSachNVL();
	DanhSachNVL(const DanhSachNVL&);
	void nhap();
	void xuat() const;
	int findById(string) const;
	void sortItems();
	void xuatByPos(int) const;
	void xuatById(string) const;
	NVL getItemById(string) const;
};

