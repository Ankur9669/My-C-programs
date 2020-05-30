#include<string.h>
#include<ankur.h>
#include<stdlib.h>
#include<fstream.h>
void verify(char a[100], int rownum);
typedef struct student
{
	int age, marks;
	char name[100], password[100];
}s;
void verify(char a[100], char b[100], student s[])
{

	int i;
	int flag = 0;
	for ( i = 0; i < 5; i++)
	{
	  if(strcmp(a, s[i].name) == 0 )
	  {
	    flag = 1;
	    break;
	  }
	}
	if(flag == 1)
	{
	  if(strcmp(b ,s[i].password) == 0)
	  {
	    cout<<" Access granted ";
	  }
	  else
	  {
	    cout<< " Wrong password:";
	  }
	}

       if(flag == 0)
       cout << " NOT FOUND ";

}
void main()
{
  title();
  s s[5];
  int rownum = 0;
  int i;
  char a[100], b[100];
  ifstream obj("C:\\student.txt");
  if(obj == NULL)
  {
    cout<<" FILE NOT FOUND ";
    return;
  }
  obj >> a;
  while (obj.eof() == 0)
  {
    for (i = 0; a[i] != 44; i++)
    {
      s[rownum].name[i] = a[i];
    }
    s[rownum].name[i] = '\0';
    int temp = 0;
    for (i = i + 1; a[i] != 44; i++)
    {
      temp = temp * 10 + (int)a[i] - 48;
    }
    s[rownum].age = temp;

    temp = 0;
    for ( i = i + 1  ; a[i] != 44; i++)
    {
      temp = temp * 10 + (int)a[i] - 48;
    }
    s[rownum].marks = temp;
    temp = 0;
    int j = 0;
    for ( i = i + 1 ; a[i] != 0; i++)
    {
      s[rownum].password[j] = a[i];
      j++;
    }
    s[rownum].password[j] = '\0';
    cout << "\n";
    cout<<s[rownum].name<<"	"<<s[rownum].age<<"	"<<s[rownum].marks<<"	"<<s[rownum].password;
    obj >> a;
    rownum++;
  }
  obj.close();
  cout<<"\n Enter the name: ";
  cin >> a;
  cout<<" \n Enter the password";
  cin >> b;
  verify(a, b, s);
 /* int flag = 0;
  for ( i = 0; i < rownum; i++)
  {
     if(strcmp(a, s[i].name) == 0 )
     {
       flag = 1;
       break;
     }
  }
     if(flag == 1)
     {
       cout << "Enter the password: ";
       cin >> a;
       if(strcmp(a ,s[i].password) == 0)
       {
	 cout<<" Access granted ";
       }
       else
       {
	 cout<< " Wrong password:";
       }
     }

  if(flag == 0)
  cout << " NOT FOUND ";     */
  getch();
}
