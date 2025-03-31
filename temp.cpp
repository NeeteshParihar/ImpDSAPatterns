
#include <iostream>

using namespace std ;


int main(){

	int price   ;
	int margin  ; 
	int rto     ; 

	cout << "price :"  ;
	cin >> price ;

	cout << "rto :" ;
	cin >> rto ;

	price += rto ;

	cout << "margin :" << " : " ;
	cin >> margin ;

	int profit = (margin*price)/100   ;
	int finalMargin = profit + price ;

	cout << " finalPrice : " << finalMargin << endl ;

	main() ;

	

}
