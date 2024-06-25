#include<bits/stdc++.h>
using namespace std;
int main(){
	int year,month,day;
	char c;
	cin>>year>>c>>month>>c>>day;
	day+=14;
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
		if(day>31){
			month++;
			day-=31;
		}
	}else if(month==4||month==6||month==9||month==11){
		if(day>30){
			month++;
			day-=30;
		}
	}else{
		if(year%4==0){
			if(day>29){
				month++;
				day-=29;
			}
		}else{
			if(day>28){
				month++;
				day-=28;
			}
		}
	}
	if(month>12){
		year++;
		month-=12;
	}
	cout<<year<<"-"<<month<<"-"<<day;
	return 0;
}
