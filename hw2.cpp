#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
#include<unistd.h>
#include"bmi.h"
using namespace std;


int main()
{
	float result,input1,input2;
	BMI family;
	ifstream inFile("file.in",ios::in);
	if(!inFile){
		cerr<<"Fail to open file"<<endl;
		exit(1);
		}
	
	 ofstream outFile ("file.out", ios::out);
	 outFile<<"";
	while(inFile>>input1>>input2){
		if(input1==0&&input2==0)break;
		family.setBMI(input1,input2);
		result=family.getBMI();
		family.getBmiCategory(result);
		}
	return 0;
}
