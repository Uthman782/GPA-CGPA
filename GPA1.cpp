#include<iostream>
using namespace std;

class Student{
    private:
        int sub[6];
        int total;
        float GPA;
    public:
        Student();
        void calculate();
        void show();
};

int main(){
  Student obj;
  obj.calculate();
  obj.show(); 
return 0;
}

void check(int a){
	if(a>99 or a<1){
		cout<<"Invalid Marks "<<a<<endl;
		exit(0);
	}
	else{
		cout<<"Continue........."<<endl;
	}
}

float gpa(int a){
	float b;
	if(a>=85){
		b=4;
	}
	else{
	switch(a){
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
	}
	return b;
}
Student::Student(void){
    cout<<"Enter Marks of PF: ";
    cin>>sub[0];
    check(sub[0]);
    cout<<"Enter Marks of CA: ";
    cin>>sub[1];
    check(sub[1]);
    cout<<"Enter Marks of IS: ";
    cin>>sub[2];
    check(sub[2]);
    cout<<"Enter Marks of EN: ";
    cin>>sub[3];
    check(sub[3]);
    cout<<"Enter Marks of PH: ";
    cin>>sub[4];
    check(sub[4]);
    cout<<"Enter Marks of ICT: ";
    cin>>sub[5];
    check(sub[5]);
}

void Student:: calculate(){
	int credit_hours = 18;
    this->total= sub[0]
				+sub[1]
				+sub[2]
				+sub[3]
				+sub[4]
				+sub[5];
    this->GPA = gpa(sub[0])*4
				+gpa(sub[1])*3
				+gpa(sub[2])*2
				+gpa(sub[3])*3
				+gpa(sub[4])*3
				+gpa(sub[5])*3;
    this->GPA/=credit_hours;
}

void Student:: show(){
   	cout << ".....................STUDENTS MARKS................\n";
	cout<<"  PF   PH   IS   EN   CA   ICT  TM    GPA ";
    cout<<endl;
    for (int j = 0; j < 6; j++)//Showing Marks
        cout << "  " << sub[j] << " ";
        //showing calculations
    cout << "  " << this->total;
    cout << "   " << this->GPA;
    cout << endl;
}