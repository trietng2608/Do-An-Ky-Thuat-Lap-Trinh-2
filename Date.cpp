/*
*	Ten do an mon hoc ky thuat lap trinh 2: Quan ly thu vien thong qua cac tac vu:
*			- Muon sach
*			- Tra Sach
*			- Tim kiem thong tin sach
*			- Quan ly thong tin sach
*	Thanh vien trong nhom:
*		1. Bui Van Hieu
*		2. Nguyen Minh Triet
*		3. Nguyen Dinh Trieu
*	Create of date: 10/05/2019
*/
//Nguoi phu trach: Bui Van Hieu

#include "Date.h"
//dinh nghia phuong thuc get
int Date::getNgay()
{
	return this->nNgay;
}
int Date::getThang()
{
	return this->getThang;
}
int Date::getNam()
{
	return this->nNam;
}

//dinh nghia phuong thuc set
void Date::setNgay(int nNgay)
{
	this->nNgay = nNgay;
}
void Date::setThang(int nThang)
{
	this->nThang = nThang;
}
void Date::setNam(int nNam)
{
	this->nNam = nNam;
}

//dinh nghia lay ngay ngay thang nam
void Date::setDate(int nNgay, int nThang, int nNam)
{
	this->nNgay = nNgay;
	this->nThang = nThang;
	this->nNam = nNam;
}