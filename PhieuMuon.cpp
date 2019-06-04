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
#include "PhieuMuon.h"
int PhieuMuon::getSoTT() {
	return this->nSoTT;
}
int PhieuMuon::getTinhTrangPM()
{
	return this->nTinhTrangPM;
}
string PhieuMuon::getNgayMuon()
{
	return this->sNgayMuon;
}
string PhieuMuon::getNgayTra()
{
	return this->sNgayTra;
}
void PhieuMuon::setSoTT(int nSoTT)
{
	this->nSoTT = nSoTT;

}
void PhieuMuon::setTinhTrang(int nTinhTrangPM)
{
	this->nTinhTrangPM = nTinhTrangPM;

}
void PhieuMuon::setNgayMuon(string sNgayMuon)
{
	this->sNgayMuon = sNgayMuon;

}
void PhieuMuon::setNgayTra(string sNgayTra)
{
	this->sNgayTra = sNgayTra;

}
void PhieuMuon::setPhieuMuon(int nSoTT, int nTinhTrangPM, string sNgayMuon, string sNgayTra)
{
	this->nSoTT = nSoTT;
	this->nTinhTrangPM = nTinhTrangPM;
	this->sNgayMuon = sNgayMuon;
	this->sNgayTra = sNgayTra;
}