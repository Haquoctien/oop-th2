#include "include.h"
class NVL
{
private:
	string id, name, type, unit;
public:
	NVL();
	~NVL();
	void nhap();
	void xuat() const;
	string getId() const;
	string getName() const;
	string getType() const;
	string getUnit() const;
};

