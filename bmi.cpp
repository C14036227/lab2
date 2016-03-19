#include"bmi.h"
void BMI::setBMI(float input1, float input2){
	 height = input1;
	 mass = input2;
}

float BMI::getBMI(){
	height = height/100;
	bmi = mass/height/height;
	return bmi;
}

void BMI::getBmiCategory(float result){
	ofstream outFile ("file.out", ios::app);
	if(!outFile){
		       cerr<<"Failure"<<endl;
			          exit(1);
					         }

	if(result<15){outFile<<result<<"  Very severely underweight"<<endl;}
	else if(result>=15&&result<16){outFile<<result<<"  Severely underweight"<<endl;}
	else if(result>=16&&result<18.5){outFile<<result<<"  Underweight"<<endl;}
	else if(result>=18.5&&result<25){outFile<<result<<"  Normal"<<endl;}
	else if(result>=25&&result<30){outFile<<result<<"  Overweight"<<endl;}
	else if(result>=30&&result<35){outFile<<result<<"  Obese Class I(Moderately obese)"<<endl;}
	else if(result>=35&&result<40){outFile<<result<<"  Obese Class II(Severely obese)"<<endl;}
	else if(result>=40){outFile<<result<<"  Obese Class III(Very severely obese)"<<endl;}
}

