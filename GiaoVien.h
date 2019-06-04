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
#ifndef GiaoVien_h
#define GiaoVien_h
#include "BanDoc.h"
class GiaoVien :
	public BanDoc
{
private: 
	string sDiaChi, sSoDT;
public:
	//phuong thuc khoi tao mac dinh
	GiaoVien()
	{
		sDiaChi = "";
		sSoDT = "";
	}
	//phuong thuc khoi tao co tham so
	GiaoVien(string sMaBanDoc, string sHoTen, string sKhoa, string sNgayBanDocDK, string sDiaChi, string sSoDT)
		:BanDoc(sMaBanDoc, sHoTen, sKhoa, sNgayBanDocDK)
	{
		this->sDiaChi = sDiaChi;
		this->sSoDT = sSoDT;
	}

	//phuong thuc getter
	string getDiaChi();
	string getSoDT();

	//phuong thuc setter
	void setDiaChi(string sDiaChi);
	void setSoDT(string sSoDT);

	//phuong thuc nhap
	void nhap();
	//phuong thuc xuat
	void xuat();

	~GiaoVien() {}	//phuong thuc huy
};

#endif // !GiaoVien_h