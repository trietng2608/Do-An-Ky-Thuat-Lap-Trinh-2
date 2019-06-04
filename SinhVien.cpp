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

#include "SinhVien.h"

//phuong thuc nhap
void SinhVien::nhap()
{
	cout << "Nhap ma ban doc: "; rewind(stdin); getline(cin, sMaBanDoc);
	cout << "\nNhap ho ten sinh vien: "; rewind(stdin); getline(cin, sHoTen);
	cout << "\nNhap ngay dang ky ban doc: "; rewind(stdin); getline(cin, sNgayBanDocDK);
	cout << "\nNhap khoa hoc: "; cin >> nKhoaHoc;
}
//phuong thuc xuat
void SinhVien::xuat()
{
	cout << "Ma ban doc: " << sMaBanDoc;
	cout << "\nHo ten sinh vien: " << sHoTen;
	cout << "\nNgay dang ky ban doc: " << sNgayBanDocDK;
	cout << "\nKhoa hoc: " << nKhoaHoc << endl;
}

//Phuong thuc getter
int SinhVien::getKhoaHoc()
{
	return this->nKhoaHoc;
}

//Phuong thuc setter
void SinhVien::setKhoaHoc(int nKhoaHoc)
{
	this->nKhoaHoc = nKhoaHoc;
}