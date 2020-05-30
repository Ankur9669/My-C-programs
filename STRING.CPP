#include<ankur.h>
#include<stdlib.h>
#include<fstream.h>
#include<string.h>
#include<time.h>
typedef struct student
{
	char name[100], password[100];
}s;
void verify(char name[100], char pass[100], s s[], int rownum, int start)
{
	int i, end;
	int flag = 0;
	for (i = 0; i < rownum ; i++)
	{
	  if(strcmp(name,s[i].name) == 0)
	  {
	     flag = 1;
	     break;
	  }
	}
	if(flag == 1)
	{
	  if(strcmp(pass, s[i].password) == 0)
	  {
	     cout <<" Access granted ";
	  }
	  else
	  {
	    cout << "Wrong password";
	  }
	}
	if(flag == 0)
	{
	  cout <<" Name not found ";
	}
	end = time(NULL);
	cout<<"execution time is "<<end - start;
}
void main()
{
   s s[5];
   title();
   int i, start, end;
   int rownum = 0;
   ifstream obj("C:\\student.txt");
   if(obj == NULL)
   {
     cout << "FILE NOT FOUND";
   }
   char a[100];
   obj >> a;
   start = time(NULL);
   while (obj.eof() == 0)
   {
     for (i = 0; a[i] != 44; i++)
     {
	s[rownum].name[i] = a[i];
     }
     s[rownum].name[i] = '\0';
     int j = 0;
     for (i = i + 1 ; a[i] != 0; i++)
     {
       s[rownum].password[j]= a[i];
       j++;
     }
     s[rownum].password[j] = '\0';
     obj >> a;
     cout<<"\n";
     cout << s[rownum].name << "\t" << s[rownum].password;
     rownum++;
   }
   obj.close();
   char b[100];
   cout <<" \nEnter the name: ";
   cin >> a;
   cout <<" \nEnter the password: ";
   cin >> b;
   verify(a, b, s, rownum, start);
   getch();
}