#include<ankur.h>
#include<stdlib.h>
#include<fstream.h>
void main()
{
  char a[100], b[100];
  title();
  ifstream obj1("C:\\student.txt");
  cout << " Enter the data ";
  cin >> b;
  obj1 << b;
  obj1.close();
  ofstream obj("C:\\student.txt");
  if(obj == NULL)
  {
    printf("File not found");
    return;
  }
  while(obj.eof()== 0)
  {
    obj >> a;
    cout <<"\n"<< a;
    cout<<"  obj is "<<obj.eof();
  }
  obj.close();
  getch();
}
