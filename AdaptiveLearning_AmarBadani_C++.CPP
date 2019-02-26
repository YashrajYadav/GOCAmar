
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x;
	x=0;
	char a1[100],a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12;
	cout<<"HELLO FRIEND\nEnter Your Name:-";
	cin>>a1;
	cout<<"Enter Your Email ID:- ";
	cin>>a2;
	cout<<"Welcome "<<a1;

	cout<<"\n";
	cout<<"Enter answer in form of 'a','b' and'c'only.";
	cout<<"\n";
	cout<<"What is called as ' THE HOLY LAND?' a.Jerusalem b.Mathura c.Mecca ";
	cin>>a3;
	if(a3=='a')
	{
		x=x+10;
		cout<<"Good Job.Your score is "<<x;
	}
	else if(a3=='b'||a3=='c')
	{
	cout<<"\nSorry wrong answer.";
	}
	getch();
	clrscr();
	cout<<"What is called as ' THE ROOF OF THE WORLD'?a.Nepal b.Rome c.Tibet ";
	cin>>a3;
	if(a3=='c')
	{
		x=x+10;
		cout<<"Good Job.Your score is "<<x;

	}
	else if(a3=='a'||a3=='b')
	{
	cout<<"/nSorry wrong answer.";
	}

	getch();
	clrscr();

	cout<<"What is called as ' THE LAND OF RISING SUN'?a.Chicago b.Japanc.Tibet ";
	cin>>a3;
	if(a3=='b')
	{
		x=x+10;
		cout<<"Good Job.Your score is "<<x;
	}
	else if(a3=='a'||a3=='c')
	{
	cout<<"/nSorry wrong answer.";
	}
	getch();
	clrscr();
	cout<<"What is called as ' THE GIFT OF NILE'?a.Chicago b.Egypt c.Africa ";
	cin>>a3;
	if(a3=='b')
	{
		x=x+10;
		cout<<"Your score is "<<x;
	}
	else
	cout<<"/nSorry wrong answer.";
	getch();
	clrscr();
	cout<<"What is called as ' THE LAND OF MIDNIGHT SUN'?a.Norway b.Japan c.Australia";
	cin>>a3;
	if(a3=='a')
	{
		x=x+10;
		cout<<"Your score is "<<x;

	}
	else
	cout<<"/nSorry wrong answer.";
	getch();
	clrscr();
	cout<<"What is called as ' THE LAND OF THUNDERBOLT'? a.Bhutan b.Canada c.Arab";
	cin>>a3;
	if(a3=='a')
	{
		x=x+10;
		cout<<"Your score is "<<x;
	}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();
	cout<<"What is called as ' THE WINDY CITY? a.Jerusalem b.Japan c.Chicago ";
	cin>>a3;
	if(a3=='c')
	{
		x=x+10;
		cout<<"Your score is "<<x;
	}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();
	cout<<"What is called as ' THE LAND OF WHITE ELEPHANTS'? a.Bangladesh b.Thailand c.India ";
	cin>>a3;
	if(a3=='b')
	{
		x=x+10;
		cout<<"Your score is "<<x;
	}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();
	cout<<"What is called as ' THE CITY OF SEVEN HILLS ?' a.Rome b.Nilgiri Hills c.Tibet ";
	cin>>a3;
	if(a3=='a')
	{
		x=x+10;
		cout<<"Your score is "<<x;
	}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();
	cout<<"What is called as ' THE DARK CONTIENENT ?a.Asia b.Australia c.Africa ";
	cin>>a3;
	if(a3=='c')
	{
		x=x+10;
		cout<<"Your score is "<<x;
	}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();
	if(x==100)
	cout<<"No cheating...... You have done this earlier also.";
	if(x==90)
	cout<<"You are extremely intelligent  Your Score is 90";
	if(x==80)
	cout<<"You are intelligent Your Score is 80";
	if(50==x||x==70||x==60)
	cout<<"You are average Your Score is "<<x<<"Better luck next time";
	else if(x<=40)
	cout<<"POOR PERFORMANCE...Your Score is "<<x;
	getch();
}