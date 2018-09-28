#include "std_lib_facilities.h"


int main() 
{
 string first_name;
 cout<<"Please enter your first name (followed by 'enter'):\n";
 cin>> first_name;
 cout<<"Hello, "<<first_name<<"!\n";
 cout<<"Enter the name of the person you want to write to \n";
 cin>> first_name;
 cout<<"Dear "<<first_name<<"\n";
 cout<<" How are you?\nI hope we can see each other soon!\n";
 string friend_name;
 cout<<"Please enter another friend's name (followed by 'enter'):\n";
 cin>> friend_name;
 cout<<"Have you seen "<<friend_name<<" lately?\n";
 char friend_sex = 0;
 cout<<"Please enter an 'm' if your friend is male or an 'f' if your friend is female (followed by 'enter'):\n";
 cin>> friend_sex;
 if(friend_sex == 'm')
  {
   cout<<"If you see "<<friend_name<<" please ask him to call me.\n";
  }
 else
  {
   cout<<"If you see "<<friend_name<<" Please ask her to call me.\n";
  }
 int age = 0;
 cout<<"Please enter the age of the recipient (followed by 'enter'):\n";
 cin>>age;
 if(age<1 or age>109)
  {
   simple_error("you're kidding!\n");
  }
 cout<<"I hear you just had a birthday and you are "<<age<<" years old.\n";
 if(age<11)
  {
   cout<<"Next year you will be "<<age+1<<".\n";
  }
if(age == 17)
  {
   cout<<"Next year you will be able to vote.\n";
  }
if(age>70)
  {
   cout<<"I hope you are enjoying retirement.\n";
  }
 string signiture;
 cout<<"Enter your signiture:\n";
 cin>>signiture;
 cout<<"Yours sincelery, \n"<<"\n"<<signiture<<"\n";
}
