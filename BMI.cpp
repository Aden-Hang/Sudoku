extern float BMI[6];

using namespace std;

void anolyze()
{
	ofstream test1("file.out.out",ios::trunc);
	int i;
	for(i=0;i<5;i++)
	{
		if(BMI[i]>=10 && BMI[i]<15)
		{
			ofstream test1("file.out.out",ios::app);
			test1<<fixed<<setprecision(2)<<BMI[i]<<"  "<<"Very severely underweight"<<endl;
		}
		if(BMI[i]>=15 && BMI[i]<16)
		{
			ofstream test1("file.out.out",ios::app);
			test1<<fixed<<setprecision(2)<<BMI[i]<<"  "<<"Severely underweight"<<endl;
		}
		if(BMI[i]>=16 && BMI[i]<18.5)
		{
			ofstream test1("file.out.out",ios::app);
			test1<<fixed<<setprecision(2)<<BMI[i]<<"  "<<"Underweight"<<endl;
		}
		if(BMI[i]>=18.5 && BMI[i]<25)
		{
			ofstream test1("file.out.out",ios::app);
			test1<<fixed<<setprecision(2)<<BMI[i]<<"  "<<"Normal"<<endl;
		}
		if(BMI[i]>=25 && BMI[i]<30)
		{
			ofstream test1("file.out.out",ios::app);
			test1<<fixed<<setprecision(2)<<BMI[i]<<"  "<<"Overweight"<<endl;
		}
		if(BMI[i]>=30 && BMI[i]<35)
		{
			ofstream test1("file.out.out",ios::app);
			test1<<fixed<<setprecision(2)<<BMI[i]<<"  "<<"Obese Class I(Moderately obese)"<<endl;
		}
		if(BMI[i]>=35 && BMI[i]<40)
		{
			ofstream test1("file.out.out",ios::app);
			test1<<fixed<<setprecision(2)<<BMI[i]<<"  "<<"Obese Class II(Severely obese)"<<endl;
		}
		if(BMI[i]>=40)
		{
			ofstream test1("file.out.out",ios::app);
			test1<<fixed<<setprecision(2)<<BMI[i]<<"  "<<"Obese Class III(Very severely obese)"<<endl;
		}
	}	
}
