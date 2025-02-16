#include <iostream>
using namespace std;
class product{
  private:
    string product_name;
	int product_id;
	float product_price;
	
	public:
	void product_details(string name, int id, float price){
		product_name = name;
		product_id = id;
		product_price = price;
	}
	
	void displayinfo(){
	  cout<<"Product ID: "<<product_id;
	  cout<<"\nProduct Name: "<<product_name;
	  cout<<"\nProduct Price: INR"<<product_price;
	}
};
int main(){
	product product1;
	product1.product_details("grocery", 123, 450.5);
	
	product1.displayinfo();
	
	return 0;
}
/*
Product ID: 123
Product Name: grocery
Product Price: INR450.5
*/
	  