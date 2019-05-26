#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<iomanip.h>
int i,score=0,choice1,choice2=0,choice;
void first();
void ins();
void science();
void history();
void gk();
void sports();
void main()
{	clrscr();
	first();
	system("pause");
	clrscr();
	ins();
	system("pause");
	do{	clrscr();
		cout<<setw(45)<<"The topics are as follows"<<endl;
		Again:
		cout<<"1. Sports"<<endl;
		cout<<"2. General Knowledge"<<endl;
		cout<<"3. Science"<<endl;
		cout<<"4. History"<<endl;
		cout<<"5. Exit"<<endl;
		cout<<"Enter your choice:";
		cin>>choice;
		if(choice2==choice)
		{	cout<<"Choose next topic"<<endl;
			goto Again;
		}
		choice2=choice;
		switch(choice)
		{	case 1:clrscr();
				sports();
				break;

			case 2:clrscr();
				gk();
				break;
			case 3:clrscr();
				science();
				break;
			case 4:clrscr();
				history();
				break;
			case 5:exit(0);
			default:cout<<"Wrong Chocie";
		  }
		  cout<<endl;
		  cout<<"Do you want to continue?"<<endl;
		  cout<<"1.Yes 2.No:";
		  cin>>choice1;
		  }while(choice1==1);

	getch();
}


void first()
{	 for(i=0;i<80;i++)
		cout<<"*";
	 for(i=0;i<10;i++)
	 {	cout<<"*\t\t\t\t\t\t\t\t\t     *";
		cout<<endl;
	 }
	 cout<<"*";
	 cout<<setw(45)<<"Quiz World";
	 cout<<"\t\t\t\t\t\t      *";
	 for(i=0;i<9;i++)
	 {     cout<<"*\t\t\t\t\t\t\t\t\t      *";
		cout<<endl;
	 }
	 for(i=0;i<80;i++)
		cout<<"*";
}

void ins()
{  	cout<<setw(45)<<"INSTRUCTIONS"<<endl;
	cout<<"There are 8 questions in each topic."<<endl;
	cout<<"There are 3 chocices in each question."<<endl;
	cout<<"Each correct choice will be given 3 marks."<<endl;
	cout<<"Each wrong answer will lead to deduction 1 mark"<<endl;
	cout<<"Once chosen topic cannot be chosen again."<<endl;
}

void sports()
{	char choice[8];
	char q[8][250]={"Who won women's singles title at BWF Dubai Open 2017?","Which club won the La Liga title & European Cup 2016-17?","Hockey World League 2017 was won by:","The U-19 Cricket WC 2018 will take place in:","The 2017 U.S. Open Men's title was won by:","Who is 2017 Formula One champion","The 2017 FINA World Championship was held in:","The 2018 Winter Olympics will be taking place at:"};
	char a1[8][150]={"Saina Nehwal","F.C.Barcelona","India","South Africa","Rafael Nadal","Valteri Bottas","U.S.A.","South Korea"};
	char a2[8][150]={"Akane Yamaguchi","Real Madrid C.F.","Argentina","New Zealand","Roger Federrer","Sebastian Vettle","Budapest","Russia"};
	char a3[8][150]={"PV Sindhu","Atletico Madrid","Australia","India","Novak Djocovic","Lewis Hamilton","Brazil","United Kingdom"};
	char c[8]={'b','b','c','b','a','c','b','a'};
	for(i=0;i<8;i++)
	{       cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
		cout<<"Question"<<i+1<<":";
		cout<<q[i]<<endl;
		cout<<"a."<<a1[i]<<endl;
		cout<<"b."<<a2[i]<<endl;
		cout<<"c."<<a3[i]<<endl;
		cout<<"Enter choice:";
		cin>>choice[i];
		if(choice[i]=='a' || choice[i]=='b' || choice[i]=='c')
		{
			clrscr();

		}
		else {
				cout<<"Invalid Option"<<endl;
				i--;
				system("pause");
				clrscr();
			}
		
	}
	for(i=0;i<8;i++)
	{	if(choice[i]==c[i])
			score+=3;
		else
			score+=-1;
	}
	clrscr();
	cout<<endl<<"Your score is:"<<score;
	cout<<endl<<"Your Choice        Correct Choice"<<endl;
	for(i=0;i<8;i++)
		{
			cout<<choice[i]<<"                  "<<c[i]<<"\t";
			if (choice[i]=='a')
			{

				cout<<a1[i];
			}
			else if (choice[i]=='b')
			{

				cout<<a2[i];
			}
			else if (choice[i]=='c')
			{

				cout<<a3[i];
			}
			cout<<endl;	
		}
}
void gk()
{	char choice[8];
	char q[8][250]={"Which film was declared as the best film in 62nd Filmfare Awards","The 14th Pravasi Bhartiya Divas held by which city","World Braille Day is observed on","Which country becomes the first to ban FM radio broadcasting","National Girl Child Day is observed on","Which internet web portal change its name to Altaba Inc","Which is the first city to have WiFi connectivity in Public Places","Who was the chief guest of the official ceremony in the Republic Day in 2017"};
	char a1[8][250]={"Dangal","Delhi","2 January","Norway","3 January","Google","Mumbai","President of China"};
	char a2[8][150]={"Sultan","Kolkata","4 January","South America","8 January","Yahoo","New Delhi","Crown Prince of Abu Dhabi"};
	char a3[8][150]={"Ae dil hai Mushkil","Bengaluru","10 January","Brazil","24 January","Twitter","Chennai","President of France"};
	char c[8]={'a','c','b','a','c','b','a','b'};
	for(i=0;i<8;i++)
	{       cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
		cout<<"Question"<<i+1<<":";
		cout<<q[i]<<endl;
		cout<<"a."<<a1[i]<<endl;
		cout<<"b."<<a2[i]<<endl;
		cout<<"c."<<a3[i]<<endl;
		cout<<"Enter choice:";
		cin>>choice[i];
		if(choice[i]=='a' || choice[i]=='b' || choice[i]=='c')
		{
			clrscr();

		}
		else {
				cout<<"Invalid Option"<<endl;
				i--;
				system("pause");
				clrscr();
			}
	}
	for(i=0;i<8;i++)
	{	if(choice[i]==c[i])
			score+=3;
		else
			score+=-1;
	}
	clrscr();
	cout<<endl<<"Your score is:"<<score;
	cout<<endl<<"Your Choice        Correct Choice"<<endl;
	for(i=0;i<8;i++)
		{
			cout<<choice[i]<<"                  "<<c[i]<<"\t";
			if (choice[i]=='a')
			{

				cout<<a1[i];
			}
			else if (choice[i]=='b')
			{

				cout<<a2[i];
			}
			else if (choice[i]=='c')
			{

				cout<<a3[i];
			}
			cout<<endl;
		}
}

void science()
{

	clrscr();
	char choice[8];
	char q[8][250]={ "Who is the father of chemistry?","While catching a ball a player pulls down his hands to lower the?"," What is the cerebrum responsible for?","Which of the following is a non-metal that remains liquid at room temperature?","Outside the nucleus DNA is found in:","Permanent hardness of water can be removed by" ,"Geostationary satellite revolves at","The group of metals Fe,Co,Ni may be best called as"};
	char a1[8][200]={"Antonie Lavoisier","Force","Respiration","Phosphorous","Mitochondria","Alum","any height","Transition Metals"};
	char a2[8][200]={"Alfred Nobel", "Momentum" ,"Cognitive Functions","Bromine","Ribosome","Lime","fixed height","Rare Metals"};
	char a3[8][200]={"Otto Hahn" ,"Impulse","Reflexes","Chlorine","Golgi Bodies","Sodium carbonate","height above poles","Alkali Metals"};
	char c[8]={ 'a','c','b','b','a','c','b','a'};
	for(i=0;i<8;i++)
	{        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
		 cout<<"Question"<<i+1<<":"<<endl;
		 cout<<q[i]<<endl;
		 cout<<"a." <<a1[i]<<endl;
		 cout<<"b." <<a2[i]<<endl;
		 cout<<"c." << a3[i]<<endl;
		 cout<<"Enter your Chocie:\n";
		 cin>>choice[i];
		 if(choice[i]=='a' || choice[i]=='b' || choice[i]=='c')
		{
			clrscr();

		}
		else {
				cout<<"Invalid Option"<<endl;
				i--;
				system("pause");
				clrscr();
			}
	}
	for(i=0;i<8;i++)

	{	if(choice[i]==c[i])
		score+=3;
		else
		score+=-1;
	}

	clrscr();
	cout<<endl<<"Your score is:"<<score;
	cout<<endl<<"Your Choice        Correct Choice"<<endl;
	for(i=0;i<8;i++)
		{
			cout<<choice[i]<<"                  "<<c[i]<<"\t";
			if (choice[i]=='a')
			{

				cout<<a1[i];
			}
			else if (choice[i]=='b')
			{

				cout<<a2[i];
			}
			else if (choice[i]=='c')
			{

				cout<<a3[i];
			}
			cout<<endl;
	}

}
void history()
{


	char choice[8];
	char q[8][350]={ "Where did british first open their factories in Eastern part of India?","When East India Company came into existence, England was ruled by"," First english newspaper in India?","Who was the first governor general of Bengal ?","Sati was declared illegal by?","Who introduced English Language as the  official Language" ,"Other name of Chanakya is?","Who is known as the founder of Indian National Congress?"};
	char a1[8][200]={"Assam","Hanovarians","The Bengal Gazette","Robert Clive","Lord Ripon","Dalhousie","Vishnu Gupta","Dinshaw Wacha"};
	char a2[8][200]={"Orissa", "Stuarts" ,"The Bengal Journal","Wellesly","Lord William Bentinck","Lord Irwin","Kumar Gupta","Surendra Nath Banerjee"};
	char a3[8][200]={"Bihar" ,"Normans","The Bombay Herald","Warren Hastings","Lord Dalhousie","Sir Charles Hood","Samundar Gupta","Allan Octivian Hume"};
	char c[8]={ 'b','c','a','c','b','c','a','c'};
	for(i=0;i<8;i++)
	{        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
		 cout<<"Question"<<i+1<<":"<<endl;
		 cout<<q[i]<<endl;
		 cout<<"a." <<a1[i]<<endl;
		 cout<<"b." <<a2[i]<<endl;
		 cout<<"c." << a3[i]<<endl;
		 cout<<"Enter your Chocie:\n";
		 cin>>choice[i];
		 if(choice[i]=='a' || choice[i]=='b' || choice[i]=='c')
		{
			clrscr();

		}
		else {
				cout<<"Invalid Option"<<endl;
				i--;
				system("pause");
				clrscr();
			}
	}
	for(i=0;i<8;i++)

	{	if(choice[i]==c[i])
		score+=3;
		else
		score+=-1;
	}

	clrscr();
	cout<<endl<<"Your score is:"<<score;
	cout<<endl<<"Your Choice        Correct Choice"<<endl;
	for(i=0;i<8;i++)
		{
			cout<<choice[i]<<"                  "<<c[i]<<"\t";
			if (choice[i]=='a')
			{

				cout<<a1[i];
			}
			else if (choice[i]=='b')
			{

				cout<<a2[i];
			}
			else if (choice[i]=='c')
			{

				cout<<a3[i];
			}
			cout<<endl;
		}


}


