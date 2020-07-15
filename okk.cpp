//bikin tipedata sendiri
//jeniskelamin = //nilainya ada 2
//wanita atau pria
#include <iostream>
#include <cstring>

using namespace std;

enum class Jeniskelamin = { wanita, pria };

int main(){
	//struct juga tipedata bikinan
	struct siswa {
		char nama[12];
		char alamat[20];
		Jeniskelamin gender;
	}a;
	
	//harusnya pake siswa (tipe data e.x int) a;
	
	strcpy(a.nama, "annisa");
	strcpy(a.alamat, "jl.babakan");
	a.gender = wanita;
	
	cout<<"nama: "<<a.nama;
	cout<<"alamat: "<<a.alamat;
	cout<<"gender: "<<a.gender;
	
	return 0;
} 
