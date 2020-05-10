#pragma once
#include<string>
#include<iostream>
using namespace std;
const int _size = 4;
const int _bitExp = 15;
const int _bitSig = 112;
const int _MINEXPDUOI = -16495;
const int _MINEXPTREN = -16383;

bool soSanh(string&soA, string&soB);

class Qfloat
{
private:
	int _data[4];

public:
	Qfloat();
	Qfloat(const char*a);
	Qfloat(string a);

	void ScanQfloat();
	void PrintQfloat();

	void xacDinhPhanNguyenPhanThapPhan(string number, string&phanNguyen, string&phanThapPhan, int&dau, int&soBitDoi);
	string laySoMu();
	string layPhanThapPhan();

	void chuyenVaLuu(string phanNguyen, string phanThapPhan, int dau, int soBitDoi);
	void chuanHoaThapPhan(string&phanNguyen, string&phanThapPhan, int dau, int&soBitDoi);

	void convertFromBit(int*dayBit);
	void convertToBit(int*&dayBit);
	string convertToStringDec();
	Qfloat convertFromString(string number);

	Qfloat soDoi();
	Qfloat operator+(Qfloat other);
	Qfloat operator-(Qfloat other);
	Qfloat operator*(Qfloat other);
	Qfloat operator/(Qfloat other);

	Qfloat&operator=(const char*a);
	Qfloat&operator=(string a);
	Qfloat&operator=(Qfloat a);

	static bool*DecToBin(Qfloat x);
	static Qfloat BinToDec(bool*bit);
	static Qfloat Infinity();
	static bool isInfinity(Qfloat b);

	~Qfloat();
};

