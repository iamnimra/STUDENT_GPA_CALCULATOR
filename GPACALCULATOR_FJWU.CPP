#include<iostream.h>
#include<conio.h>
struct student
{
 char name[11];
 int rno,marks_pf,marks_cal,marks_pakst,marks_eng,marks_dis,marks_ict;
 float gpa;
};
void mainEntrance()
{
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
cout<<"  ллллллллллллл         ллллл    ллллл          ллллл    ллллл     ллллл      "<<endl;
cout<<"   ллл                   ллл      ллл            ллл      ллл       ллл         "<<endl;
cout<<"   ллллллллллл           ллл      ллл            ллл      ллл       ллл           "<<endl;
cout<<"   ллл                   ллл      ллл     лл     ллл      ллл       ллл           "<<endl;
cout<<"   ллл         ллл       ллл      ллл    лллл    ллл      ллл       ллл      "<<endl;
cout<<"   ллл         ллл      ллл       лллллл      лллллл      ллл       ллл                "<<endl;
cout<<"  ллллл          ллллллллл         ллллл      ллллл         ллллллллл                          "<<endl<<endl;
}
float gpacalc(int marks)
		 {
			float gpa;
		if (marks >= 80)
			gpa = 4.00;
		else if (marks >=77)
			gpa = 3.66;
		else if (marks >=74)
			gpa = 3.33;
		else if (marks >=70)
			gpa = 3.00;
		else if (marks >= 67)
			gpa = 2.66;
		else if (marks >=64)
			gpa = 2.33;
		else if (marks >=60)
			gpa = 2.00;
		else if (marks >=50)
			gpa = 1.50;	
		else 
			gpa = 0.00;
			return gpa;
		}
		float TotalGpa (float Gpa1,float Gpa2,float Gpa3,float Gpa4,float Gpa5,float Gpa6)
		{
			float sum;
			sum = (Gpa1*6)+(Gpa2*6)+(Gpa3*6)+(Gpa4*6)+(Gpa5*6)+(Gpa6*6);
			sum = sum / 36;
			return sum;
		}

void input(student*)
{
cout<<"Enter name:";
cin.get(name, 11);
cout<<"Enter roll no:";
cin>>p->rno;
cout<<"Enter marks of Programming Fundamentals:";
cin>>p->marks;
cout<<"Enter gpa:";
cin>>p->gpa;
}
void output(student*)
{
cout<<"Name:"<<m->name<<endl;
cout<<"Roll no:"<<m->rno<<endl;
cout<<"marks"<<m->marks<<endl;
cout<<"gpa:"<<m->gpa;
}
int main()
{
clrscr();
for(int i=0;i<=3;i++)
{
student s;
input(&s);
output(&s);
cout<<endl;
}
getch();
return 0;
}
