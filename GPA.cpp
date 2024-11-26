#include<iostream>
using namespace std;

void check(int a) {
	if(a>100 or a<1) {
		cout<<"Invalid Marks "<<a<<endl;
		exit(0);
	} else {
		cout<<"Continue........."<<endl;
	}
}

float gpa(int a) {
	float b;
	if(a>=85)
		b=4.0;
	else if(a<50)
		b=0.0;
	else
		switch(a) {
			case 84:
				b= 3.9;
				break;
			case 83:
				b= 3.8;
				break;
			case 82:
				b= 3.7;
				break;
			case 81:
				b= 3.6;
				break;
			case 80:
				b= 3.5;
				break;
			case 79:case 78:
				b= 3.4;
				break;
			case 77:case 76:
				b= 3.3;
				break;
			case 75:case 74:
				b= 3.2;
				break;
			case 73:
				b= 3.1;
				break;
			case 72:
				b= 3.0;
				break;
			case 71:
				b= 2.9;
				break;
			case 70:
				b= 2.8;
				break;
			case 69:
				b= 2.7;
				break;
			case 68:
				b= 2.6;
				break;
			case 67:case 66:
				b= 2.5;
				break;
			case 65:case 64:
				b= 2.4;
				break;
			case 63:
				b= 2.3;
				break;
			case 62:
				b= 2.2;
				break;
			case 61:
				b= 2.1;
				break;
			case 60:
				b= 2.0;
				break;
			case 59:
				b= 1.9;
				break;
			case 58:
				b= 1.8;
				break;
			case 57:
				b= 1.7;
				break;
			case 56:
				b= 1.6;
				break;
			case 55:
				b= 1.5;
				break;
			case 54:
				b= 1.4;
				break;
			case 53:
				b= 1.3;
				break;
			case 52:
				b= 1.2;
				break;
			case 51:
				b= 1.1;
				break;
			case 50:
				b= 1.0;
				break;
			defualt:
				b=0.0;
		}
	return b;
}

class Semester_1 {
	private:
		int sub[6];
	protected:
		float GPA1;
		int total1;
	public:
		string sub_name="PFCAISENPHIC";
		Semester_1() {
			cout<<"Enter Marks for first semester:--v"<<endl;
			for(int j, i=j=0; i<6; i++) {
				cout<<"Enter Marks of "<<sub_name[j++]<<sub_name[j++]<<" :";
				cin>>this->sub[i];
				check(this->sub[i]);
			}
		}
		void calcul1() {
			int credit_hours = 18;
			this->total1= sub[0]
			              +sub[1]
			              +sub[2]
			              +sub[3]
			              +sub[4]
			              +sub[5];
			this->GPA1 = gpa(sub[0])*4
			             +gpa(sub[1])*3
			             +gpa(sub[2])*2
			             +gpa(sub[3])*3
			             +gpa(sub[4])*3
			             +gpa(sub[5])*3;
			this->GPA1/=credit_hours;

		}
		void show1() {
			cout << "...................STUDENTS MARKS SEM 1..............\n";
			for(int i=0; i<12;)
				cout<<"  "<<sub_name[i++]<<sub_name[i++]<<" ";
			cout<<"  TM    GPA "<<endl;
			for (int j = 0; j < 6; j++)//Showing Marks
				cout << "  " << sub[j] << " ";
			//showing calculations
			cout << "  " << this->total1;
			cout << "   " << this->GPA1;
			cout << endl;
		}
};

class Semester_2 {
	private:
		int sub[6];
	protected:
		float GPA2;
		int total2;
	public:
		string sub_name="OPDSPKENSTAC";
		Semester_2() {
			cout<<"Enter Marks for second semester:--v"<<endl;
			for(int j, i=j=0; i<6; i++) {
				cout<<"Enter Marks of "<<sub_name[j++]<<sub_name[j++]<<" :";
				cin>>this->sub[i];
			}
		}
		void calcul2() {
			int credit_hours = 18;
			this->total2= sub[0]
			              +sub[1]
			              +sub[2]
			              +sub[3]
			              +sub[4]
			              +sub[5];
			this->GPA2 = gpa(sub[0])*4
			             +gpa(sub[1])*3
			             +gpa(sub[2])*2
			             +gpa(sub[3])*3
			             +gpa(sub[4])*3
			             +gpa(sub[5])*3;
			this->GPA2/=credit_hours;

		}
		void show2() {
			cout << "...................STUDENTS MARKS SEM 2..............\n";
			for(int i=0; i<12;)
				cout<<"  "<<sub_name[i++]<<sub_name[i++]<<" ";
			cout<<"  TM    GPA "<<endl;
			for (int j = 0; j < 6; j++)//Showing Marks
				cout << "  " << sub[j] << " ";
			//showing calculations
			cout << "  " << this->total2;
			cout << "   " << this->GPA2;
			cout << endl;
		}
};
class Semester:public Semester_1,public Semester_2 {
	private:
		int Ctotal;
		float CGPA;
	public:
		void calcul3() {
			this->Ctotal=this->total1+this->total2;
			this->CGPA=(this->GPA1+this->GPA2)/2;
		}
		void show3() {
			cout << "...................STUDENTS MARKS Full...............\n";
			cout<<" CTM   CGPA "<<endl;
			cout<<" "<<this->Ctotal;
			cout<<"  "<< this->CGPA;
			cout<< endl;
		}
};
int main() {
	Semester stu;
	stu.calcul1();
	stu.calcul2();
	stu.calcul3();
	stu.show1();
	stu.show2();
	stu.show3();
	int just;
	cin>>just;
	return 0;
}