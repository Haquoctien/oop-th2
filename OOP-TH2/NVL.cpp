#include "NVL.h"



NVL::NVL()
{
}


NVL::~NVL()
{
}

void NVL::nhap()
{
	cout << "Nhap ma vat lieu: ";
	getline(cin, id);
	cout << "Nhap ten vat lieu: ";
	getline(cin, name);
	cout << "Nhap loai vat lieu: ";
	getline(cin, type);
	cout << "Nhap don vi tinh vat lieu: ";
	getline(cin, unit);
}

void NVL::xuat() const
{
	cout << "Vat lieu: " << endl;
	cout << "\tma: " << id << endl;
	cout << "\tten: " << name << endl;
	cout << "\tloai: " << type << endl;
	cout << "\tdon vi tinh: " << unit << endl;
}

string NVL::getId() const
{
	return id;
}

string NVL::getName() const
{
	return name;
}

string NVL::getType() const
{
	return type;
}

string NVL::getUnit() const
{
	return unit;
}
