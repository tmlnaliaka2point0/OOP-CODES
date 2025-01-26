//C predifined functions
/*
 C predefined functions
 Author:
 Reg No:
 Date:
 Version 1
 */
 
 #include <iostream>//cout (printf(), cin(scanf())
 #include <cmath>//sqrt(), cos(), log()
 using namespace std;
 
 int main(){
 float addition(int x,int y);
 double simple_interest(float principle, float rate, float time);
} 

//Function DeclarATION
float addition(int x, int y){
	int sum;
	sum=x+y;
	return sum;
	
}

double simple_interest(int principle, float rate, int time){
float interest;
interest = principle*rate*time;
return interest;
}





       