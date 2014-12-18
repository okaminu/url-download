#include <iostream>
#include <urlmon.h>
#include <string>
#include <sstream>
#pragma comment(lib, "urlmon.lib")
using namespace std;

string convertInt(int);
void main(){

int begin=1;
int end=3;
string extension=".gif";
string url_part;
string loc_part;
string zero2="00";
string zero1="0";
string kintam, number, url, loc;
cout<<"-----double zero Downloader LT v0.04----------"<<endl;
cout<<"by Dark_Coder"<<endl;
cout<<endl;

cout<<"Iveskite Adresa, pvz http://google.lt/"<<endl;
cin>>url_part;
cout<<"Iveskite Vieta diske, pvz C:\\crystalF\\"<<endl;
cin>>loc_part;
cout<<"Iveskite pletini, extension, pvz .gif"<<endl;
cin>>extension;
cout<<"Nuo kiek galima sukti skaiciu"<<endl;
cin>>begin;
cout<<"Iki kiek sukti skaiciu"<<endl;
cin>>end;
cout<<"Loading..."<<endl;
for(int i=begin; i<=end; i++){
	kintam=convertInt(i);
	if(i<10){
number=zero2+kintam;
	}
	if((i<100)&&(i>9)){
number=zero1+kintam;
	}
	if(i>=100){
number=kintam;
	}
url=url_part+number+extension;
loc=loc_part+number+extension;
HRESULT hr = URLDownloadToFile ( NULL, url.c_str(), loc.c_str(), 0, NULL );
cout<<number<<endl;
}

system("pause");

}

string convertInt(int number)
{
   stringstream ss;//create a stringstream
   ss << number;//add number to the stream
   return ss.str();//return a string with the contents of the stream
}