#include<ankur.h>
#include<stdlib.h>
class selectquestions
{
	public:
	int select(int m);
};
int selectquestions :: select(int m)
{
	  int i;
	  srand(time(NULL));
	  i = rand() % m + 1;
	  while(i == 0)
	  {
	    i = rand() % m + 1;
	  }
	  return i;
}

class lifeline : public selectquestions
{
	public:
	int flipquestion(int a, int b);
};

int lifeline :: flipquestion(int a, int b)
{
	int i = 0;
	do
	{
	  i = select(a);
	}while(i == b);
	return i;
}
class level1 : public selectquestions
{
	private:
	int i , c;
	public:
	int givequestion(int i);
};

int level1 :: givequestion(int i)
{
	  title();
	  int flag = 0 ,temp;
	  switch(i)
	  {
	   case 1:
	   {
	     cout<<"1: Which one is the correct spelling of green ?\n1:Green\n2:Red\n3:Yello\n4:White\n";
	     cout << "Press 5 for Lifeline: ";
	     cin >> c;
	     if(c == 1)
	     {
	       cout <<"CORRECT ANSWER\n";
	       flag = 1;
	       getch();
	       break;
	     }
	/*     else if(c == 5)
	     {
	       lifeline flip;
	       temp = i;
	       i = flip.flipquestion(3, temp);
	       goto givequestion(int i);
	     }*/
	     else
	     {
	       cout << "WRONG ANSWER\n";
	       break;
	     }
	   }
	   case 2:
	   {
	     cout << "2: Which one is the correct spelling of Tiger ?\n1:Tiger\n2:Lion\n3:Bird\n4:Yak\n";
	     cin >> c;
	     if(c == 1)
	     {
	       cout << "CORRECT ANSWER\n";
	       flag = 1;
	       getch();
	       break;
	     }
	     else
	     {
	      cout << "WRONG ANSWER\n";
	      break;
	     }
	   }
	    case 3:
	    {
	     cout << "3: Which one is the correct spelling of Pillow ? \n1:Pillow \n2:Biloow \n3:Willow \n4:Kilo\n";
	     cin >> c;
	     if(c == 1)
	     {
	       cout << "CORRECT ANSWER\n";
	       flag = 1;
	       getch();
	       break;
	     }
	     else
	     {
	       cout << "WRONG ANSWER\n";
	       break;
	     }
	    }
	  }
	return flag;
}

class level2 : public selectquestions
{
	int c;
	public:
	int givequestions(int i);
};
int level2 :: givequestions(int i)
{
	title();
	int flag = 0;
     //	i = select(m);
	switch(i)
	{
	 case 1:
	 {
	   cout <<"1: Which City Is The Capital Of M.P \n1: Bhopal \n2: Jabalpur \n3: Raipur \n4: Nagpur\n";
	   cin  >> c;
	   if(c == 1)
	   {
	     cout<<" CORRECT ANSWER ";
	     flag = 1;
	     getch();
	     break;
	   }
	   else
	   {
	     cout<<"WRONG ANSWER\n";
	     break;
	   }
	 }
	 case 2:
	 {
	   cout <<"2:Which City Is The Capital Of India ?\n1: Mumbai \n2: Kolkata \n3: Delhi \n 4:Banglore\n";
	   cin >> c;
	   if(c == 3)
	   {
	     cout << " CORRECT ANSWER ";
	     flag = 1;
	     getch();
	     break;
	   }
	   else
	   {
	     cout << "WRONG ANSWER\n";
	     break;
	   }
	 }
	 case 3:
	 {
	   cout << "3:Which City Is The Capital Of Maharastra ?\n1: Nagpur\n2: Mumbai\n3: Jabalpur \n4: Ahemdabad\n";
	   cin >> c;
	   if(c == 2)
	   {
	     cout << " CORRECT ANSWER ";
	     flag = 1;
	     getch();
	     break;
	   }
	   else
	   {
	     cout << "WRONG ANSWER\n";
	     break;
	   }
	 }
       }
	return flag;
}
class level3 : public selectquestions
{
	private:
	int c;
	public:
	int givequestions(int i);
};

int level3 :: givequestions(int i)
{
	title();
	int flag = 0;
	switch(i)
	{
	   case 1:
	   {
	     cout << " \nIn an year how many days are present";
	     cout << "\n1:365 \n2:377 \n3:320\n 4:220\n";
	     cin >> c;
	     if(c == 1)
	     {
	       cout << " CORRECT ANSWER";
	       flag = 1;
	       getch();
	       break;
	     }
	     else
	     {
	       cout << "INCORRECT ANSWER";
	       cout << "The Correct Answer Is : 365";
	       break;
	     }
	   }
	   case 2:
	   {
	     cout << "\nWho Is The Best Batsman Of The World ";
	     cout << "\n1:David warner \n2:Steve Smith \n3:Kane Williamson \n4:Virat Kohli";
	     cin >> c;
	     if(c == 4)
	     {
	       cout <<" CORRECT ANSWER";
	       flag = 1;
	       getch();
	       break;
	     }
	     else
	     {
	       cout << "INCORRECT ANSWER";
	       cout << "The Correct Answer Is : Virat Kohli";
	       break;
	     }
	   }
	   case 3:
	   {
	     cout << "\nIn Which Sport Mary Kom Is ?";
	     cout << "\n1:Boxing \n2:Badminton \n3:Tennis \n4:Cricket";
	     cin >> c;
	     if(c == 1)
	     {
	       cout << " CORRECT ANSWER";
	       flag = 1;
	       getch();
	       break;
	     }
	     else
	     {
	       cout << "INCORRECT ANSWER";
	       cout << "The Correct Answer Is: Boxing";
	       break;
	     }
	   }
	}
	return flag;
}

class level4 : public selectquestions
{
	private:
	int c;
	public:
	int givequestions(int i);
};

int level4 :: givequestions(int i)
{
	title();
	int flag = 0;
	switch(i)
	{
	   case 1:
	   {
	     cout <<" \nBahubali festival Is Related To ? ";
	     cout <<"\n1:Islam \n2:Hinduism \n3:Buddism \n4:Jainism\n";
	     cin >> c;
	     if(c == 4)
	     {
	       cout << "CORRECT ANSWER";
	       flag = 1;
	       getch();
	       break;
	     }
	     else
	     {
	       cout << "INCORRECT ANSWER";
	       cout << "The Correct Answer Is : Jainism";
	       break;
	     }
	   }

	   case 2:
	   {
	     cout << "\nSeptember 27 Is Celebrated Every Year As ?";
	     cout << "\n1:Teacher's Day\n2:National Integration Day  \n3:World Tourism Day\n4:International Literacy Day\n";
	     cin >> c;
	     if(c == 3)
	     {
	       cout<< "CORRECT ANSWER";
	       flag = 1;
	       getch();
	       break;
	     }
	     else
	     {
	       cout << "INCORRECT ANSWER";
	       cout << "The Correct Answer is : World Tourism Day";
	       break;
	     }
	   }

	   case 3:
	   {
	     cout << "\nThe International Literacy Day Is Observed On ?";
	     cout << "\n1: Sep 8 \n2: Nov 28 \n3: May 2 \n4: Sep 22\n";
	     cin >> c;
	     if(c == 1)
	     {
	       cout <<"CORRECT ANSWER";
	       cin >> c;
	       flag = 1;
	       getch();
	       break;
	     }
	     else
	     {
	       cout <<"INCORRECT ANSWER";
	       cout <<"\nThe Correct Answer Is : Sep 8";
	       break;
	     }
	   }
	 }
	return flag;
}

class level5 : public selectquestions
{
	private:
	int c;
	public:
	int givequestions(int i);
};

int level5 :: givequestions(int i)
{
	title();
	int flag = 0;
	switch(i)
	{
	   case 1:
	   {
	     cout <<" \n'Good Friday' Is Observed To Commememorate The Event Of ?";
	     cout <<"\n1:Birth Of Jesus Christ \n2:Birth Of Saint Peter \n3:Crucification Of Jesus Christ \n4:Rebirth Of Jesus Christ\n";
	     cin >> c;
	     if(c == 3)
	     {
	       cout << "CORRECT ANSWER";
	       flag = 1;
	       getch();
	       break;
	     }
	     else
	     {
	       cout<< "INCORRECT ANSWER";
	       cout << "\nThe Correct Answer Is : Crucification Of Jesus Christ";
	       break;
	     }
	   }

	   case 2:
	   {
	     cout << "\nWhich Of The Following Is Observed As Sports Day Every Year ?";
	     cout << "\n1:22nd April \n2:26thJuly  \n3:29 August \n4:2nd October\n";
	     cin >> c;
	     if(c == 3)
	     {
	       cout << "CORRECT ANSWER";
	       flag = 1;
	       getch();
	       break;
	     }
	     else
	     {
	       cout << "INCORRECT ANSWER";
	       cout << "The Correct Answer is : 26th August";
	       break;
	     }
	   }

	   case 3:
	   {
	     cout << "\nPongal Is A Popular Festival Of Which State ?";
	     cout << "\n1: Karnatak \n2: Kerala \n3: Tamil Nadu \n4: Andra Pradesh\n";
	     cin >> c;
	     if(c == 3)
	     {
	       cout <<"CORRECT ANSWER";
	       cin >> c;
	       flag = 1;
	       getch();
	       break;
	     }
	     else
	     {
	       cout << "INCORRECT ANSWER";
	       cout << "\nThe Correct Answer Is : Tamil Nadu";
	       break;
	     }
	   }
	 }

	return flag;
}

class level6 : public selectquestions
{
	private:
	int c;
	public:
	int givequestions(int i);
};

int level6 :: givequestions(int i)
{
	title();
	int flag = 0;
	switch(i)
	{
	   case 1:
	   {
	     cout <<" \nThe Abbreviation 'FOB' Stands For ?";
	     cout <<"\n1:Free On Board \n2:Free Of Bargain \n3:Fellow Of Britain \n4:None Of These\n";
	     cin >> c;
	     if(c == 1)
	     {
	       cout << "CORRECT ANSWER";
	       flag = 1;
	       getch();
	       break;
	     }
	     else
	     {
	       cout << "INCORRECT ANSWER";
	       cout << "\nThe Correct Answer Is : Crucification Of Jesus Christ";
	       break;
	     }
	   }

	   case 2:
	   {
	     cout << "\nWhich Of The Following Was The First Indian State To Issue Photo Identity Cards To Their Voters ?";
	     cout << "\n1:Tamil Nadu \n2:Rajasthan  \n3:West Bengal \n4:Haryana\n";
	     cin >> c;
	     if(c == 4)
	     {
	       cout<< "CORRECT ANSWER";
	       flag = 1;
	       getch();
	       break;
	     }
	     else
	     {
	       cout << "INCORRECT ANSWER";
	       cout << "The Correct Answer is : Haryana";
	       break;
	     }
	   }

	   case 3:
	   {
	     cout << "\nThe Value OF pi(3.14) Was First Given By ?";
	     cout << "\n1: Bhaskara \n2: Varahmihir \n3: Aryabhatta \n4: None Of These\n";
	     cin >> c;
	     if(c == 3)
	     {
	       cout << "CORRECT ANSWER";
	       cin >> c;
	       flag = 1;
	       getch();
	       break;
	     }
	     else
	     {
	       cout << "INCORRECT ANSWER";
	       cout <<"\nThe Correct Answer Is : Aryabhatta";
	       break;
	     }
	   }
	 }
	return flag;
}
class level7 : public selectquestions
{
	private:
	int c;
	public:
	int givequestions(int i);
};

int level7 :: givequestions(int i)
{
	title();
	int flag = 0;
	switch(i)
	{
	   case 1:
	   {
	     cout << " \nThe Bhopal Gas Tragety Was A Result Of Which Of The Follwing  ?";
	     cout<< "\n1:Collapsing Of A Dam \n2:Great Fire \n3:Plague Epidemic \n4:None Of These\n";
	     cin >> c;
	     if(c == 4)
	     {
	       cout << "CORRECT ANSWER";
	       flag = 1;
	       getch();
	       break;
	     }
	     else
	     {
	       cout<< "INCORRECT ANSWER";
	       cout << "\nThe Correct Answer Is : None Of These";
	       break;
	     }
	   }

	   case 2:
	   {
	     cout << "\nWhich Of The Following European Countries Is The First Buyer Of Maruti Cars  ?";
	     cout << "\n1:Hungary \n2:Belgium  \n3:England \n4:Spain\n";
	     cin >> c;
	     if(c == 1)
	     {
	       cout<< "CORRECT ANSWER";
	       flag = 1;
	       getch();
	       break;
	     }
	     else
	     {
	       cout << "INCORRECT ANSWER";
	       cout << "The Correct Answer is : Hungary";
	       break;
	     }
	   }

	   case 3:
	   {
	     cout << "\nWhich Of The Following Languages Has Been Reported To Have Been Most Suitable Language For The Computer ?";
	     cout << "\n1: German \n2: Arabic \n3: Russian \n4: English\n";
	     cin >>c;
	     if(c == 4)
	     {
	       cout << "CORRECT ANSWER";
	       cin >> c;
	       flag = 1;
	       getch();
	       break;
	     }
	     else
	     {
	       cout << "INCORRECT ANSWER";
	       cout << "\nThe Correct Answer Is : English";
	       break;
	     }
	   }
	 }
	return flag;
}
void main()
{
	 int i, maxnumber = 3 ,flag, questionno;
	 title();

	 level1 question1;
	 questionno = question1.select(maxnumber);
	 flag = question1.givequestion(questionno);

	 if(flag == 1)
	 {
	   level2 question2;
	   questionno = question2.select(maxnumber);
	   flag = question2.givequestions(questionno);
	 }

	 if(flag == 1)
	 {
	   level3 question3;
	   questionno = question3.select(maxnumber);
	   flag = question3.givequestions(questionno);
	 }

	 if(flag == 1)
	 {
	   level4 question4;
	   questionno = question4.select(maxnumber);
	   flag = question4.givequestions(questionno);
	 }

	 if(flag == 1)
	 {
	   level5 question5;
	   questionno = question5.select(maxnumber);
	   flag = question5.givequestions(questionno);
	 }

	 if(flag == 1)
	 {
	   level6 question6;
	   questionno = question6.select(maxnumber);
	   flag = question6.givequestions(questionno);
	 }
	 if(flag == 1)
	 {
	   level7 question7;
	   questionno = question7.select(maxnumber);
	   flag = question7.givequestions(questionno);
	 }
	 getch();
}