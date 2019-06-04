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
#include "BanDoc.h"

//phuong thuc setter
string BanDoc::getMaBanDoc()
{
	return this->sMaBanDoc;
}
string BanDoc::getNgayBanDoc()
{
	return this->sNgayBanDocDK;
}

//phuong thuc getter
void BanDoc::setMaBanDoc(string sMaDocSach)
{
	this->sMaBanDoc = sMaBanDoc;
}
void BanDoc::setNgayBanDocDK(string sNgayBanDocDK)
{
	this->sNgayBanDocDK = sNgayBanDocDK;
}