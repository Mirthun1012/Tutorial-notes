#include<iostream>
using namespace std;
/*
// else if:
    when we have more than one possibilites in if statement, we can use else if there
	and also if want to use else if, there want to be a if statement before that,      
	we can mention number of else in if statement. The difference between 'else if' and 'normal if' is
	the else if only perform, when the previous if statement is wrong,
	 for ex:
	    if(a==b) //If the 'if statement' is wrong, then only the 'else statement' will compile. 
	    {cout<<"hi";}
	    else if(a<b)
	    {cout<<"hello";}
	and the 'normal if' must be perform,
	 for ex:
        if(a==b) //If it is wrong or correct, the next 'if statement' will compile.  
		{cout<<"hi";}
	    if(a<b)
	    {cout<<"hello";}	  

//logical operaters:
1. and:
    We use 'and' in conditial statement for mention two condition and its syntax is
	'&&', the 'and' will work when two operand is true only,
	for eg:
	if(a>10 && a<20) // when the two condition is true then only the body will execute.   
    {}              //  when the one operand is false the whole condition is false.
  /*
    operand                  result
  false, false      -      false
  true,true         -      true
  false,true        -      false
  true,false        -      false*\  

2. or:
    We also use 'or' in conditial statement for mention choices and its syntax is
	'||', we can give many choices as we want,
	for eg:
	if(a==10||a==19) // we mention two choices in this condition.
	/*
    operand                  result
  false, false      -      false
  true,true         -      true
  false,true        -      true
  true,false        -      true*\  

3. not:
    We also use 'not' in conditinal statement for mention not and its syntax is 
	'!', we can use it in bool,
	for eg:
	if(!(a==true)) // we use 'not' here for not print when the a equals to true.       
	  
//loop:
     loop means repetations. we use loop to repeat the  program.
     Its is morely used in advance programs.
     
// Types of loop:
     1.while loop - keyword is while. 
     2.do while loop - keyword is do and while. 
     3.for loop - keyword is for.
     
// while loop:
         It is a basic loop and simple loop, its syntax is 'while() {}'. 
		 It is used averagely.
		 Its bacic rule is
         we want to give any condition, to the program enter to the loop and we want to give any
         modifyciation to stop or end the loop. In modyfication we want to mention
         its variable, eg: 'a1=a1-5;', not like 'a1-5'. In while loop first it will check condition
		 and second it will out the body and third it will modify.  
         
//decrement operator:
           It is used for decrease one value in a variable and
		   its syntax is '--'.
		   In decrement operator we must not mention the
		   variable,eg: 'a1--', not like 'a1=a1--'.
		   
//increment operator:
       		It is used for increase one value in a variable and
		    its syntax is '++'. 
		    In increment operator we also not mention the
		    variable,eg: 'a1--', not like 'a1=a1--'.  


// do while loop:
           It is second type of loop. It is used rarly.
		   The major difference between, while and do is,
           in while loop, it will check the condition and it will enter but, in do while loop,
           it will defently out 1 time and check condition in last. Its syntax is 'do{}while();'.
           In do while loop first it will out the body and second it will modify and
		   third it will check condition.

// for loop:
         It is a third type of loop and its syntax is 'for(){}'.
		 It is used very commonly because it is easy to understand and also easy to making.
		 We can mention condition, variable and modyfication in one line.
		 In for loop first it will check condition
		 and second it will out the body and third it will modify.
		            
//pattern:
    It is also advance, and its made by loop. The basic pattern is pyramid pattern,
    eg:
       *
       * *
       * * *
       * * * *
	   * * * * *
	we can make number of pattern.
	The outer loop is row, the inner loop is column. 
	   		     		           
*/

int main()
{

// It is a example for if statement( little advance ).
struct freinds // we created struct.
{string name;
int age;
int m1;
int m2;
};

string a;
freinds f1={"pranav kumar",11};
freinds f2={"ram charan",11};
cout<<"Enter a name.\n";
getline(cin,a);
// if stament

if(a=="pranav kumar"||"Pranav kumar") //we use or here.
{/* we want to mention curly brackets to type multiple statements
    but also use curly brackets in single line because it is useful and efficient.*/
cout<<"Name is:\n"<<f1.name<<endl<<"Age is:\n"<<f1.age<<endl<<"\nEnter two numbers of him.\n";
cin>>f1.m1>>f1.m2;
cout<<"Total mark of him is:\n"<<f1.m1+f1.m2<<"\n";
if((f1.m1+f1.m2)>=100)
cout<<"Hey, he is a nice student.\n\n";}

//else if
else if(a=="ram charan") // we can use else if for making more than one condition in if statement.
{cout<<"Name is:\n"<<f2.name<<endl<<"Age is:\n"<<f2.age<<endl<<"\nEnter two numbers of him.\n";
cin>>f2.m1>>f2.m2;
cout<<"Total mark of him is:\n"<<f2.m1+f2.m2<<"\n";
if((f2.m1+f2.m2)>=100)
cout<<"Hey, he is a nice student.\n\n";}

else
cout<<"oops,\nyour given name is not here, sorry buddy.\n\n";

//while loop
int a1;
cout<<"It is a example for while loop.\nGive a number (I recommend, that number to be small than 100):\n";
cin>>a1;
while(a1>50)// it checking a1<0;
{cout<<"Your number is:\n"<<a1<<endl;

a1=a1-3; // we can also mention like this, 'a1-=3;'

a1--;}// we can give number of modifyciation.

//do while loop
int b;
cout<<"\nIt is a example for do while loop.\nGive a number that to be greater than 100.\n";
cin>>b;
do{cout<<"It will use rarely in the program.\n\n";b-=50;
}while(b>100);

//for loop
for(b=122;b>100;b-=61)
{cout<<"It is a example for, for loop.\n"<<b<<"\n\n";}


// If you dont undertand correctly( copy and paste in another source file):
/*#include<iostream>
using namespace std;
int main()
{int a;
cout<<"Give a number(give 25).\n";
cin>>a;

cout<<"\nIt is while loop:\n";
while(a>5)
{cout<<a-5<<"\n";
a=a-5;}

cout<<"\nIt is do while loop:";
do{cout<<"\n"<<a-1;a=a-1;}while(a>2);

cout<<"\n\nIt is for loop:";
for(a;a>0;a--)
{cout<<"\n"<<a-1;}

cout<<"\n\nYour final value is:";
cout<<"\n"<<a;
return 0;}*/

//pyramid pattern

cout<<"It is a example for basic pattern.\n";
for(int out=1;out<=5;out++)// i make variable 'out' to understand easily.
{
   for(int in=1;in<=out;in++)// i make variable 'in' to understand easily.
   {cout<<in<<" ";}

cout<<"\n";}
return 0;}
// Byeeeeeeeeeeeeeeeeeeee
