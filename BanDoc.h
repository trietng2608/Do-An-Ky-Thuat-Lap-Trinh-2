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

#ifndef BanDoc_h
#define BanDoc_h

#include "Date.h"
#include "Sach.h"
#pragma once
class BanDoc
{
protected: 
	string sMaBanDoc, sHoTen, sKhoa, sNgayBanDocDK;
public:
	//phuong thuc khoi tao mac dinh
	BanDoc()
	{
		sMaBanDoc = "";
		sHoTen = "";
		sKhoa = "";
		sNgayBanDocDK = "";
	}
	//phuong thuc khoi tao co tham so
	BanDoc(string sMaDocSach, string sHoTen, string sKhoa, string sNgayBanDocDK)
	{
		this->sMaBanDoc = sMaDocSach;
		this->sHoTen = sHoTen;
		this->sKhoa = sKhoa;
		this->sNgayBanDocDK = sNgayBanDocDK;
	}

	//phuong thuc getter
	string getMaBanDoc();
	string getNgayBanDoc();

	//phuong thuc setter
	void setMaBanDoc(string sMaDocSach);
	void setNgayBanDocDK(string sNgayBanDocDK);

	//da hinh 2 phuong thuc nhap xuat
	virtual void nhap() = 0;	//phuong thuc nhap thuan ao
	virtual void xuat() = 0;	//phuong thuc xuat thuan ao

	~BanDoc(){}	//phuong thuc huy
};

#endif