#include "DanhSachNVL.h"


DanhSachNVL::DanhSachNVL()
{
	cout << "Tao danh sach NVL..." << endl;
	cout << "Nhap so NVL can nhap vao danh sach: ";
	cin >> quantity;
	cin.ignore();
	list = new NVL[quantity];
}

DanhSachNVL::~DanhSachNVL()
{
	cout << "Huy danh sach NVL..." << endl;
	delete[] list;
}

DanhSachNVL::DanhSachNVL(const DanhSachNVL &ds)
{
	if (list != nullptr)
		delete[] list;
	list = new NVL[ds.quantity];
	memcpy(list, ds.list,sizeof(NVL)*quantity);
}

void DanhSachNVL::nhap()
{
	for (int i = 0; i < quantity; i++)
	{
		list[i].nhap();
	}
}

void DanhSachNVL::xuat() const
{
	for (int i = 0; i < quantity; i++)
	{
		list[i].xuat();
	}
}

int DanhSachNVL::findById(string id) const
{
	int high = quantity, low = 0, mid;
	while (high >= low)
	{
		mid = (high + low) / 2;
		if (list[mid].getId().compare(id) == 0)
			return mid;
		else if (list[mid].getId().compare(id) > 0)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return -1;
}

void DanhSachNVL::sortItems()
{
	int min;
	for (int key = 0; key < quantity - 1; key++)
	{
		min = key;
		for (int candidate = key + 1; candidate < quantity; candidate++)
		{
			if (list[min].getId().compare(list[candidate].getId()) > 0)
			{
				min = candidate;
			}
		}
		swap(list[key], list[min]);
	}
}

void DanhSachNVL::xuatByPos(int i) const
{
	list[i].xuat();
}

void DanhSachNVL::xuatById(string id) const
{
	list[this->findById(id)].xuat();
}

NVL DanhSachNVL::getItemById(string id) const
{
	return list[this->findById(id)];
}

int DanhSachNVL::getQuantity() const
{
	return quantity;
}
