#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class SinhVien
{
	protected:
		string mssv;
		string hoten;
		int ngay, thang, nam;
		int khoa;
		string diachi;
		long long hocphi;
	public:
		virtual void nhap();
		virtual void xuat();
		virtual void tinhhocphi()=0;
		long long gethocphi();
};

void SinhVien::nhap()
{
	cout << "Nhap ma so sinh vien: ";
	cin.ignore(256, '\n');
	getline(cin, mssv);
	cout << "Nhap ho ten sinh vien: ";
	fflush(stdin);
	getline(cin, hoten);
	cout<<"Nhap nam sinh: ";
	cin >> nam;
	if(nam < 0){
		do{
			cout << "\nDinh dang nam khong dung.";
			cout << "\nNhap lai nam: ";
			cin >> nam;
		}while (nam < 0);
	}
	if (nam % 4 == 0 ){
		cout << "Nhap thang: ";
		cin >> thang;
		if (thang <= 0 || thang >12){
			do{
				cout << "\nDinh dang thang khong dung.";
				cout << "\nNhap lai thang: ";
				cin >> thang;
			}while (thang <= 0 || thang >12);
		}
		if(thang < 8){
			if(thang % 2 != 0){
				cout << "Nhap ngay: ";
				cin >> ngay;
				if (ngay <= 0 || ngay >=32){
					do{
						cout << "\nDinh dang ngay khong dung.";
						cout << "\nNhap lai ngay: ";
						cin >> ngay;	
					}while(ngay <= 0 || ngay >=32);
				}
			}
		}
		if(thang < 8){
			if(thang % 2 == 0 && thang != 2){
				cout << "Nhap ngay: ";
				cin >> ngay;
				if(ngay <= 0 || ngay >=31){
					do{
						cout << "\nDinh dang ngay khong dung.";
						cout << "\nNhap lai ngay: ";
						cin >> ngay;
					}while(ngay <= 0 || ngay >=31);
				}
			}
		}
		if(thang == 2){
			cout << "Nhap ngay: ";
			cin >> ngay;
			if(ngay <= 0 || ngay >=30){
				do{
					cout << "\nDinh dang ngay khong dung.";
					cout << "\nNhap lai ngay: ";
					cin >> ngay;
				}while(ngay <= 0 || ngay >=30);
			}
		}
		if(thang > 8){
			if(thang % 2 != 0){
				cout << "Nhap ngay: ";
				cin >> ngay;
				if(ngay <= 0 || ngay >=31){
					do{
						cout << "\nDinh dang ngay khong dung.";
						cout << "\nNhap lai ngay: ";
						cin >> ngay;
					}while(ngay <= 0 || ngay >=31);
				}
			}
		}
		if(thang > 8){
			if(thang % 2 == 0){
				cout << "Nhap ngay: ";
				cin >> ngay;
				if(ngay <= 0 || ngay >=32){
					do{
						cout << "\nDinh dang ngay khong dung.";
						cout << "\nNhap lai ngay: ";
						cin >> ngay;	
					}while(ngay <= 0 || ngay >=32);
				}
			}
		}
		if(thang == 8){
			cout << "Nhap ngay: ";
				cin >> ngay;
				if(ngay <= 0 || ngay >=32){
					cout << "\nDinh dang ngay khong dung.";
					cout << "\nNhap lai ngay: ";
					cin >> ngay;	
				}while(ngay <= 0 || ngay >=32);
		}
	}
	if(nam % 4 != 0){
		cout << "Nhap thang: ";
		cin >> thang;
		if(thang <= 0 || thang >12){
			do{
				cout << "\nDinh dang thang khong dung.";
				cout << "\nNhap lai thang: ";
				cin >> thang;
			}while(thang <= 0 || thang >12);
		}
		if(thang < 8){
			if(thang % 2 != 0){
				cout << "Nhap ngay: ";
				cin >> ngay;
				if(ngay <= 0 || ngay >=32){
					do{
						cout << "\nDinh dang ngay khong dung.";
						cout << "\nNhap lai ngay: ";
						cin >> ngay;	
					}while(ngay <= 0 || ngay >=32);
				}
			}
		}
		if(thang < 8){
			if(thang % 2 == 0 && thang != 2){
				cout << "Nhap ngay: ";
				cin >> ngay;
				if(ngay <= 0 || ngay >=31){
					do{
						cout << "\nDinh dang ngay khong dung.";
						cout << "\nNhap lai ngay: ";
						cin >> ngay;
					}while(ngay <= 0 || ngay >=31);
				}
			}
		}
		if(thang == 2){
			cout << "Nhap ngay: ";
			cin >> ngay;
			if(ngay <= 0 || ngay >=29){
				do{
					cout << "\nDinh dang ngay khong dung.";
					cout << "\nNhap lai ngay: ";
					cin >> ngay;
				}while(ngay <= 0 || ngay >=29);
			}
		}
		if(thang > 8){
			if(thang % 2 != 0){
				cout << "Nhap ngay: ";
				cin >> ngay;
				if(ngay <= 0 || ngay >=31){
					do{
						cout << "\nDinh dang ngay khong dung.";
						cout << "\nNhap lai ngay: ";
						cin >> ngay;
					}while(ngay <= 0 || ngay >=31);
				}
			}
		}
		if(thang > 8){
			if(thang % 2 == 0){
				cout << "Nhap ngay: ";
				cin >> ngay;
				if(ngay <= 0 || ngay >=32){
					do{ 
						cout << "\nDinh dang ngay khong dung.";
						cout << "\nNhap lai ngay: ";
						cin >> ngay;	
					}while(ngay <= 0 || ngay >=32);
				}
			}
		}
		if(thang == 8){
			cout << "Nhap ngay: ";
				cin >> ngay;
				if(ngay <= 0 || ngay >=32){
					do{
						cout << "\nDinh dang ngay khong dung.";
						cout << "\nNhap lai ngay: ";
						cin >> ngay;	
					}while(ngay <= 0 || ngay >=32);
				}
		}
	}
	cout << "\nNhap khoa: ";
	cin >> khoa;
	cout << "Nhap dia chi sinh vien: ";
	fflush(stdin);
	getline(cin, diachi);
}

void SinhVien::xuat()
{
	cout << "Ma so sinh vien: " << mssv << endl;
	cout << "Ho ten sinh vien: "<< hoten << endl;
	cout << "Ngay/thang/nam sinh: "<< ngay << "/" << thang << "/" << nam <<endl;
	cout << "Khoa: " << khoa << endl;
}

long long SinhVien::gethocphi()
{
	return hocphi;
}

//tao class con SinhVienKiThuat ke thua class cha SinhVien
class SinhVienKiThuat : public SinhVien
{
	private:
		int sotinchi;
	public:
		void nhap();
		void xuat();
		void tinhhocphi();
};

void SinhVienKiThuat::nhap()
{
	SinhVien::nhap();
	cout << "Nhap so tin chi: ";
	cin >> sotinchi;
}

void SinhVienKiThuat::xuat()
{
	SinhVien::xuat();
	cout << "So tin chi: " << sotinchi << endl;
	this->tinhhocphi();
	cout << "Hoc phi: " << hocphi << "vnd" << endl; 
}

void SinhVienKiThuat::tinhhocphi()
{
	hocphi = sotinchi * 330400;
}

class SinhVienKinhTe : public SinhVien
{	
	private:
		int sotinchi;
	public:
		void nhap();
		void xuat();
		void tinhhocphi();
};

void SinhVienKinhTe::nhap()
{
	SinhVien::nhap();
	cout << "Nhap so tin chi: ";
	cin >> sotinchi;
}

void SinhVienKinhTe::xuat()
{
	SinhVien::xuat();
	cout << "So tin chi: "<<sotinchi<<endl;
	this->tinhhocphi();
	cout << "Hoc phi: " << hocphi << "vnd" << endl;
}

void SinhVienKinhTe::tinhhocphi()
{
	this->hocphi = this->sotinchi * 275200;
}

class QuanLySinhVien
{
    private:
        vector<SinhVien *> SV;
    public:
        void NhapDS();
        void XuatDS();
        void SapXepTangDan();
        void SapXepGiamDan();
        void Maxhocphi();
        void Minhocphi();
        void Tonghocphi();
        void timkiemten();
};

void QuanLySinhVien :: NhapDS()
{
	SinhVien *sv;
    int n, m;
    cout << "Nhap so luong sinh vien ky thuat: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        sv = new SinhVienKiThuat;
        cout<<"Nhap sinh vien thu "<<i+1<<endl;
        sv->nhap();
        SV.push_back(sv);
        cout<<endl;
    }
    cout << "Nhap so luong sinh vien kinh te: ";
    cin >> m;
    for (int i = 0; i < m; i++){
        sv = new SinhVienKinhTe;
        cout<<"Nhap sinh vien thu "<<i+1<<endl;
		sv->nhap();
        SV.push_back(sv);
        cout << endl;
    }
}

void QuanLySinhVien :: XuatDS()
{
	if(SV.size()==0){
		cout << "\n\n\t\t\t\t\t********** Danh sach rong **********" << endl;
	}
	else{
		for(int i = 0; i < this -> SV.size(); i++){
        	this->SV.at(i)->xuat();
        	cout << endl;
		}
	}
}

void QuanLySinhVien :: SapXepTangDan()
{
	if(SV.size()==0){
		cout << "\n\n\t\t\t\t\t********** Danh sach rong **********" << endl;
	}
	else{
		for (int i=0; i < SV.size()-1; i++){
        for (int j = i + 1; j < SV.size(); j++){
            if(SV.at(i)->gethocphi() > SV.at(j)->gethocphi()){
                SinhVien *t= SV.at(i);
                SV.at(i)=SV.at(j);
                SV.at(j)=t;
            }
        }
    }
    XuatDS();
	}
}

void QuanLySinhVien :: SapXepGiamDan()
{
	if(SV.size()==0){
		cout << "\n\n\t\t\t\t\t********** Danh sach rong **********" << endl;
	}
	else{
		for (int i=0; i < SV.size()-1; i++){
        for (int j = i + 1; j < SV.size(); j++){
            if(SV.at(i)->gethocphi() < SV.at(j)->gethocphi()){
                SinhVien *t= SV.at(i);
                SV.at(i)=SV.at(j);
                SV.at(j)=t;
            }
        }
    }
    XuatDS();
	}
}

void QuanLySinhVien :: Maxhocphi()
{
    if(SV.size()==0){
		cout << "\n\n\t\t\t\t\t********** Danh sach rong **********" << endl;
	}
	else{
		SinhVien *max = SV.at(0);
    	for (int i = 1; i < SV.size(); i++){
        	if (SV.at(i)->gethocphi() > max->gethocphi())
            	max = SV.at(i);
    	}
    	cout << endl << "Sinh vien co hoc phi cao nhat: " << endl;
    	max->xuat();
    }
}

void QuanLySinhVien :: Minhocphi()
{
    if(SV.size()==0){
		cout << "\n\n\t\t\t\t\t********** Danh sach rong **********" << endl;
	}
	else{
		SinhVien *min = SV.at(0);
    	for (int i = 1; i < SV.size(); i++){
       	 	if (SV.at(i)->gethocphi() < min->gethocphi())
           	 	min = SV.at(i);
    	}
    	cout << endl << "Sinh vien co hoc phi thap nhat: " << endl;
    	min->xuat();
    }
}

void QuanLySinhVien::Tonghocphi(){
    float tong = 0;
    if(SV.size()==0){
		cout << "\n\n\t\t\t\t\t********** Danh sach rong **********" << endl;
	}
	else{
    	for(int i = 0; i < SV.size(); i++){
        	tong += SV.at(i)->gethocphi();
    	}
    	cout << endl << "Tong hoc phi cua sinh vien trong truong: "<<setprecision(2)<<fixed<<tong<<endl;
    }
}

int main(){
    QuanLySinhVien a;
  	int luachon;
    while(69)
    {
    	system("cls");	//xoa man hinh
    	printf("\t\t\t\t\t     %c%c   %c%c  %c%c%c%c  %c%c     %c  %c      %c\n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
		printf("\t\t\t\t\t    %c  %c %c %c  %c     %c %c    %c  %c      %c\n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
		printf("\t\t\t\t\t   %c   %c%c  %c  %c     %c  %c   %c  %c      %c\n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
		printf("\t\t\t\t\t  %c        %c  %c%c%c%c  %c   %c  %c  %c      %c\n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
		printf("\t\t\t\t\t %c         %c  %c     %c    %c %c  %c      %c\n", 219, 219, 219, 219, 219, 219, 219, 219);
		printf("\t\t\t\t\t%c          %c  %c%c%c%c  %c     %c%c   %c%c%c%c%c%c\n",219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
    	cout << "\n\t\t\t\t  1. Nhap danh sach sinh vien";
    	cout << "\n\t\t\t\t  2. Xuat danh sach sinh vien";
    	cout << "\n\t\t\t\t  3. Sap xep danh sach sinh vien theo hoc phi tang dan";
    	cout << "\n\t\t\t\t  4. Sap xep danh sach sinh vien theo hoc phi giam dan";
    	cout << "\n\t\t\t\t  5. In sinh vien co hoc phi cao nhat";
    	cout << "\n\t\t\t\t  6. In sinh vien co hoc phi thap nhat";
    	cout << "\n\t\t\t\t  7. Tim kiem sinh vien theo ten";
    	cout << "\n\t\t\t\t  8. Tong hoc phi cua sinh vien trong truong";
    	cout << "\n\t\t\t\t  0. Ket thuc";
    	cout << "\n\n\t\t\t\t\t  =========== END ============";
    	
    	cout << "\nNhap lua chon: ";
    	cin >> luachon;
    	if (luachon!=0 && luachon !=1 && luachon != 2 && luachon!=3 && luachon!=4 && luachon!=5 && luachon!=6 && luachon!=7 && luachon!=0)
		{
			cout << "\nLua chon khong hop le. Xin kiem tra lai!\n" << endl;
			system("pause");
		}
		else if (luachon == 1)
		{
			cout << "\n\n\t\t\t\t============ NHAP DANH SACH SINH VIEN ============" << endl;
			a.NhapDS();
			system("pause");
		}
		else if (luachon == 2)
		{
			cout << "\n\n\t\t\t\t============ DANH SACH SINH VIEN DA NHAP ============" << endl;
			a.XuatDS();
			system("pause");
		}
		else if (luachon == 3)
		{
			cout << "\n\n\t\t\t============ DANH SACH SINH VIEN DA SAP XEP THEO HOC PHI TANG DAN ============" << endl;
			a.SapXepTangDan();
			system("pause");
		}
		else if (luachon == 4)
		{
			cout << "\n\n\t\t\t============ DANH SACH SINH VIEN DA SAP XEP THEO HOC PHI GIAM DAN ============" << endl;
			a.SapXepGiamDan();
			system("pause");
		}
		else if (luachon == 5)
		{
			cout << "\n\n\t\t\t\t============ SINH VIEN CO HOC PHI CAO NHAT ============" << endl;
			a.Maxhocphi();
			system("pause");
		}
		else if (luachon == 6)
		{
			cout << "\n\n\t\t\t\t============ SINH VIEN CO HOC PHI THAP NHAT ============" << endl;
			a.Minhocphi();
			system("pause");
		}
		else if (luachon == 8)
		{
			cout << "\n\n\t\t\t\t=========== TONG HOC PHI CUA SINH VIEN TRONG TRUONG ============" << endl;
			a.Tonghocphi();
			system("pause");
		}
		else
		{
			break;
		}
	}
    system("pause");
    return 0;
}

