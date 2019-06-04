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
#ifndef PhieuMuon_h
#define PhieuMuon_h

#include "BanDoc.h"
class PhieuMuon :
	public BanDoc
{
private:
	int nSoTT, nTinhTrangPM;
	string sNgayMuon, sNgayTra;
public:
	PhieuMuon() {
		nSoTT = 0;
		nTinhTrangPM = 0;
		sNgayMuon = "";
		sNgayTra = "";
	}
	PhieuMuon(string sMaBanDoc, string sMaGV, string sMaSV, string sNgayBanDocDK,
		int nSoTT, int nTinhTrangPM, string sNgayMuon, string sNgayTra) :BanDoc(sMaBanDoc, sMaGV, sMaSV, sNgayBanDocDK)
	{
		this->nSoTT = nSoTT;
		this->nTinhTrangPM = nTinhTrangPM;
		this->sNgayMuon = sNgayMuon;
		this->sNgayTra = sNgayTra;
	}
	int getSoTT();
	int getTinhTrangPM();
	string getNgayMuon();
	string getNgayTra();
	void setSoTT(int nSoTT);
	void setTinhTrang(int nTinhTrangPM);
	void setNgayMuon(string sNgayMuon);
	void setNgayTra(string sNgayTra);
	void setPhieuMuon(int nSoTT, int nTinhTrangPM, string sNgayMuon, string sNgayTra);
	~PhieuMuon() {}
};
#endif // !PhieuMuon_h
