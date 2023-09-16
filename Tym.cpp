
#include<stdio.h>
#include<dos.h>
#include<iostream>
using namespace std;
int main(){
	int e = 5;
	char c = '*';
	char r = ' ';
	for(int a = 1; a <= 5 ; a++){
		for(int v = 0; v < 10; v++)
			cout << r;
		cout << endl;
		// 1.
		for(int i = 1; i <= 4; i++){
			
			if( a == 1 && i == 1){
				c = r;
			}
			if (a != 1)
				c = '*';
			if( a == 5 )
				c = r;	
			if( a == 4 )
				c = r; 
			if(i == 1)
				for(int j = 1; j <= 5; j++){
					if (j % 2 == 0){
						cout <<	r;
						cout << r << c << r;
					}
				}
			else 
				for(int j = 1; j <= e;j++){
					if (i == 2)
						cout<< c << r;
					else{
						if(i == 3&&j == 1){
							cout << r << r;
							j+=2;
						}
						else 
							if(i == 4&&j == 1){
								cout<< r << r << r << r;
								j+=2;
								cout << c;
								break;
							}
						cout << c << r;
					} 
				}
					//2.3.4.5
					int e = 8;
					for(int o = 1;o <= 4; o++){
						if( a == 1&& o % 2 ==0){
							c = r ;
						} else c = '*';
						if( a == 5 && not(o - 2 ==0)){
							c = r;	
						}
						if(a ==4 && o % 4 ==0)
							c = r;
						if(i == 1){						
							for(int j = 1;j <= e;j++){
								cout <<  r;	
							}
						if(o == 1) e++;
				cout<< r<< c<< r<< r<< r<< c;
						}
			if(i == 2){
				for ( int j = 1; j <= 5; j++)
					cout << r;
				for(int d = 1; d <= 5;d++){
					cout << c << r;	
				}
				} 
				else 	if( i == 3 ){
						for ( int j = 1; j <= 9; j++)
							cout << r;	
						for(int d = 1; d <= 3;d++)
							cout << c << r;					
						
			}
				else 	if(i == 4){
					for ( int j = 1; j <= 14; j++)
						cout << r;	
						cout << c;	
					}	
				else 	if(i == 4){
					for ( int j = 1; j <= 14; j++)
						cout << r;	
						cout << c;	
					}
					}

					
			printf("\n");
		}
	}
	return 0;
}
