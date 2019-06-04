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

#pragma once
class BanDoc;
//Xay dung doi tuong Sach
class Sach
{
private:
	string sMaSach, sTuaDe, sTacGia, sNhaXuatBan, sNamPhatHanh, sNgayNhapKho;
	double dTriGia;
	int nSoTrang, nTinhTrangSach;
public:
	friend BanDoc;
	//Phuong thuc khoi tao ban dau
	Sach()
	{
		sMaSach = "";
		sTuaDe = "";
		sTacGia = "";
		sNhaXuatBan = "";
		dTriGia = 0.0;
		sNamPhatHanh = "";
		nSoTrang = 0;
		sNgayNhapKho = "";
		nTinhTrangSach = 0;
	}

	//Phuong thuc khoi tao co tham so
	Sach(string sMaSach, string sTuaDe, string sTacGia, string sNhaXuatBan, double dTriGia, string sNamPhatHanh, int nSoTrang, string sNgayNhapKho, int nTinhTrangSach)
	{
		this->sMaSach = sMaSach;
		this->sTuaDe = sTuaDe;
		this->sTacGia = sTacGia;
		this->sNhaXuatBan = sNhaXuatBan;
		this->dTriGia = dTriGia;
		this->sNamPhatHanh = sNamPhatHanh;
		this->nSoTrang = nSoTrang;
		this->sNgayNhapKho = sNgayNhapKho;
		this->nTinhTrangSach = nTinhTrangSach;
	}

	//Phuong thuc getter
	string getMaSach();
	string getTuaDe();
	string getTacGia();
	string getNhaXuatBan();
	double getTriGia();
	string getNamPhatHanh();
	int getSoTrang();
	string getNgayNhapKho();
	int getTinhTrangSach();

	//Phuong thuc setter
	void setMaSach(string sMaSach);
	void setTuaDe(string sTuaDe);
	void setTacGia(string sTacGia);
	void setNhaXuatBan(string sNhaXuatBan);
	void setTriGia(double dTriGia);
	void setNamPhatHanh(string );
	void setSoTrang(int nSoTrang);
	void setNgayNhapKho(string sNgayNhapKho);
	void setTinhTrangSach(int nTinhTrangSach);

	//phuong thuc nhap thong tin sach
	void nhapSach();
	//phuong thuc xuat thong tin sach
	void xuatSach();
	//phuong thuc doc file len
	friend fstream &istream(ifstream &fin, Sach &xS);
	//phuong thuc ghi file xuoong
	friend fstream &ostream(ofstream &fout, Sach &xS);

	~Sach(){}	//phuong thuc huy
};

