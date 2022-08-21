
//Copyright © 2022, Umar Habib, All rights reserved.

#include<iostream>
#include<conio.h>
#include<fstream>
struct student
{
	char name[30];
	int roll_no;
	int mark;
};
using namespace std;
int main()
{
	system("color 7");
	int n;
	student st1;
	b_menu:
	b_save:
	show_b_m:
	del_data:
	system("color 7");
	cout<<" \n\n\t\t\tPress 1 for Enter Data....."<<endl;
	cout<<" \n\n\t\t\tPress 2 for Show Data....."<<endl;
	cout<<" \n\n\t\t\tPress 3 for Delete Data....."<<endl;
	n=getch();
	if(n==49)
	{
		ofstream file1(" Name file.txt", ios::out);
		cout<<" \nPlease enter name =";
		gets(st1.name);
		file1<<st1.name;
		ofstream file2(" Roll No file.txt", ios::out );
		cout<<" \nPlease enter Roll No =";
		cin>>st1.roll_no;
		file2<<st1.roll_no;
		ofstream mark1(" Marks 1 file.txt", ios::out );
		cout<<"\n Enter Book 1 Marks = ";
		cin>>st1.mark;
		mark1<<st1.mark;
		ofstream mark2(" Marks 2 file.txt", ios::out );
		cout<<"\n Enter Book 2 Marks = ";
		cin>>st1.mark;
		mark2<<st1.mark;
		ofstream mark3(" Marks 3 file.txt", ios::out );
		cout<<" \nEnter Book 3 Marks = ";
		cin>>st1.mark;
		mark3<<st1.mark;
		ofstream mark4(" Marks 4 file.txt", ios::out );
		cout<<" \nEnter Book 4 Marks = ";
		cin>>st1.mark;
		mark4<<st1.mark;
		ofstream mark5(" Marks 5 file.txt", ios::out );
		cout<<" \nEnter Book 5 Marks = ";
		cin>>st1.mark;
		mark5<<st1.mark;
		for(int i=1; i<101; i++)
		{
			system("cls");
			system("color 7");
			//system("cls");
			cout<<" \n\n\n\n\n\n\t\t\t  Saving Data "<<i<<"%"<<endl;
		}
		system("cls");
		cout<<" \n\n\t\t\t      Your Data Save....."<<endl;
		cout<<"\n\t\t    ********************************"<<endl;
		goto b_save;
	}
	else if(n==50)
	{
		system("cls");
		ifstream file1(" Name file.txt", ios::in);
		file1>>st1.name;
		cout<<" \n\t\tYour Name is ="<<st1.name<<endl;
		ifstream file2(" Roll No file.txt", ios::in );
		file2>>st1.roll_no;
		cout<<" \n\t\tYour  Roll No is ="<<st1.roll_no<<endl;
		ifstream mark1(" Marks 1 file.txt", ios::in );
		mark1>>st1.mark;
		cout<<" \n\t\tYour Book 1 Marks = "<<st1.mark<<endl;
		ifstream mark2(" Marks 2 file.txt", ios::in );
		mark2>>st1.mark;
		cout<<" \n\t\tYour Book 2 Marks = "<<st1.mark<<endl;
		ifstream mark3(" Marks 3 file.txt", ios::in );
		mark3>>st1.mark;
		cout<<"\n \t\tYour Book 3 Marks = "<<st1.mark<<endl;
		ifstream mark4(" Marks 4 file.txt", ios::in );
		mark4>>st1.mark;
		cout<<" \n\t\tYour Book 4 Marks = "<<st1.mark<<endl;
		ifstream mark5(" Marks 5 file.txt", ios::in );
		mark5>>st1.mark;
		cout<<" \n\t\tYour Book 5 Marks = "<<st1.mark<<endl;
		again_but:
		cout<<" \n\n\t\t PRESS 3 for Back Menu  "<<endl;
		n=getch();
		if(n==51)
		{
			system("cls");
			goto show_b_m;	
		}
		else
		{
			cout<<"\n\t\tYou Enter Wrong Button "<<endl;
			goto again_but;
		}
	}
	else if(n==51)
	{
		st1.name[20];
		for(int i=0; i<20; i++)
		{
			st1.name[i]=0;
		}
		st1.roll_no=0;
		st1.mark=0;
		ofstream file1(" Name file.txt", ios::out | ios::trunc);
		file1<<st1.name;
		ofstream file2(" Roll No file.txt", ios::out );
		file2<<st1.roll_no;
		ofstream mark1(" Marks 1 file.txt", ios::out );
		mark1<<st1.mark;
		ofstream mark2(" Marks 2 file.txt", ios::out );
		mark2<<st1.mark;
		ofstream mark3(" Marks 3 file.txt", ios::out );
		mark3<<st1.mark;
		ofstream mark4(" Marks 4 file.txt", ios::out );
		mark4<<st1.mark;
		ofstream mark5(" Marks 5 file.txt", ios::out );
		mark5<<st1.mark;
		for(int i=1; i<101; i++)
		{
			system("color A");
			system("cls");
			cout<<"\n\n\n\n\n\n\t\t\t\tDelteing Data..."<<i<<"%"<<endl<<endl;
			cout<<"\t\t";
			for(int j=1; j<i; j++)
			{
				if(j%2==0)
				{
					cout<<"|";
				}
			}
		}
		
		del_again_but:
		cout<<" \n\n\n\t\t\t      PRESS 3 for Back Menu  "<<endl;
		n=getch();
		if(n==51)
		{
			system("cls");
			goto del_data;	
		}
		else
		{
			cout<<"\n\t\tYou Enter Wrong Button "<<endl;
			goto del_again_but;
		}
	}
	else
	{
		system("cls");
		cout<<" \n\n\t\t\tYou Enter Wrong Button ..."<<endl;
		cout<<"\n\t\t    ********************************"<<endl;
		goto b_menu;
	}
	getch();
}
