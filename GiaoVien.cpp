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

#include "GiaoVien.h"

//phuong thuc nhap
void GiaoVien::nhap()
{
	cout << "Nhap ma ban doc: "; rewind(stdin); getline(cin, sMaBanDoc);
	cout << "\nNhap ho ten giao vien: "; rewind(stdin); getline(cin, sHoTen);
	cout << "\nNhap khoa giao vien: "; rewind(stdin); getline(cin, sKhoa);
	cout << "\nNhap ngay dang ky ban doc: "; rewind(stdin); getline(cin, sNgayBanDocDK);
	cout << "\nNhap dia chi: "; rewind(stdin); getline(cin, sDiaChi);
	cout << "\nNhap so dien thoai: "; rewind(stdin); getline(cin, sSoDT);
}
//phuong thuc xuat
void GiaoVien::xuat()
{
	cout << "Ma ban doc: " << sMaBanDoc << endl;
	cout << "Ho ten giao vien: " << sHoTen << endl;
	cout << "Khoa giao vien: " << sKhoa << endl;
	cout << "Ngay ban doc dang ky: " << sNgayBanDocDK << endl;
	cout << "Dia chi: " << sDiaChi << endl;
	cout << "So dien thoai: " << sSoDT << endl;
}

//phuong thuc getter
string GiaoVien::getDiaChi()
{
	return this->sDiaChi;
}
string GiaoVien::getSoDT()
{
	return this->sSoDT;
}

//phuong thuc setter
void GiaoVien::setDiaChi(string sDiaChi)
{
	this->sDiaChi = sDiaChi;
}
void GiaoVien::setSoDT(string sSoDT)
{
	this->sSoDT = sSoDT;
}