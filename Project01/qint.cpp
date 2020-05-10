#include "qint.h"
#include "Xuly_QInt.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool la_hop_le_QInt(char *num, int radix)
{
	if (!num || strlen(num) <= 0)
		return 0;
	int i = 0;
	if (radix == 10) {
		if (num[i] == '+' || num[i] == '-')
			++i;
	}
	for (; num[i] != '\0'; ++i) {
		if (!la_chu_so(num[i], radix))
			return 0;
	}
	return 1;
}

bool *str2_to_bit(char *num, int size)
{
	bool *ans = (bool *)malloc(sizeof(bool) * size);
	int len = strlen(num);
	for (int i = size - 1; i >= size - len; i--)
		ans[i] = num[len + i - size] -
			 '0';
	for (int i = 0; i < size - len; i++)
		ans[i] = 0;
	return ans;
}

char *bit_to_str2(bool *str2, int size)
{
	int count = 0;
	while (str2[count] == 0 && count < size)
		count++;
	int len_str = size - count;
	char *ans = NULL;
	if (len_str == 0) {
		ans = (char *)malloc(sizeof(char) * 2);
		ans[0] = '0';
		ans[1] = '\0';
	} else {
		ans = (char *)malloc(sizeof(char) * (len_str + 1));
		ans[len_str] = '\0';
		for (int i = len_str - 1; i >= 0; i--)
			if (str2[i + size - len_str] == 1)
				ans[i] = '1';
			else
				ans[i] = '0';
	}
	return ans;
}

bool *str16_to_bit(char *num, int size)
{
	bool *bits = (bool *)malloc(sizeof(bool) * size);
	int len = strlen(num);
	int temp = size - 1;
	for (int i = len - 1; i >= 0 && temp >= 0; --i) {
		if (num[i] == '0') {
			bits[temp - 3] = 0;
			bits[temp - 2] = 0;
			bits[temp - 1] = 0;
			bits[temp] = 0;
		} else if (num[i] == '1') {
			bits[temp - 3] = 0;
			bits[temp - 2] = 0;
			bits[temp - 1] = 0;
			bits[temp] = 1;
		} else if (num[i] == '2') {
			bits[temp - 3] = 0;
			bits[temp - 2] = 0;
			bits[temp - 1] = 1;
			bits[temp] = 0;
		} else if (num[i] == '3') {
			bits[temp - 3] = 0;
			bits[temp - 2] = 0;
			bits[temp - 1] = 1;
			bits[temp] = 1;
		} else if (num[i] == '4') {
			bits[temp - 3] = 0;
			bits[temp - 2] = 1;
			bits[temp - 1] = 0;
			bits[temp] = 0;
		} else if (num[i] == '5') {
			bits[temp - 3] = 0;
			bits[temp - 2] = 1;
			bits[temp - 1] = 0;
			bits[temp] = 1;
		} else if (num[i] == '6') {
			bits[temp - 3] = 0;
			bits[temp - 2] = 1;
			bits[temp - 1] = 1;
			bits[temp] = 0;
		} else if (num[i] == '7') {
			bits[temp - 3] = 0;
			bits[temp - 2] = 1;
			bits[temp - 1] = 1;
			bits[temp] = 1;
		} else if (num[i] == '8') {
			bits[temp - 3] = 1;
			bits[temp - 2] = 0;
			bits[temp - 1] = 0;
			bits[temp] = 0;
		} else if (num[i] == '9') {
			bits[temp - 3] = 1;
			bits[temp - 2] = 0;
			bits[temp - 1] = 0;
			bits[temp] = 1;
		} else if (num[i] == 'A') {
			bits[temp - 3] = 1;
			bits[temp - 2] = 0;
			bits[temp - 1] = 1;
			bits[temp] = 0;
		} else if (num[i] == 'B') {
			bits[temp - 3] = 1;
			bits[temp - 2] = 0;
			bits[temp - 1] = 1;
			bits[temp] = 1;
		} else if (num[i] == 'C') {
			bits[temp - 3] = 1;
			bits[temp - 2] = 1;
			bits[temp - 1] = 0;
			bits[temp] = 0;
		} else if (num[i] == 'D') {
			bits[temp - 3] = 1;
			bits[temp - 2] = 1;
			bits[temp - 1] = 0;
			bits[temp] = 1;
		} else if (num[i] == 'E') {
			bits[temp - 3] = 1;
			bits[temp - 2] = 1;
			bits[temp - 1] = 1;
			bits[temp] = 0;
		} else if (num[i] == 'F') {
			bits[temp - 3] = 1;
			bits[temp - 2] = 1;
			bits[temp - 1] = 1;
			bits[temp] = 1;
		}
		temp -= 4;
	}
	if (temp >= 0) {
		for (int i = 0; i <= temp; ++i) {
			bits[i] = 0;
		}
	}
	return bits;
}

char *bit_to_str16(bool *bits)
{
	return BinToHex_int(bits);
}
void QInt::ScanQInt()
{
	const int max_size = 50;
	char num[max_size + 1];
	int radix;
	printf("Nhap he so: ");
	scanf("%d", &radix);
	printf("Nhap so nguyen lon: ");
	scanf("%s", num);
	bool* bits;
	if (!la_hop_le_QInt(num, radix)) {
		printf("Input khong hop le\n");
		bits = (bool*)malloc(sizeof(bool) * QInt_Size);
		for (int i = 0; i < QInt_Size; ++i) {
			bits[i] = 0;
		}
	}
	else {
		if (radix == 10)
			bits = str10_to_bit(num, QInt_Size);
		else if (radix == 2)
			bits = str2_to_bit(num, QInt_Size);
		else
			bits = str16_to_bit(num, QInt_Size);
	}
	*this = BinToDec_int(bits);
	free(bits);
}
void QInt::PrintQInt()
{
	bool *bits = DecToBin_int(*this);
	printf("Xuat so nguyen lon: ");
	char *str10 = bit_to_str10(bits, 128);
	if (strcmp(str10, INF) == 0)
		printf("INF\n");
	else
		printf("%s\n", str10);
	free(bits);
	free(str10);
}
bool *DecToBin_int(QInt q)
{
	bool *bits = (bool *)malloc(sizeof(bool) * 128);
	for (int i = 0, y = 0; i < 4; ++i, y += 32) {
		int_to_seq(q._data[i], bits, y, y + 31);
	}
	return bits;
}
QInt BinToDec_int(bool *bits)
{
	QInt x;
	for (int i = 0, j = 0; i < 4; ++i, j += 32) {
		x._data[i] = seq_to_int(bits, j, j + 31);
	}
	return x;
}
char* BinToHex_int(bool *bits)
{
	const int size = 32;
	char *hexas = (char *)malloc(sizeof(char) * (size + 1));
	hexas[size] = '\0';
	char hexa_digit[] = "0123456789ABCDEF";
	for (int i = 0, j = 0; i < size; ++i, j += 4) {
		int d = seq_to_uint(bits, j, j + 3);
		hexas[i] = hexa_digit[d];
	}
	return hexas;
}
char *DecToHex_int(QInt q)
{
	bool *temp_bits = DecToBin_int(q);
	bool bits[128];
	for (int i = 0; i < 128; ++i) {
		bits[i] = temp_bits[i];
	}
	free(temp_bits);
	return BinToHex_int(bits);
}
void QInt::BinToDec(bool* bits) 
{
	*this = BinToDec_int(bits);
}
void QInt::HexToDec(char* nums)
{
	*this = BinToDec_int(str16_to_bit(nums, 128));
}
QInt QInt::operator+(QInt b)
{
	bool *bits_1 = DecToBin_int(*this);
	bool *bits_2 = DecToBin_int(b);
	const int size = 128;
	bool *tong = cong_bits(bits_1, bits_2, size);
	QInt q = BinToDec_int(tong);
	free(bits_1);
	free(bits_2);
	free(tong);
	return q;
}
QInt QInt::operator-(QInt b)
{
	bool *bits_2 = DecToBin_int(b);
	doi_dau_bit(bits_2, 128);
	QInt new_b = BinToDec_int(bits_2);
	free(bits_2);
	return *this + new_b;
}
QInt QInt::operator*(QInt M)
{
	bool *bits_1 = DecToBin_int(*this);
	bool *bits_2 = DecToBin_int(M);
	bool *tich = nhan_bits(bits_1, bits_2, QInt_Size);
	QInt result = BinToDec_int(tich);
	free(bits_1);
	free(bits_2);
	free(tich);
	return result;
}
QInt QInt::operator/(QInt M)
{
	bool *Q_bits = DecToBin_int(*this);
	bool *M_bits = DecToBin_int(M);
	bool *r;
	bool *Quotient = chia_bits(Q_bits, M_bits, QInt_Size, r);
	QInt q = BinToDec_int(Quotient);
	free(Q_bits);
	free(M_bits);
	free(r);
	free(Quotient);
	return q;
}
QInt QInt::operator&(QInt b)
{
	bool *bits_1 = DecToBin_int(*this);
	bool *bits_2 = DecToBin_int(b);
	bool *bits_3 = (bool *)malloc(sizeof(bool) * 128);

	for (int i = 0; i < 128; ++i) {
		if (bits_1[i] == 1 && bits_2[i] == 1)
			bits_3[i] = 1;
		else
			bits_3[i] = 0;
	}
	QInt q = BinToDec_int(bits_3);
	free(bits_1);
	free(bits_2);
	free(bits_3);
	return q;
}
QInt QInt::operator|(QInt b)
{
	bool *bits_1 = DecToBin_int(*this);
	bool *bits_2 = DecToBin_int(b);
	bool *bits_3 = (bool *)malloc(sizeof(bool) * 128);
	for (int i = 0; i < 128; ++i) {
		if (bits_1[i] == 0 && bits_2[i] == 0)
			bits_3[i] = 0;
		else
			bits_3[i] = 1;
	}
	QInt q = BinToDec_int(bits_3);
	free(bits_1);
	free(bits_2);
	free(bits_3);
	return q;
}
QInt QInt::operator^(QInt b)
{
	bool *bits_1 = DecToBin_int(*this);
	bool *bits_2 = DecToBin_int(b);
	bool *bits_3 = (bool *)malloc(sizeof(bool) * 128);
	for (int i = 0; i < 128; ++i) {
		if (bits_1[i] == bits_2[i])
			bits_3[i] = 0;
		else
			bits_3[i] = 1;
	}
	QInt q = BinToDec_int(bits_3);
	free(bits_1);
	free(bits_2);
	free(bits_3);
	return q;
}
QInt QInt::operator~()
{
	bool *bits_1 = DecToBin_int(*this);
	nghich_dao_bit(bits_1, 128);
	QInt q = BinToDec_int(bits_1);
	free(bits_1);
	return q;
}
QInt QInt::operator<<(int count)
{
	const int size = 128;
	bool *bits = DecToBin_int(*this);
	if (count >= size) {
		for (int i = 0; i < size; ++i) {
			bits[i] = 0;
		}
	} else {
		for (int i = 0; i < count; ++i) {
			dich_trai_1_bit(bits, size);
		}
	}
	QInt q = BinToDec_int(bits);
	free(bits);
	return q;
}

QInt QInt::operator>>(int count)
{
	const int size = 128;
	bool *bits = DecToBin_int(*this);
	if (count >= size) {
		for (int i = 1; i < size; ++i) {
			bits[i] = bits[0];
		}
	} else {
		for (int i = 0; i < count; ++i) {
			dich_phai_1_bit(bits, size);
		}
	}
	QInt q = BinToDec_int(bits);
	free(bits);
	return q;
}
QInt QInt::rol(int count)
{
	bool* x = new bool[128];
	x = DecToBin_int(*this);
	bool* y = new bool[count];
	for (int i = 0; i < count; i++)
		y[i] = x[i];
	for (int i = 0; i < 128 - count; i++)
		x[i] = x[i + count];
	for (int i = 0; i < count; i++)
		x[128 - count + i] = y[i];
	QInt temp = BinToDec_int(x);
	return temp;
}
QInt QInt::ror(int count)
{
	bool* x = new bool[128];
	x = DecToBin_int(*this);
	bool* y = new bool[count];
	for (int i = 0; i < count; i++)
		y[i] = x[128 - count + i];
	for (int i = 127; i > count - 1; i--)
		x[i] = x[i - count];
	for (int i = 0; i < count; i++)
		x[i] = y[i];
	QInt temp = BinToDec_int(x);
	return temp;
}
bool QInt::operator==(QInt b)
{
	bool *bits_a = DecToBin_int(*this);
	bool *bits_b = DecToBin_int(b);
	bool khacNhau = 0;
	for (int i = 0; i < 128; i++) {
		if (bits_a[i] != bits_b[i])
			khacNhau = 1;
	}
	free(bits_a);
	free(bits_b);
	return !khacNhau;
}
bool QInt::operator>(QInt b)
{
	bool *bits_a = DecToBin_int(*this);
	bool *bits_b = DecToBin_int(b);
	bool laSoAm_a = 0, laSoAm_b = 0;
	if (bits_a[0] == 1)
		laSoAm_a = 1;
	if (bits_b[0] == 1)
		laSoAm_b = 1;
	if (laSoAm_a > laSoAm_b)
		return false;
	if (laSoAm_a < laSoAm_b)
		return true;
	if (laSoAm_a == 1) {
		doi_dau_bit(bits_a, 128);
		doi_dau_bit(bits_b, 128);
	}
	bool lonHon = 0;
	for (int i = 1; i < 128; i++) {
		if (bits_a[i] < bits_b[i]) {
			lonHon = 0;
			break;
		} else if (bits_a[i] > bits_b[i]) {
			lonHon = 1;
			break;
		}
	}
	free(bits_a);
	free(bits_b);
	return laSoAm_a == 1 ? !lonHon : lonHon;
}
bool QInt::operator<(QInt b)
{
	bool *bits_a = DecToBin_int(*this);
	bool *bits_b = DecToBin_int(b);
	bool laSoAm_a = 0, laSoAm_b = 0;
	if (bits_a[0] == 1)
		laSoAm_a = 1;
	if (bits_b[0] == 1)
		laSoAm_b = 1;
	if (laSoAm_a > laSoAm_b)
		return true;
	if (laSoAm_a < laSoAm_b)
		return false;
	if (laSoAm_a == 1) {
		doi_dau_bit(bits_a, 128);
		doi_dau_bit(bits_b, 128);
	}
	bool lonHon = 0;
	for (int i = 1; i < 128; i++) {
		if (bits_a[i] < bits_b[i]) {
			lonHon = 1;
			break;
		} else if (bits_a[i] > bits_b[i]) {
			lonHon = 0;
			break;
		}
	}
	free(bits_a);
	free(bits_b);
	return laSoAm_a == 1 ? !lonHon : lonHon;
}
bool QInt::operator>=(QInt b)
{
	if (*this == b || *this > b)
		return true;
	return false;
	
}
bool QInt::operator<=(QInt b)
{
	if (*this == b|| *this < b)
		return true;
	return false;
}

QInt QInt::operator=(QInt Q)
{
	for (int i = 0; i < 4; i++)
		_data[i] = Q._data[i];
	return *this;
}
void test_input_convert_int()
{
	printf("Test input output int\n");
	QInt q;
	q.ScanQInt();
	q.PrintQInt();

	printf("DecToBin_int\n");
	bool *bits = DecToBin_int(q);
	in_bit(bits, 128);

	printf("BinToDec_int\n");
	QInt q_2 = BinToDec_int(bits);
	q_2.PrintQInt();

	printf("BinToHex_int\n");
	char *s1 = BinToHex_int(bits);
	printf("%s\n", s1);
	free(s1);

	printf("DecToHex_int\n");
	char *s2 = DecToHex_int(q);
	printf("%s\n", s2);
	free(s2);

	free(bits);
}

void test_cong_tru_int()
{
	printf("Test cong tru int\n");
	QInt q_1, q_2;
	q_1.ScanQInt();
	q_2.ScanQInt();

	printf("Tong\n");
	QInt q_3 = q_1 + q_2;
	q_3.PrintQInt();

	printf("Hieu\n");
	QInt q_4 = q_1 - q_2;
	q_4.PrintQInt();
}

void test_nhan_chia_int()
{
	printf("Test nhan chia int\n");
	QInt q_1, q_2;
	q_1.ScanQInt();
	q_2.ScanQInt();

	printf("Nhan\n");
	QInt q_3 = q_1 * q_2;
	q_3.PrintQInt();

	printf("Chia\n");
	QInt q_4 = q_1 / q_2;
	q_4.PrintQInt();
}

void test_bit_operator_int()
{
	printf("Test bit operator int\n");
	QInt q_1, q_2;
	q_1.ScanQInt();
	q_2.ScanQInt();

	printf("AND\n");
	QInt q_3 = q_1 & q_2;
	q_3.PrintQInt();

	printf("OR\n");
	QInt q_4 = q_1 | q_2;
	q_4.PrintQInt();

	printf("XOR\n");
	QInt q_5 = q_1 ^ q_2;
	q_5.PrintQInt();

	printf("NOT\n");
	QInt q_6 = ~q_1;
	QInt q_7 = ~q_2;
	q_6.PrintQInt();
	q_7.PrintQInt();

	printf("Left Shift\n");
	QInt q_8 = q_1 << 1;
	QInt q_9 = q_2 << 2;
	q_8.PrintQInt();
	q_9.PrintQInt();

	printf("Right Shift\n");
	QInt q_10 = q_1 >> 1;
	QInt q_11 = q_2 >> 2;
	q_10.PrintQInt();
	q_11.PrintQInt();
}
