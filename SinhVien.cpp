#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class SinhVien
{
	protected:
		string mssv;
		string HoTen;
		int Ngay, Thang, Nam;
		int Khoa;
		string DiaChi;
		long long HocPhi;
	public:
		SinhVien();
		~SinhVien();
		virtual void Nhap();
		virtual void Xuat();
		virtual void TinhHocPhi()=0;
		float getHocPhi();
		string getTen();
		string getmssv(); 
		string getDiaChi(); 
};
SinhVien::SinhVien()
{
} 
SinhVien::~SinhVien()
{
} 
void SinhVien::Nhap()
{
	cout << "\t\t\t\tNhap ma so sinh vien: ";
	cin.ignore(256, '\n');
	getline(cin, mssv);
	cout << "\t\t\t\tNhap ho ten sinh vien: ";
	fflush(stdin);
	getline(cin, HoTen);
	cout<<"\t\t\t\tNhap nam sinh: ";
	cin >> Nam;
	if(Nam < 0){
		do
		{
			cout << "\n\t\t\t\tDinh dang nam khong dung.";
			cout << "\n\t\t\t\tNhap lai nam: ";
			cin >> Nam;
		}
		while (Nam < 0);
	}
	if (Nam % 4 == 0 )
	{
		cout << "Nhap thang: ";
		cin >> Thang;
		if (Thang <= 0 || Thang >12)
		{
			do
			{
				cout << "\n\t\t\t\tDinh dang thang khong dung.";
				cout << "\n\t\t\t\tNhap lai thang: ";
				cin >> Thang;
			}
			while (Thang <= 0 || Thang >12);
		}
		if(Thang < 8)
		{
			if(Thang % 2 != 0)
			{
				cout << "Nhap ngay: ";
				cin >> Ngay;
				if (Ngay <= 0 || Ngay >=32)
				{
					do
					{
						cout << "\n\t\t\t\tDinh dang ngay khong dung.";
						cout << "\n\t\t\t\tNhap lai ngay: ";
						cin >> Ngay;	
					}
					while(Ngay <= 0 || Ngay >=32);
				}
			}
		}
		if(Thang < 8)
		{
			if(Thang % 2 == 0 && Thang != 2)
			{
				cout << "Nhap ngay: ";
				cin >> Ngay;
				if(Ngay <= 0 || Ngay >=31)
				{
					do
					{
						cout << "\n\t\t\t\tDinh dang ngay khong dung.";
						cout << "\n\t\t\t\tNhap lai ngay: ";
						cin >> Ngay;
					}
					while(Ngay <= 0 || Ngay >=31);
				}
			}
		}
		if(Thang == 2)
		{
			cout << "\t\t\t\tNhap ngay: ";
			cin >> Ngay;
			if(Ngay <= 0 || Ngay >=30)
			{
				do
				{
					cout << "\n\t\t\t\tDinh dang ngay khong dung.";
					cout << "\n\t\t\t\tNhap lai ngay: ";
					cin >> Ngay;
				}
				while(Ngay <= 0 || Ngay >=30);
			}
		}
		if(Thang > 8)
		{
			if(Thang % 2 != 0)
			{
				cout << "\t\t\t\tNhap ngay: ";
				cin >> Ngay;
				if(Ngay <= 0 || Ngay >=31)
				{
					do
					{
						cout << "\n\t\t\t\tDinh dang ngay khong dung.";
						cout << "\n\t\t\t\tNhap lai ngay: ";
						cin >> Ngay;
					}
					while(Ngay <= 0 || Ngay >=31);
				}
			}
		}
		if(Thang > 8)
		{
			if(Thang % 2 == 0)
			{
				cout << "\t\t\t\tNhap ngay: ";
				cin >> Ngay;
				if(Ngay <= 0 || Ngay >=32)
				{
					do
					{
						cout << "\n\t\t\t\tDinh dang ngay khong dung.";
						cout << "\n\t\t\t\tNhap lai ngay: ";
						cin >> Ngay;	
					}
					while(Ngay <= 0 || Ngay >=32);
				}
			}
		}
		if(Thang == 8)
		{
			cout << "\t\t\t\tNhap ngay: ";
				cin >> Ngay;
				if(Ngay <= 0 || Ngay >=32)
				{
					cout << "\n\t\t\t\tDinh dang ngay khong dung.";
					cout << "\n\t\t\t\tNhap lai ngay: ";
					cin >> Ngay;	
				}
				while(Ngay <= 0 || Ngay >=32);
		}
	}
	if(Nam % 4 != 0)
	{
		cout << "\t\t\t\tNhap thang: ";
		cin >> Thang;
		if(Thang <= 0 || Thang >12)
		{
			do
			{
				cout << "\n\t\t\t\tDinh dang thang khong dung.";
				cout << "\n\t\t\t\tNhap lai thang: ";
				cin >> Thang;
			}while(Thang <= 0 || Thang >12);
		}
		if(Thang < 8)
		{
			if(Thang % 2 != 0){
				cout << "\t\t\t\tNhap ngay: ";
				cin >> Ngay;
				if(Ngay <= 0 || Ngay >=32)
				{
					do
					{
						cout << "\n\t\t\t\tDinh dang ngay khong dung.";
						cout << "\n\t\t\t\tNhap lai ngay: ";
						cin >> Ngay;	
					}while(Ngay <= 0 || Ngay >=32);
				}
			}
		}
		if(Thang < 8)
		{
			if(Thang % 2 == 0 && Thang != 2)
			{
				cout << "\t\t\t\tNhap ngay: ";
				cin >> Ngay;
				if(Ngay <= 0 || Ngay >=31)
				{
					do
					{
						cout << "\n\t\t\t\tDinh dang ngay khong dung.";
						cout << "\n\t\t\t\tNhap lai ngay: ";
						cin >> Ngay;
					}
					while(Ngay <= 0 || Ngay >=31);
				}
			}
		}
		if(Thang == 2)
		{
			cout << "\t\t\t\tNhap ngay: ";
			cin >> Ngay;
			if(Ngay <= 0 || Ngay >=29)
			{
				do
				{
					cout << "\n\t\t\t\tDinh dang ngay khong dung.";
					cout << "\n\t\t\t\tNhap lai ngay: ";
					cin >> Ngay;
				}
				while(Ngay <= 0 || Ngay >=29);
			}
		}
		if(Thang > 8)
		{
			if(Thang % 2 != 0)
			{
				cout << "\t\t\t\tNhap ngay: ";
				cin >> Ngay;
				if(Ngay <= 0 || Ngay >=31)
				{
					do{
						cout << "\n\t\t\t\tDinh dang ngay khong dung.";
						cout << "\n\t\t\t\tNhap lai ngay: ";
						cin >> Ngay;
					}
					while(Ngay <= 0 || Ngay >=31);
				}
			}
		}
		if(Thang > 8)
		{
			if(Thang % 2 == 0)
			{
				cout << "\t\t\t\tNhap ngay: ";
				cin >> Ngay;
				if(Ngay <= 0 || Ngay >=32)
				{
					do{ 
						cout << "\n\t\t\t\tDinh dang ngay khong dung.";
						cout << "\n\t\t\t\tNhap lai ngay: ";
						cin >> Ngay;	
					}
					while(Ngay <= 0 || Ngay >=32);
				}
			}
		}
		if(Thang == 8)
		{
			cout << "\t\t\t\tNhap ngay: ";
				cin >> Ngay;
				if(Ngay <= 0 || Ngay >=32)
				{
					do
					{
						cout << "\n\t\t\t\tDinh dang ngay khong dung.";
						cout << "\n\t\t\t\tNhap lai ngay: ";
						cin >> Ngay;	
					}
					while(Ngay <= 0 || Ngay >=32);
				}
		}
	}
	cout << "\t\t\t\tNhap khoa: ";
	cin >> Khoa;
	cout << "\t\t\t\tNhap dia chi sinh vien: ";
	fflush(stdin);
	getline(cin, DiaChi);
}

void SinhVien::Xuat()
{
	cout << "\n\t\t\t\tMa so sinh vien: " << mssv << endl;
	cout << "\t\t\t\tHo ten sinh vien: "<< HoTen << endl;
	cout << "\t\t\t\tNgay/thang/nam sinh: "<< Ngay << "/" << Thang << "/" << Nam <<endl;
	cout << "\t\t\t\tKhoa: " << Khoa << endl;
	cout << "\t\t\t\tDia chi : "<< DiaChi <<endl; 
}

float SinhVien::getHocPhi()
{
	return HocPhi;
}
string SinhVien::getTen()
{
	return HoTen; 
} 
string SinhVien::getmssv()
{
	return mssv; 
}
string SinhVien::getDiaChi()
{
	return DiaChi; 
} 
//tao class con SinhVienKiThuat ke thua class cha SinhVien
class SinhVienKiThuat : public SinhVien
{
	private:
		int SoTinChi;
	public:
		SinhVienKiThuat();
		~SinhVienKiThuat();
		void Nhap();
		void Xuat();
		void TinhHocPhi();
};
SinhVienKiThuat::SinhVienKiThuat():SinhVien()
{
	SoTinChi=0; 
} 
SinhVienKiThuat::~SinhVienKiThuat()
{
}
void SinhVienKiThuat::Nhap()
{
	SinhVien::Nhap();
	cout << "\t\t\t\tNhap so tin chi: ";
	cin >> SoTinChi;
}

void SinhVienKiThuat::Xuat()
{
	SinhVien::Xuat();
	cout << "\t\t\t\tSo tin chi: " << SoTinChi << endl;
	this->TinhHocPhi();
	cout << "\t\t\t\tHoc phi: " << HocPhi << " vnd"<< endl; 
}

void SinhVienKiThuat::TinhHocPhi()
{
	this->HocPhi = this->SoTinChi*330400;
}

class SinhVienKinhTe : public SinhVien
{	
	private:
		int SoTinChi;
	public:
		SinhVienKinhTe();
		~SinhVienKinhTe();
		void Nhap();
		void Xuat();
		void TinhHocPhi();
};
SinhVienKinhTe::SinhVienKinhTe():SinhVien()
{
	SoTinChi=0; 
} 
SinhVienKinhTe::~SinhVienKinhTe()
{
}
void SinhVienKinhTe::Nhap()
{
	SinhVien::Nhap();
	cout << "\t\t\t\tNhap so tin chi: ";
	cin >> SoTinChi;
}

void SinhVienKinhTe::Xuat()
{
	SinhVien::Xuat();
	cout << "\t\t\t\tSo tin chi: "<<SoTinChi<<endl;
	this->TinhHocPhi();
	cout << "\t\t\t\tHoc phi: " << HocPhi << " vnd" << endl;
}

void SinhVienKinhTe::TinhHocPhi()
{
	this->HocPhi = this->SoTinChi*275200;
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
        void MaxHocPhi();
        void MinHocPhi();
        void TongHocPhi();
        void TimTen();
		void TimMaSoSinhVien();
		void TimSinhVienTheoDiaChi(); 
};

void QuanLySinhVien :: NhapDS()
{
	SinhVien *sv;
        int n, m;
        cout << "\n\t\t\t\tNhap so luong sinh vien ky thuat: ";
        cin >> n;
        for (int i = 0; i < n; i++)
		{
            sv = new SinhVienKiThuat;
            cout<<"\n\t\t\t\tNhap sinh vien thu "<<i+1<<endl;
            sv->Nhap();
            SV.push_back(sv);
            cout<<endl;
        }
        cout << "\t\t\t\tNhap so luong sinh vien kinh te: ";
        cin >> m;
        for (int i = 0; i < m; i++)
		{
            sv = new SinhVienKinhTe;
            cout << "\n\t\t\t\tNhap sinh vien thu "<<i+1<<endl;
			sv->Nhap();
            SV.push_back(sv);
            cout << endl;
        }
}

void QuanLySinhVien :: XuatDS()
{
	if(SV.size()==0)
	{
		cout << "\n\t\t\t\t\t********** Danh sach rong **********" << endl;
	}
	else
	{
		for(int i = 0; i < this -> SV.size(); i++)
		{
        	this->SV.at(i)->Xuat();
        	cout << endl;
		}
	}
}

void QuanLySinhVien :: SapXepTangDan()
{
	if(SV.size()==0){
		cout << "\n\t\t\t\t\t********** Danh sach rong *********" << endl;
	}
	else
	{
		for (int i=0; i < SV.size()-1; i++)
		{
        for (int j = i + 1; j < SV.size(); j++)
		{
            if(SV.at(i)->getHocPhi() > SV.at(j)->getHocPhi())
			{
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
	if(SV.size()==0)
	{
		cout << "\n\t\t\t\t\t********** Danh sach rong **********" << endl;
	}
	else
	{
		for (int i=0; i < SV.size()-1; i++)
		{
        for (int j = i + 1; j < SV.size(); j++)
		{
            if(SV.at(i)->getHocPhi() < SV.at(j)->getHocPhi())
			{
                SinhVien *t= SV.at(i);
                SV.at(i)=SV.at(j);
                SV.at(j)=t;
            }
        }
    }
    XuatDS();
	}
}

void QuanLySinhVien :: MaxHocPhi()
{
    if(SV.size()==0)
	{
		cout << "\n\t\t\t\t\t********** Danh sach rong **********" << endl;
	}
	else{
		SinhVien *max = SV.at(0);
    	for (int i = 1; i < SV.size(); i++)
		{
        	if (SV.at(i)->getHocPhi() > max->getHocPhi())
            	max = SV.at(i);
    	}
    	max->Xuat();
    }
}

void QuanLySinhVien :: MinHocPhi()
{
    if(SV.size()==0)
	{
		cout << "\n\t\t\t\t\t********** Danh sach rong **********" << endl;
	}
	else
	{
		SinhVien *min = SV.at(0);
    	for (int i = 1; i < SV.size(); i++)
		{
       	 	if (SV.at(i)->getHocPhi() < min->getHocPhi())
           	 	min = SV.at(i);
    	}
    	min->Xuat();
    }
}

void QuanLySinhVien::TongHocPhi()
{
    float Tong = 0;
    if(SV.size()==0){
		cout << "\n\t\t\t\t\t******** Danh sach rong ********" << endl;
	}
	else
	{
    	for(int i = 0; i < SV.size(); i++)
		{
        	Tong += SV.at(i)->getHocPhi();
    	}
    	cout << endl << "\n\t\t\t\tTong hoc phi cua sinh vien trong truong: "<<setprecision(2)<<fixed<<Tong<<endl;
    }
}
void QuanLySinhVien::TimTen()
{
	if(SV.size() == 0)
	{
		cout << "\n\t\t\t\t\t******** Danh sach rong ********" << endl;
	}
	else
	{
		SinhVien *ten = SV.at(0);
		string timten;
        cout << "\n\t\t\t\tNhap ten can tim:";
		fflush(stdin);
		getline(cin, timten);
        for(int i=0; i<SV.size(); i++)
		{
            if(SV.at(i)->getTen() == timten)
			{	
				ten = SV.at(i);	
		    }
        }
	cout << "\n\n\t\t\t\t\tTHONG TIN TEN SINH VIEN CAN TIM"<<endl;		
    ten->Xuat();	
    }
}
void QuanLySinhVien::TimMaSoSinhVien()
{
	if(SV.size() == 0)
	{
		cout << "\n\t\t\t\t\t******** Danh sach rong ********" << endl;
	}
	else
	{
		SinhVien *maso = SV.at(0);
		string TimMaSo;
        cout << "\n\t\t\t\tNhap ma so sinh vien can tim:";
        fflush(stdin);
		getline(cin, TimMaSo);	 
       	for(int i=0; i<SV.size(); i++)
		{
            if(SV.at(i)->getmssv() == TimMaSo)
			{		
                maso = SV.at(i);		
		    }
        }
	cout<<"\n\n\t\t\t\t\tTHONG TIN MA SO SINH VIEN CAN TIM"<<endl;		
    maso->Xuat();
    }
}

void QuanLySinhVien::TimSinhVienTheoDiaChi()
{
	if(SV.size()==0)
	{
		cout << "\n\t\t\t\t\t******** Danh sach rong ********" << endl;
	}
	else
	{
		SinhVien *diachi = SV.at(0);
		string TimDiaChi;
        cout << "\n\t\t\t\tNhap dia chi can tim:";
        fflush(stdin);
		getline(cin, TimDiaChi);	 
		for(int i=0; i<SV.size(); i++)
		{
            if(SV.at(i)->getDiaChi() == TimDiaChi)
			{		
                diachi = SV.at(i);
		    }
        }
	cout << "\n\n\t\t\t\t\tTHONG TIN DIA CHI CUA SINH VIEN CAN TIM" << endl;		
    diachi->Xuat();
    }
}	
int main()
{
    QuanLySinhVien a;
    int luachon;
    while(69)
    {
    	system("cls");	//xoa man hinh	 
    	cout << "\t\t\t\t      ****   ****  *******  ***    **  **     **        "<<endl;
		cout << "\t\t\t\t      ** ** ** **  **       ****   **  **     **        "<<endl;
		cout << "\t\t\t\t      **  ***  **  *******  ** **  **  **     **        "<<endl;
		cout << "\t\t\t\t      **       **  **       **  ** **  **     **        "<<endl;
		cout << "\t\t\t\t      **       **  *******  **   ****  *********        "<<endl;			 	 	 		 
    	cout << "\t\t\t\t1. Nhap danh sach sinh vien";
    	cout << "\n\t\t\t\t2. In danh sach sinh vien";
    	cout << "\n\t\t\t\t3. Sap xep danh sach sinh vien theo hoc phi tang dan";
    	cout << "\n\t\t\t\t4. Sap xep danh sach sinh vien theo hoc phi giam dan";
    	cout << "\n\t\t\t\t5. In sinh vien co hoc phi cao nhat";
    	cout << "\n\t\t\t\t6. In sinh vien co hoc phi thap nhat";
    	cout << "\n\t\t\t\t7. Tong hoc phi cua sinh vien trong truong";
    	cout << "\n\t\t\t\t8. Tim kiem sinh vien";
    	cout << "\n\t\t\t\t0. Ket thuc";
    	cout << "\n\t\t\t\n\n\t\t\t\t\t ============ END =============";
    	cout << "\n\n\t\t\t\tNhap lua chon: ";
    	cin >> luachon;
    	if (luachon!=0 && luachon !=1 && luachon != 2 && luachon!=3 && luachon!=4 && luachon!=5 && luachon!=6 && luachon!=7 && luachon!=8 && luachon!=0)
		{
			cout << "\nLua chon khong hop le. Xin kiem tra lai!" << endl;
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
			a.MaxHocPhi();
			system("pause");
		}
		else if (luachon == 6)
		{
			cout << "\n\n\t\t\t\t============ SINH VIEN CO HOC PHI THAP NHAT ============" << endl;
			a.MinHocPhi();
			system("pause");
		}
		else if (luachon == 7)
		{
			cout << "\n\n\t\t\t============ TONG HOC PHI CUA SINH VIEN TRONG TRUONG ============" << endl;
			a.TongHocPhi();
			system("pause");
		}
		else if (luachon == 8)
		{
			int luachon1;
			system("cls");
			cout << "\n\n\t\t\t\t============ TIM KIEM SINH VIEN  ============" << endl;
			cout << "\n\t\t\t\t1. Tim kiem sinh vien theo ten";
    		cout << "\n\t\t\t\t2. Tim kiem sinh vien theo ma so sinh vien";
    		cout << "\n\t\t\t\t3. Tim kiem sinh vien theo dia chi";
    		cout << "\n\t\t\t\t0. Quay lai";
    		cout << "\n\n\t\t\t\tNhap lua chon: ";
    		cin >> luachon1;
			if (luachon1 != 0 && luachon1 !=1 && luachon1 != 2 && luachon1 != 3)
			{
				cout << "\nLua chon khong hop le. Xin kiem tra lai!" << endl;
				system("pause");
			}
			else if (luachon1 == 1)
			{
				cout << "\n\n\t\t\t\t============ TIM SINH VIEN THEO TEN  ============" << endl;
				a.TimTen();
				system("pause");
			}
			else if (luachon1 == 2)
			{
				cout << "\n\n\t\t\t\t============ TIM SINH VIEN THEO MA SO  ============" << endl;
				a.TimMaSoSinhVien();
				system("pause");
			}
			else if (luachon1 == 3)
			{
				cout << "\n\n\t\t\t\t============ TIM SINH VIEN THEO DIA CHI  ============" << endl;
				a.TimSinhVienTheoDiaChi();
				system("pause");
			}
		}
		else
		{
			break;
		}
	}
    system("pause");
    return 0;
}

