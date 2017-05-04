include <iostream>
using namespace std;
int main()
{
  int fn=1, fnp1=1, rf;
  for(int j=1; j<=100; j++)
  {
    rf=fn+fnp1;
    fn=fnp1;
    fnp1=rf;  
  }
cout<<"100th Fibanacci number = "<<rf<<endl;
return 0;
} 
