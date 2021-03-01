#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
      char string1 [] = "pensit";

      cout<<"Membalik String"<<endl;
      cout<<"---------------"<<endl;
      cout<<"string1 : "<<string1<<endl;

      _strrev(string1);
      cout<<"\nstring1 setelah dibalik : "<<string1<<endl;

      _getche();
      
}
