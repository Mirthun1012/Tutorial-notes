#include<iostream>				
using namespace std;

/*sign= -,0,+. unsign= 0,+.
   
   ascii value(stand)                                                                                                     //dont use function()  in nesting and 
   a=97 to z=122                                                                                                         // we can use struct like funtions  
    A=65  to Z= 90                                                                                                      
	escape sequence = "\n","\t", etc */ 	

int main()
{     
char z='c';  
// sizeof()
cout<<"The size of or value of char is:\n";
cout<<sizeof(z)<<'\n'<<endl;                             //To find the size of(value)char.

//(int) 
cout<<"The ascii(standard) value of c is:\n";                        
cout<<(int) z<<endl<<"\n";                        //To find the ascii value(standard value) of c.

//getline() 
 string y;string y1;     
cout<<"Enter your first name"<<"\n";
getline(cin,y);	                                //use 'getline' for to get a full line.
cout<<"Enter your second name \n";              //use cin.ignore) to ignore the 'cin stream'.
getline(cin,y1);
cout<<"your full name is "<<y+" "+y1<<" right. \n"<<endl;
cout<<"The length of your name is: \n";
cout<< (y+y1).length()<<endl<<" \n";                            // To find length of the name. it also include space.

// enum{}	
enum freinds                         // use enum to make a own data type.
{ RAMASH,                            // always first value will be 0.
  NEHIMIAS,                          // and this value will be +1, by first value.
  RONNAKK,};                         //and this value will be +1, by second value.
// enum
freinds x;
cout<<"The small example for enum, \n";
x=RAMASH;
cout<<x<<endl<<"\n";

// struct{}
 struct school                    //struct was also like a function.
 {string name;
    int age;
    int id;};   
// struct (1st type)
cout<<"It is the first example of struct:\n";
school s1;
s1.name=" ks mirthun";
s1.id= 34;
s1.age=14;
cout<<s1.name<<endl<<endl;

/*exit(0);*/   // it is called halt statement because it will end the program.

//(2nd type) 
cout<< "It is the second  example of struct:\n";
school s2={" pranav",10,30};
cout<<s2.name<<endl<<"\n"; 

//conditional branching, its one of the appilication is, if else statement.
//we going to use, if else statement.

 /*if else. its syntax is if().*/
 // if statement (first example)
 int a,b;
 cout<<"Enter two numbers, it may be equal or not.\n";
 cin>>a>>b;
 if(a==b) // we use double equal signs not single equal sign because we use
         // single sign to assign value to a variable.
 cout<<"Your numbers are equal.\n"<<endl;
 else
 cout<<"Your numbers are not equal.\n"<<endl;

// if statement (second example)
int a1;
cout<<"Enter a number, that may be even or odd.\n";
cin>>a1;
if(a1%2==0) /* relational operaters:-
                we can also use 
                != - not equal
				>= - smaller than or equal
				<= - greater than or equal
				>  - smaller than
				<  - greater than
				== - equal  */
cout<<"Your number is even.\n"<<endl;
else // don't forget to use else when you use if statement.
cout<<"Your number is odd.\n"<<endl; 

//final conculation 
string b1; 
cout<<"Are you like this program?\n"<<"Tell yes or no\n";
cin>>b1;
if(b1=="yes")
cout<<"Thank you for your awesomactic comment.";
if(b1=="no")
cout<<"opps, sorry for that.";              
return 0;}
// Byeeeeeeeeeeeeeeeeeeee
