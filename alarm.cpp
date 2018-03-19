include <iostream>

#pragma comment(lib, "winmm.lib")
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(){
	
	int h,m,d,mm,hh,rm,rh,s,mo,y,dd,ye,mon;


	
	    SYSTEMTIME st, lt;
	    
	    GetSystemTime(&st);
	    GetLocalTime(&lt);
	
	    
	h=lt.wHour;
	m=lt.wMinute;
	
	
	string day;
	 
 	cout << "Enter the hh:";
 	cin >> hh;
 	cout << "Enter the mm:";
 	cin >> mm;
 	cout << "Enter date:dd/mm/yyyy:";

date:	
std::cin >> dd; // read the day
   if ( std::cin.get() != '/' ) // make sure there is a slash between DD and MM
   {
      std::cout << "expected /\n";
      goto date;
   }
   std::cin >> mo; // read the month
   if ( std::cin.get() != '/' ) // make sure there is a slash between MM and YYYY
   {
      std::cout << "expected /\n";
      goto date ;
   }
   std::cin >> y; // read the year
   std::cout << "input date: " << dd << "/" << mo << "/" << y << "\n";

	//HWND window;
//AllocConsole();
//window = FindWindowA("ConsoleWindowClass", NULL);
//ShowWindow(window,0);
 
 	
while (hh<25){
		
		GetLocalTime(&lt);	
		h=lt.wHour;
		m=lt.wMinute;
		s=lt.wSecond;
		d=lt.wDay;
		mon=lt.wMonth;
		ye=lt.wYear;
		
		Sleep(1000);
		system("cls");
		
		
		cout << h <<":"<<m <<":"<<s<< " "<<d<<"/"<<mon<<"/"<<ye;		
		
	if( (dd==d) && (mo==mon) && (y==ye) && (h==hh) && (m==mm)){
		
	

		cout << '\007';
		
		}
	

	}
	    
	  
	}
