#include<iostream>
using namespace std;

static float TongS = 0;
static float TongV = 0;

class LoaiChai {
public:
    int h;
	virtual void Nhap() {
		cin >> h;
	}
};

class Cylinder : public LoaiChai {
public:
    int r;
	void Nhap() {
		LoaiChai::Nhap();
		cin >> r;
		TongS += 2 * 3.14 * r * h;
        TongV += r * r * 3.14 * 1.0 * h; 
	}
};

class Rectangular : public LoaiChai {
public:
	int d, r;
	void Nhap() {
		LoaiChai::Nhap();
        cin >> d >> r;
        TongS += ((d + r) * 2 * h * 1.0) + (2 * d * r * 1.0);
        TongV += h * d * r * 1.0;
	}
};

class Cube : public LoaiChai {
public:
    void Nhap(){
        LoaiChai::Nhap();
        TongS += h * h * 6 * 1.0;
        TongV += h * h * h * 1.0;
    }
};

int main() {
	int n;
	cin >> n;
	LoaiChai** DSChai = new LoaiChai*[n];
	for (int i = 0; i < n; i++) {
		int loai;
		cin >> loai;
		if (loai == 1) {
			DSChai[i] = new Cylinder;
		}
		if (loai == 2) {
			DSChai[i] = new Rectangular;
		}
		if (loai == 3) {
			DSChai[i] = new Cube;
		}
		DSChai[i]->Nhap();

	}
    cout << "Dien tich chai vo: " << TongS;
    cout << "\nLuong nuoc tren mat dat: " << TongV * 0.1;
	return 0;
}