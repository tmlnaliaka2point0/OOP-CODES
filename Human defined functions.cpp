//C predifined functions
/*
 C predefined functions
 Author: Sophy Naliaka Wafula
 Reg No: BSE-05-0183?2024
 Date:20th January 2024.
 This Program entails Human Defined Functions
 */
 
 #include <iostream>
 #include <cmath>
 using namespace std;
 
 // function prototypes
 float addition(int x, int y){
	int sum;
	sum=x+y;
	return sum;
}

double simple_interest(float principle, float rate, float time){
float interest;
interest = principle*rate*time;
return interest;
}
 
 int main() {
 	int sum;
 	float interest;
sum = addition (5 , 10);
interest=simple_interest(1000.0,4.0,0.2);

cout<< "Sum: " <<sum<<endl;
cout<< "Simple Interest: " <<interest<<endl;

return 0;
} 






