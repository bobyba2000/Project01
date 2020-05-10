#ifndef QINT_INCLUDED
#define QINT_INCLUDED
#define INF "170141183460469231731687303715884105727\0"
class QInt {
public:
	int _data[4];
	
public:
    QInt operator=(QInt Q);

    // YEUCAU: Nhap xuat
    void ScanQInt();
    void PrintQInt();

    //YEUCAU: Chuyen doi
    void BinToDec(bool* bits);
    void HexToDec(char* nums);

    // YEUCAU: Xu ly toan tu + -
    QInt operator+(QInt b);
    QInt operator-(QInt b);
    QInt operator*(QInt M);
    QInt operator/(QInt M);

    // YEUCAU Xu ly toan tu AND (&), OR(|), XOR(^), NOT(~) dich trai va dich phai, xoay trai xoay phai
    QInt operator&(QInt b);
    QInt operator|(QInt b);
    QInt operator^(QInt b);
    QInt operator~();
    QInt operator<<(int count);
    QInt operator>>(int count);
    QInt rol(int count);
    QInt ror(int count);

    /*YEUCAU xu ly cac toan tu so sanh va gan*/
    bool operator> (QInt b);
    bool operator< (QInt b);
    bool operator== (QInt b);
    bool operator>= (QInt b);
    bool operator<= (QInt b);
};

const int QInt_Size = 128;

bool *str2_to_bit(char *num, int size);
char *bit_to_str2(bool *bits, int size);
// TODO str16
bool *str16_to_bit(char *num, int size);
char *bit_to_str16(bool *bits);

// YEUCAU: Chuyen doi, mac dinh bits la 128
bool *DecToBin_int(QInt q);
QInt BinToDec_int(bool *bits);
char *BinToHex_int(bool *bits);
char *DecToHex_int(QInt q);


// Cac ham kiem tra
void test_input_convert_int();
void test_cong_tru_int();
void test_nhan_chia_int();
void test_bit_operator_int();

#endif
