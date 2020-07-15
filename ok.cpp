#include <iostream>
#include <cstring>

using namespace std;
int main(){
	char namadepan[15]; //array
	char *namabelakang; //pointer
	// tipedata *var
	
	strcpy(namadepan, "annisa"); //pengisian var array
	namabelakang = (char *) "puspitasari"; //pengisian var pointer
	
	cout<<"nama depan saya adalah "<<namadepan;
	cout<<" dan nama belakang saya yaitu "<<namabelakang;
	
	return 0;
}
