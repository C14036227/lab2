#include<iostream>
#include<string>
#include<cstdlib>
#include<fstream>
using namespace std;

class BMI{
	public:
		void setBMI(float input1, float input2);
		float getBMI();
		void getBmiCategory(float result);


	private:
	float height;
	float mass;
	float bmi;
};	
