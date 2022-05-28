/*Write a class STRING that can be used to store string, add strings, equates string, output strings.*/
#include<iostream>
using namespace std;
class Str
{
   
 public:
  char * str=NULL;
  int len;
   void length(const char *str)
{
    int i = 0;
    while (str[i]!='\0')
    {
     len++;
     i++;
    }
}
	
   Str(const char * string)
{
    len =0;
    length(string);
    str =new char[len]; 
    for(int i=0;i<len;i++)
    {
     str[i]=string[i];
    }
}

   bool equate(Str str2)
{
       if(len !=str2.len)
       return false;
       for(int i=0;i<len;i++)
       {
           if (str[i]!=str2.str[i])
           return false;
       }
       return true;
}
   void display()
{
    int i=0;
    while(str[i] != '\0')
    cout<<str[i++];
    cout<<endl;
}

   void add(Str &str2)
{
    char *newstr=new char[len+str2.len-1];
    int i=0;
    for(i=0;i<len-1;i++)
    newstr[i]=str[i];
   
   for(int j=i;j<i+str2.len;j++)
   {
       newstr[j]=str2.str[j-i];
   }
   delete []str;
   str =newstr;
}
   
};


int main()
{
    Str str1="sing  ";
    Str str2="song";
    if(str1.equate(str2)){
    cout<<"The strings are same"<<endl;
}
else
 {
    cout<<"Both strings are not same\n";
 }

 str1.add(str2);
 str1.display();
 return 0;
}
