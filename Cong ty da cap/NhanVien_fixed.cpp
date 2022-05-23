#include<iostream>
#include<string>
using namespace std;

static int TongSoSanPham = 0;
static int TongSoNgayLamViec = 0;

class NhanVien {
public:
	string HoTen;
	float Luong;
	virtual void Nhap() {
		cin >> HoTen;
	}
	virtual void Xuat() {
		cout << HoTen << ": " << Luong << endl;
	}

	virtual void TinhLuong() = 0;

};

class NhanVienSanXuat : public NhanVien {
public:
	float LuongCoBan;
	int SoSanPham;
	void Nhap() {
		NhanVien::Nhap();
		cin >> LuongCoBan >> SoSanPham;
		TongSoSanPham += SoSanPham;
	}

	void TinhLuong() {
		this->Luong = this->LuongCoBan + this->SoSanPham * 5;
	}

};

class NhanVienVanPhong : public NhanVien {
public:
	int SoNgayLamViec;
	void Nhap() {
		NhanVien::Nhap();
		cin >> SoNgayLamViec;
		TongSoNgayLamViec += SoNgayLamViec;
	}

	void TinhLuong() {
		this->Luong = this->SoNgayLamViec * 100;
	}
};

class Sep : public NhanVien {
public:
	void TinhLuong() {
		this->Luong = 100 + TongSoSanPham * 2 + TongSoNgayLamViec * 40;
	}
};

int main() {
	int n;
	cin >> n;
	NhanVien** DSNhanVien = new NhanVien*[n];
	for (int i = 0; i < n; i++) {
		int loai;
		cin >> loai;
		if (loai == 1) {
			DSNhanVien[i] = new NhanVienSanXuat;
		}
		if (loai == 2) {
			DSNhanVien[i] = new NhanVienVanPhong;
		}
		if (loai == 3) {
			DSNhanVien[i] = new Sep;
		}
		DSNhanVien[i]->Nhap();

	}

	for (int i = 0; i < n; i++) {
		DSNhanVien[i]->TinhLuong();
		DSNhanVien[i]->Xuat();
	}
	return 0;
}