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
#include "Sach.h"

//Phuong thuc get
string Sach::getMaSach()
{
	return this->sMaSach;
}
string Sach::getTuaDe()
{
	return this->sTuaDe;
}
string Sach::getTacGia()
{
	return this->sTacGia;
}
string Sach::getNhaXuatBan()
{
	return this->sNhaXuatBan;
}
double Sach::getTriGia()
{
	return this->dTriGia;
}
string Sach::getNamPhatHanh()
{
	return this->sNamPhatHanh;
}
int Sach::getSoTrang()
{
	return this->nSoTrang;
}
string Sach::getNgayNhapKho()
{
	return this->sNgayNhapKho;
}
int Sach::getTinhTrangSach()
{
	return this->nTinhTrangSach;
}

//Phuong thuc set(thay doi gia tri)
void Sach::setMaSach(string sMaSach)
{
	this->sMaSach = sMaSach;
}
void Sach::setTuaDe(string sTuaDe)
{
	this->sTuaDe = sTuaDe;
}
void Sach::setTacGia(string sTacGia)
{
	this->sTacGia = sTacGia;
}
void Sach::setNhaXuatBan(string sNhaXuatBan)
{
	this->sNhaXuatBan = sNhaXuatBan;
}
void Sach::setTriGia(double dTriGia)
{
	this->dTriGia = dTriGia;
}
void Sach::setNamPhatHanh(string)
{
	this->sNamPhatHanh = sNamPhatHanh;
}
void Sach::setSoTrang(int nSoTrang)
{
	this->nSoTrang = nSoTrang;
}
void Sach::setNgayNhapKho(string sNgayNhapKho)
{
	this->sNgayNhapKho = sNgayNhapKho;
}
void Sach::setTinhTrangSach(int nTinhTrangSach)
{
	this->nTinhTrangSach = nTinhTrangSach;
}

//phuong thuc nhap thong tin sach
void Sach::nhapSach()
{
	cout << "Nhap ma sach: "; rewind(stdin); getline(cin, sMaSach);
	cout << "\nNhap tua de sach: "; rewind(stdin); getline(cin, sTuaDe);
	cout << "\nNhap tac gia:"; rewind(stdin); getline(cin, sTacGia);
	cout << "\nNhap nha xuat ban: "; rewind(stdin); getline(cin, sNhaXuatBan);
	cout << "\nNhap tri gia: "; cin >> dTriGia;
	cout << "\nNhap nam phat hanh: "; rewind(stdin); getline(cin, sNamPhatHanh);
	cout << "\nNhap so trang: "; cin >> nSoTrang;
	cout << "\nNhap ngay nhap kho: "; rewind(stdin); getline(cin, sNgayNhapKho);
	cout << "\nNhap tinh trang sach: "; cin >> nTinhTrangSach;
	cout << "\n";
	
}
//phuong thuc xuat thong tin sach
void Sach::xuatSach()
{
	cout << "Ma sach: " << sMaSach << endl;
	cout << "Tua de: " << sTuaDe << endl;
	cout << "Tac gia: " << sTacGia << endl;
	cout << "Nha xuat ban: " << sNhaXuatBan << endl;
	cout << "Tri gia: " << dTriGia << endl;
	cout << "Nam phat hanh: " << sNamPhatHanh << endl;
	cout << "So trang: " << nSoTrang << endl;
	cout << "Ngay nhap kho: " << sNgayNhapKho << endl;
	cout << "Tinh trang sach: " << nTinhTrangSach << endl;
}

//phuong thuc doc file
fstream &istream(ifstream &fin, Sach &xS)
{
	int nN = 0;
	ifstream fin;
	fin.open("Book_Data.txt");
	fin >> nN;
	getline(fin, xS.sMaSach, ','); fin.ignore(1);
	getline(fin, xS.sTuaDe, ','); fin.ignore(1);
	getline(fin, xS.sTacGia, ','); fin.ignore(1);
	getline(fin, xS.sNhaXuatBan, ',');  fin.ignore(1);
	fin >> xS.dTriGia, ','; fin.ignore(1);
	getline(fin, xS.sNamPhatHanh, ','); fin.ignore(1);
	fin >> xS.nSoTrang, ','; fin.ignore(1);
	getline(fin, xS.sNgayNhapKho); fin.ignore(1);
	fin >> xS.nTinhTrangSach;

	fin.close();
}

//phuong thuc ghi ra file
fstream &ostream(ofstream &fout, Sach &xS)
{
	int nN = 0;
	ofstream fout;
	fout.open("Book_Data.txt");
	fout << nN;
	fout << xS.getMaSach() << ', ' << endl;
	fout << xS.getTuaDe() << ', ' << endl;
	fout << xS.getTacGia() << ', ' << endl;
	fout << xS.getNhaXuatBan << ', ' << endl;
	fout << xS.getTriGia << ', ' << endl;
	fout << xS.getNamPhatHanh << ', ' << endl;
	fout << xS.getSoTrang << ', ' << endl;
	fout << xS.getNgayNhapKho << ', ' << endl;
	fout << xS.getTinhTrangSach << ', ' << endl;

	fout.close();
}