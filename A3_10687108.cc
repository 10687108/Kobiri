#include<iostream>
using namespace std;

int main()
{

int mark;

cout<<"this program determines your grade "<<endl;
cout<<"please enter your mark"<<endl;
cin>>mark;

  if(mark>=80&&mark<=100)
{ cout<<"your grade is A"<<endl;
}

 else if(mark>=75&&mark<=79){

cout<<"your grade is B+"<<endl;
}

else if(mark>=70&&mark<=74)
{
cout<<"your grade is B"<<endl;
}

else if(mark>=65&&mark<=69)
{
cout<<"your grade is C+"<<endl;
}
else if(mark>=60&&mark<=64){
cout<<"your grade is C"<<endl;
}

else if(mark>=55&&mark<=59)
{cout<<"your grade is D+"<<endl;}

else if(mark>=50&&mark<=54){
cout<<"your grade is D"<<endl;
}
else if(mark>=45&&mark<=49)
{cout<<"your grade is E"<<endl;

}
 else if(mark>=0&&mark<45) {


cout<<"your grade is F"<<endl;
}
else{
cout<<"invalid input"<<endl;}
return 0;}
