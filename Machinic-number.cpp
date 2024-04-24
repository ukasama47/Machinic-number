
//二通り作って計算時間の比較をしてみた。
#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <time.h>
using namespace std;

bool komachi(int &arg){
	int c = 0;	
	char a[9];
  for (int i = 0; i < 9; i++) {
    a[i] = (arg / (int)pow(10, i)) % 10;
	}
  for (int i = 0; i < 9; i++) { //文字検索
	  if (count (begin(a), end(a), i+1) == 1) {
		  c++;
	  }
	}
	return c == 9;
}

bool re_komachi(int &arg){
	int c = 0;	
	char a[9];
  for (int i = 0; i < 9; i++) {
    a[i] = (arg / (int)pow(10, i)) % 10;
	}
  for (int i = 0; i < 9; i++) { 
	  if (count(begin(a), end(a), i+1) != 1) {
		  return false;
			break;
	  } else {
			c++;
		}
	} 
  return c == 9;
}


int main() {
	int num;
	int max = sqrt(987654321);
  int min = sqrt(123456789); 
	clock_t start, end;
	double diff;

	//komachi
	cout << "komachi" << endl; 	
	cout << " 小町数   自乗する数" << endl; 
	start = clock();
  for (int sqrt = min; sqrt < max; sqrt++) {
	  num = (int)pow(sqrt, 2);
		if(komachi(num) == true) {
		  cout << num << "   " << sqrt << endl; 
		}
	}
	end = clock();
	diff = (double)(end-start)/CLOCKS_PER_SEC;
	cout << "計算時間" << diff << "秒" << endl << endl;
		
	
	//komachi改訂版
	cout << "komachi改訂版" << endl; 
	cout << " 小町数   自乗する数" << endl; 
	start = clock();
  for (int sqrt = min; sqrt < max; sqrt++) {
	  num = (int)pow(sqrt, 2);
		if(re_komachi(num) == true) {
		  cout << num << "   " << sqrt << endl; 
		}
	}
	end = clock();
	diff = (double)(end-start)/CLOCKS_PER_SEC;
	cout << "計算時間" << diff << "秒" << endl << endl;

	
	return 0;
}
