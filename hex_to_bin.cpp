#include<iostream>
#include<string.h>
using namespace std;
string hexa_to_binnary(string text){
	string binnary = "";
	int no = 0;
	for(int i = 0; i<text.length();i++){
		string tmp = "";
		if(text[i]>='0'&& text[i]<='9'){
			no = int(text[i])-48;
			while(no>0){
				tmp += char(no%2+48);
				no /= 2;
			}
			while(tmp.length()!=4){
				tmp += '0';
			}
			no = 0;
		} else {
			no = text[i]-'A'+10;
			while(no>0){
				tmp +=char(no%2+48);
				no /=2;
			}
		}
		for(int j = 3; j>=0; j--){
			binnary += tmp[j];
		}
	}
	return binnary;
}

int main(){
	string in = "";
	cout<<"enter hexa_decimal no:";
	cin>>in;
	cout<<"your answer in binnary is:"<<hexa_to_binnary(in)<<endl;
	return 0;
}
