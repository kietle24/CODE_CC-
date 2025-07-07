#include<bits/stdc++.h>
using namespace std ; 
struct mathang{
	string ma ; 
	string loai ; 
	string ten ; 
	int soluong ; 
	float dongia ; 
	string quatang ; 
	
};
void xuathang(mathang x) {
    cout << "\n" << x.ma << "\t" << x.loai << "\t" << x.ten << "\t" << x.soluong; 
    cout << "\t" << x.dongia << "\t" << x.quatang; 
}
int main (){
	mathang x[3]= {
	   {"MH01", "Com chay", "Arr", 1000, 10, "co"}, 
        {"MH02", "Banh trang cay", "BonBon", 500, 5, "khong"}, 
        {"MH03", "Banh tron", "BonBon", 600, 6, "co"}
         
	
}; 
cout << "\nDanh sach cac mat hang: " << endl; 
    for (int i = 0; i < 3; i++) 
    xuathang(x[i]); 
 cout << " \n danh sach cac mat hang thoa man dieu kien "<< endl ; 
 for (int i = 0 ; i < 3 ; i++)
 
 	xuathang(x[i]);  
 
 	
 


    return 0;
}
