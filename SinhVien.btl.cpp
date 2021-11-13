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
	cout << "Nhap ma so sinh vien: ";
	cin.ignore(256, '\n');
	getline(cin, mssv);
	cout << "Nhap ho ten sinh vien: ";
	fflush(stdin);
	getline(cin, HoTen);
	cout<<"Nhap nam sinh: ";
	cin >> Nam;
	if(Nam < 0){
		do{
			cout << "\nDinh dang nam khong dung.";
			cout << "\nNhap lai nam: ";
			cin >> Nam;
		}while (Nam < 0);
	}
	if (Nam % 4 == 0 ){
		cout << "Nhap thang: ";
		cin >> Thang;
		if (Thang <= 0 || Thang >12){
			do{
				cout << "\nDinh dang thang khong dung.";
				cout << "\nNhap lai thang: ";
				cin >> Thang;
			}while (Thang <= 0 || Thang >12);
		}
		if(Thang < 8){
			if(Thang % 2 != 0){
				cout << "Nhap ngay: ";
				cin >> Ngay;
				if (Ngay <= 0 || Ngay >=32){
					do{
						cout << "\nDinh dang ngay khong dung.";
						cout << "\nNhap lai ngay: ";
						cin >> Ngay;	
					}while(Ngay <= 0 || Ngay >=32);
				}
			}
		}
		if(Thang < 8){
			if(Thang % 2 == 0 && Thang != 2){
				cout << "Nhap ngay: ";
				cin >> Ngay;
				if(Ngay <= 0 || Ngay >=31){
					do{
						cout << "\nDinh dang ngay khong dung.";
						cout << "\nNhap lai ngay: ";
						cin >> Ngay;
					}while(Ngay <= 0 || Ngay >=31);
				}
			}
		}
		if(Thang == 2){
			cout << "Nhap ngay: ";
			cin >> Ngay;
			if(Ngay <= 0 || Ngay >=30){
				do{
					cout << "\nDinh dang ngay khong dung.";
					cout << "\nNhap lai ngay: ";
					cin >> Ngay;
				}while(Ngay <= 0 || Ngay >=30);
			}
		}
		if(Thang > 8){
			if(Thang % 2 != 0){
				cout << "Nhap ngay: ";
				cin >> Ngay;
				if(Ngay <= 0 || Ngay >=31){
					do{
						cout << "\nDinh dang ngay khong dung.";
						cout << "\nNhap lai ngay: ";
						cin >> Ngay;
					}while(Ngay <= 0 || Ngay >=31);
				}
			}
		}
		if(Thang > 8){
			if(Thang % 2 == 0){
				cout << "Nhap ngay: ";
				cin >> Ngay;
				if(Ngay <= 0 || Ngay >=32){
					do{
						cout << "\nDinh dang ngay khong dung.";
						cout << "\nNhap lai ngay: ";
						cin >> Ngay;	
					}while(Ngay <= 0 || Ngay >=32);
				}
			}
		}
		if(Thang == 8){
			cout << "Nhap ngay: ";
				cin >> Ngay;
				if(Ngay <= 0 || Ngay >=32){
					cout << "\nDinh dang ngay khong dung.";
					cout << "\nNhap lai ngay: ";
					cin >> Ngay;	
				}while(Ngay <= 0 || Ngay >=32);
		}
	}
	if(Nam % 4 != 0){
		cout << "Nhap thang: ";
		cin >> Thang;
		if(Thang <= 0 || Thang >12){
			do{
				cout << "\nDinh dang thang khong dung.";
				cout << "\nNhap lai thang: ";
				cin >> Thang;
			}while(Thang <= 0 || Thang >12);
		}
		if(Thang < 8){
			if(Thang % 2 != 0){
				cout << "Nhap ngay: ";
				cin >> Ngay;
				if(Ngay <= 0 || Ngay >=32){
					do{
						cout << "\nDinh dang ngay khong dung.";
						cout << "\nNhap lai ngay: ";
						cin >> Ngay;	
					}while(Ngay <= 0 || Ngay >=32);
				}
			}
		}
		if(Thang < 8){
			if(Thang % 2 == 0 && Thang != 2){
				cout << "Nhap ngay: ";
				cin >> Ngay;
				if(Ngay <= 0 || Ngay >=31){
					do{
						cout << "\nDinh dang ngay khong dung.";
						cout << "\nNhap lai ngay: ";
						cin >> Ngay;
					}while(Ngay <= 0 || Ngay >=31);
				}
			}
		}
		if(Thang == 2){
			cout << "Nhap ngay: ";
			cin >> Ngay;
			if(Ngay <= 0 || Ngay >=29){
				do{
					cout << "\nDinh dang ngay khong dung.";
					cout << "\nNhap lai ngay: ";
					cin >> Ngay;
				}while(Ngay <= 0 || Ngay >=29);
			}
		}
		if(Thang > 8){
			if(Thang % 2 != 0){
				cout << "Nhap ngay: ";
				cin >> Ngay;
				if(Ngay <= 0 || Ngay >=31){
					do{
						cout << "\nDinh dang ngay khong dung.";
						cout << "\nNhap lai ngay: ";
						cin >> Ngay;
					}while(Ngay <= 0 || Ngay >=31);
				}
			}
		}
		if(Thang > 8){
			if(Thang % 2 == 0){
				cout << "Nhap ngay: ";
				cin >> Ngay;
				if(Ngay <= 0 || Ngay >=32){
					do{ 
						cout << "\nDinh dang ngay khong dung.";
						cout << "\nNhap lai ngay: ";
						cin >> Ngay;	
					}while(Ngay <= 0 || Ngay >=32);
				}
			}
		}
		if(Thang == 8){
			cout << "Nhap ngay: ";
				cin >> Ngay;
				if(Ngay <= 0 || Ngay >=32){
					do{
						cout << "\nDinh dang ngay khong dung.";
						cout << "\nNhap lai ngay: ";
						cin >> Ngay;	
					}while(Ngay <= 0 || Ngay >=32);
				}
		}
	}
	
	cout << "Nhap khoa: ";
	cin >> Khoa;
	cout << "Nhap dia chi sinh vien: ";
	fflush(stdin);
	getline(cin, DiaChi);
}

void SinhVien::Xuat()
{
	cout << "Ma so sinh vien: " << mssv << endl;
	cout << "Ho ten sinh vien: "<< HoTen << endl;
	cout << "Ngay/thang/nam sinh: "<< Ngay << "/" << Thang << "/" << Nam <<endl;
	cout << "Khoa: " << Khoa << endl;
	cout << "Dia chi : "<< DiaChi <<endl; 
}

float SinhVien::getHocPhi()
{
	return HocPhi;
}
string SinhVien::getTen(){
	return HoTen; 
} 
string SinhVien::getmssv(){
	return mssv; 
}
string SinhVien::getDiaChi(){
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
	cout << "Nhap so tin chi: ";
	cin >> SoTinChi;
}

void SinhVienKiThuat::Xuat()
{
	SinhVien::Xuat();
	cout << "So tin chi: " << SoTinChi << endl;
	this->TinhHocPhi();
	cout << "Hoc phi: " << HocPhi << " vnd"<< endl; 
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
	cout << "Nhap so tin chi: ";
	cin >> SoTinChi;
}

void SinhVienKinhTe::Xuat()
{
	SinhVien::Xuat();
	cout << "So tin chi: "<<SoTinChi<<endl;
	this->TinhHocPhi();
	cout << "Hoc phi: " << HocPhi << " vnd" << endl;
}

void SinhVienKinhTe::TinhHocPhi()
{
	this->HocPhi = this->SoTinChi*275200;
}

class QuanLySinhVien{
    private:
        vector<SinhVien *> SV;
    public:
        void NhapDS();
        void XuatDS();
        void SapXep();
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
        cout << "Nhap so luong sinh vien ky thuat: ";
        cin >> n;
        for (int i = 0; i < n; i++){
            sv = new SinhVienKiThuat;
            cout<<"Nhap sinh vien thu "<<i+1<<endl;
            sv->Nhap();
            SV.push_back(sv);
            cout<<endl;
        }
        cout << "Nhap so luong sinh vien kinh te: ";
        cin >> m;
        for (int i = 0; i < m; i++){
            sv = new SinhVienKinhTe;
            cout<<"Nhap sinh vien thu "<<i+1<<endl;
			sv->Nhap();
            SV.push_back(sv);
            cout << endl;
        }
}

void QuanLySinhVien :: XuatDS(){
	if(SV.size()==0){
		cout << "\n\n\t\t\t************ Danh sach rong ************" << endl;
	}
	else{
		for(int i = 0; i < this -> SV.size(); i++){
        	this->SV.at(i)->Xuat();
        	cout << endl;
		}
	}
}

void QuanLySinhVien :: SapXep(){
	if(SV.size()==0){
		cout << "\n\n\t\t\t************ Danh sach rong ************" << endl;
	}
	else{
		for (int i=0; i < SV.size()-1; i++){
        for (int j = i + 1; j < SV.size(); j++){
            if(SV.at(i)->getHocPhi() > SV.at(j)->getHocPhi()){
                SinhVien *t= SV.at(i);
                SV.at(i)=SV.at(j);
                SV.at(j)=t;
            }
        }
    }
    XuatDS();
	}
}

void QuanLySinhVien :: MaxHocPhi(){
    if(SV.size()==0){
		cout << "\n\t\t\t************ Danh sach rong ************" << endl;
	}
	else{
		SinhVien *max = SV.at(0);
    	for (int i = 1; i < SV.size(); i++){
        	if (SV.at(i)->getHocPhi() > max->getHocPhi())
            	max = SV.at(i);
    	}
    	cout << endl << "Sinh vien co hoc phi cao nhat: " << endl;
    	max->Xuat();
    }
}

void QuanLySinhVien :: MinHocPhi(){
    if(SV.size()==0){
		cout << "\n\t\t\t************ Danh sach rong ************" << endl;
	}
	else{
		SinhVien *min = SV.at(0);
    	for (int i = 1; i < SV.size(); i++){
       	 	if (SV.at(i)->getHocPhi() < min->getHocPhi())
           	 	min = SV.at(i);
    	}
    	cout << endl << "Sinh vien co hoc phi thap nhat: " << endl;
    	min->Xuat();
    }
}

void QuanLySinhVien::TongHocPhi(){
    float Tong = 0;
    if(SV.size()==0){
		cout << "\n\t\t\t************ Danh sach rong ************" << endl;
	}
	else{
    	for(int i = 0; i < SV.size(); i++){
        	Tong += SV.at(i)->getHocPhi();
    	}
    	cout << endl << "Tong hoc phi cua sinh vien trong truong: "<<setprecision(2)<<fixed<<Tong<<endl;
    }
}
void QuanLySinhVien::TimTen(){
		SinhVien *ten = SV.at(0);
			string timten;
            cout<<" nhap ten can tim:";
			fflush(stdin);
			getline(cin,timten);
			 
		if(SV.size()==0){
		cout << "\n\n\t\t\t************ Danh sach rong ************" << endl;
		}
		else{
			
            for(int i=0;i<SV.size();i++){
			
                if(SV.at(i)->getTen()==timten){	
				    ten = SV.at(i);	
                   
            	
		        }
            }
		cout<<"Thong tin ten sinh vien can tim la : "<<endl;		
        ten->Xuat();	
    	}
	}
void QuanLySinhVien::TimMaSoSinhVien(){
		SinhVien *maso = SV.at(0);
			string TimMaSo;
            cout<<" nhap ma so can tim:";
            fflush(stdin);
			getline(cin,TimMaSo);
			 
		if(SV.size()==0){
		cout << "\n\n\t\t\t************ Danh sach rong ************" << endl;
		}
		else{
			
            for(int i=0;i<SV.size();i++){
			
                if(SV.at(i)->getmssv()==TimMaSo){		
                   maso = SV.at(i);
            		
            			
		        }
            }
			cout<<"Thong tin ma so cua sinh vien can tim la "<<endl;		
        	maso->Xuat();
    	}
	}
void QuanLySinhVien::TimSinhVienTheoDiaChi(){
		SinhVien *diachi = SV.at(0);
			string TimDiaChi;
            cout<<" nhap dia chi can tim:";
            fflush(stdin);
			getline(cin,TimDiaChi);
			 
		if(SV.size()==0){
		cout << "\n\n\t\t\t************ Danh sach rong ************" << endl;
		}
		else{
			
            for(int i=0;i<SV.size();i++){
			
                if(SV.at(i)->getDiaChi()==TimDiaChi){		
                   diachi = SV.at(i);
            		
            			
		        }
            }
			cout<<"thong tin dia chi cua sinh vien can tim la "<<endl;		
        	diachi->Xuat();
    	}
	}	
int main(){
    QuanLySinhVien a;
    int luachon;
    while(69)
    {
    	system("cls");	//xoa man hinh	 
    	cout << "      ****   ****  *******  ***    **  **     **        "<<endl;
		cout << "      ** ** ** **  **       ****   **  **     **        "<<endl;
		cout << "      **  ***  **  *******  ** **  **  **     **        "<<endl;
		cout << "      **       **  **       **  ** **  **     **        "<<endl;
		cout << "      **       **  *******  **   ****  *********        "<<endl;			 	 	 		 
    	cout << "\n1. Nhap danh sach sinh vien";
    	cout << "\n2. Xuat danh sach sinh vien";
    	cout << "\n3. Sap xep danh sach sinh vien theo hoc phi";
    	cout << "\n4. In sinh vien co hoc phi cao nhat";
    	cout << "\n5. In sinh vien co hoc phi thap nhat";
    	cout << "\n6. Tong hoc phi cua sinh vien trong truong";
    	cout << "\n7. Tim sinh vien theo ten ";
    	cout << "\n8. Tim sinh vien theo ma so ";
    	cout << "\n9. Tim sinh vien theo dia chi  ";
    	cout << "\n0. Ket thuc";
    	cout << "\n\n\t\t ============ END =============";
    	
    	cout << "\nNhap lua chon: ";
    	cin >> luachon;
    	if (luachon!=0 && luachon !=1 && luachon != 2 && luachon!=3 && luachon!=4 && luachon!=5 && luachon!=6 && luachon!=7 && luachon!=8 && luachon!=9 && luachon!=0)
		{
			cout << "\nLua chon khong hop le. Xin kiem tra lai!" << endl;
			system("pause");
		}
		else if (luachon == 1)
		{
			cout << "\n\n\t\t============ NHAP DANH SACH SINH VIEN ============" << endl;
			a.NhapDS();
			system("pause");
		}
		else if (luachon == 2)
		{
			cout << "\n\n\t\t============ DANH SACH SINH VIEN DA NHAP ============" << endl;
			a.XuatDS();
			system("pause");
		}
		else if (luachon == 3)
		{
			cout << "\n\n\t\t============ DANH SACH SINH VIEN DA SAP XEP THEO HOC PHI ============" << endl;
			a.SapXep();
			system("pause");
		}
		else if (luachon == 4)
		{
			cout << "\n\n\t\t============ SINH VIEN CO HOC PHI CAO NHAT ============" << endl;
			a.MaxHocPhi();
			system("pause");
		}
		else if (luachon == 5)
		{
			cout << "\n\n\t\t============ SINH VIEN CO HOC PHI THAP NHAT ============" << endl;
			a.MinHocPhi();
			system("pause");
		}
		else if (luachon == 6)
		{
			cout << "\n\n\t\t============ TONG HOC PHI CUA SINH VIEN TRONG TRUONG ============" << endl;
			a.TongHocPhi();
			system("pause");
		}
		else if (luachon == 7)
		{
			cout << "\n\n\t\t============ TIM SINH VIEN THEO TEN  ============" << endl;
			a.TimTen();
			system("pause");
		}
		else if (luachon == 8)
		{
			cout << "\n\n\t\t============ TIM SINH VIEN THEO MA SO  ============" << endl;
			a.TimMaSoSinhVien();
			system("pause");
		}
		else if (luachon == 9)
		{
			cout << "\n\n\t\t============ TIM SINH VIEN THEO DIA CHI  ============" << endl;
			a.TimSinhVienTheoDiaChi();
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

