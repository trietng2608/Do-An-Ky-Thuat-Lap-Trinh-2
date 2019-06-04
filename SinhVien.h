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

#ifndef SinhVien_h
#define SinhVien_h

#include "BanDoc.h"
class SinhVien :
	public BanDoc
{
protected:
	int nKhoaHoc;
public:
	//Phuong thuc khoi tao mac dinh
	SinhVien()
	{
		nKhoaHoc = 0;
	}
	//Phuong thuc khoi tao co tham so
	SinhVien(string sMaBanDoc, string sHoTen, string sKhoa, string sNgayBanDocDK, int nKhoaHoc):BanDoc(sMaBanDoc, sHoTen, sKhoa, sNgayBanDocDK)
	{
		this->nKhoaHoc = nKhoaHoc;
	}

	//Phuong thuc getter
	int getKhoaHoc();

	//Phuong thuc setter
	void setKhoaHoc(int nKhoaHoc);

	//phuong thuc nhap
	void nhap();
	//phuong thuc xuat
	void xuat();


	~SinhVien(){}	//Phuong thuc huy
};

#endif // !SinhVien_h