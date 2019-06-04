/*===========================================================================================
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
=============================================================================================*/
//Nguoi phu trach: Bui Van Hieu

#include <iostream>
using namespace std;
#include <fstream>
#include <string>
#include <time.h>

#pragma once
class Sach;
class BanDoc;
class GiaoVien;
class SinhVien;
//Xay dung doi tuong Date
class Date
{
private:
	int nNgay, nThang, nNam;
public:
	friend Sach;
	friend BanDoc;
	friend GiaoVien;
	friend SinhVien;
	friend PhieuMuon;
	//Phuong thuc khoi tao ban dau
	Date()
	{
		time_t rawtime;
		struct tm *info;
		char buffer[80];
		time(&rawtime);
		info = localtime(&rawtime);
		this->nNgay = (info->tm_mday);
		this->nThang = (info->tm_mon);
		this->nNam = (info->tm_year);
	}
	//Phuong thuc khoi tao co tham so
	Date(int nNgay, int nThang, int nNam)
	{
		this->nNgay = nNgay;
		this->nThang = nThang;
		this->nNam = nNam;
	}
	
	//Phuong thuc Setter
	int getNgay();
	int getThang();
	int getNam();

	//Phuong thuc getter
	void setNgay(int nNgay);
	void setThang(int nThang);
	void setNam(int nNam);
	void setDate(int nNgay, int nThang, int nNam);

	~Date(){} //phuong thuc huy
};
