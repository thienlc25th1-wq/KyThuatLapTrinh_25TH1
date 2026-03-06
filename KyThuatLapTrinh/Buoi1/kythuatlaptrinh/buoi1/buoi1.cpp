#include <iostream>
#include <vector>
using namespace std;
struct SinhVien{
	string hoten;
int tuoi;
bool gioitinh;
string diachi;
};
int main() {
	SinhVien b;
	b.hoten = "Le Chi Thien";
	b.tuoi = 19;
	b.gioitinh = true;
	b.diachi = "Long An";

	SinhVien c;
	c.hoten = "Nguyen Tuong Van";
	c.tuoi = 19;
	c.gioitinh = true;
	c.diachi = "Tien Giang";

	SinhVien d;
	d.hoten = "Tuyt Tuyt"
		d.tuoi = 19;
	d.gioitinh = true;
	d.diachi = "Tay Ninh";
		//SinhVien ds[50];
		vector <SinhVien> mang;
	mang.push_back(b);
	mang.push_back(c);
	mang.push_back(d);
	for (int i = 0; i < mang.size(); i++) {
		cout << "SinhVien" << (i + 1) << endl;
		cout << "\t + Ho ten: " << mang[i].hoten << endl;
		cout << "\t+ Tuoi: " << mang[i].tuoi << endl;
		cout << "\t+ Dia Chi: " << mang[i].diachi << endl;
		cout << "\t+ Gioi Tinh: " << mang[i].gioitinh << endl;
	}
}
//int main() {
//	int a = 5;
//	int* p = &a;
//	a += 6;
//	a = *p + 2;
//	cout << *p;
