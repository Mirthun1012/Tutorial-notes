#include<iostream> // It will also have functions.
using namespace std;
/*
DRY= Don't Repeat Yourself. 
Based DRY, function is come.

//Function:
        we  use function to reuse or rewrite, it is somelike copy and paste. 
        for example if you want ask a name for 100 people in program , you want to use
        function and very important point is int main() is also a function
        and function is mainly used in games i mean without function there is no game.
        To mention it is function we want to use "()". we do not type the function at inside the another
        function, its called a nesting. function is quiet sensitive so handle that carefully
        because if you give wrong it will maximum not show the error but it will not work properly
        so handle it carefully and also handle it wisely. 
        
// Types of functions:
    1.pre defined funtions. // It is already created functions. eg: functions inside the iostream.
	2.user defined functions. // we created functions. eg: getdata function.         

// Parametrs and Arguments:
                       It will use for get a multiple values. parameters is identifier and arguments is value.
                       It is also use to give a additional information to a function.
                       
// Block:
      block means { (starting point)        
	  (ending point) } this is called block.
	  eg:
	  {  cout<<"hi";
         return 0;  }

// Scope:
       scope means if we declare a variable in a block, the variable can only be use in that block only,
	   we cannot use in another block or outside the block.
       eg:
        {int a;}
		{cout<<a;}, we cannot.  

// Life time:
         life time means the life time of a variable.
		 eg:
		  {// variable a life start here and
		  int a;                             // it is life time of variable a. But we can create a variable a in another block.
		  // variable a life end here} 
		  
// Preprocessor:
         Its mean hashtag. Its syntax is '#'.It is always read first in program.
		 eg:
		  #include<>.		  
*/

#include"calculator.h" /* This mean, we created own library file. Its syntax is " .h". 
                       Its one of the rule is, the program and the library file want to be
					   in same place. We going to use the user-defined library file,
					   we want to mention that ' " .h" '.*/ 

#define NAME "mirthun"; // It is used for give a define or constant value to the variable.
                       // we dont want to mention its data type like int, string, etc.

int getdata() // int is datatype and getdata is function name. Its syntax is ().And dont give a keyword as a name.
{string name; // we use string for store a word value.
int age;
cout<<"Write your name and age.\n";         /* we want to type the function codes in top of the */
cin>>name>>age;                             /*   int main or we want to give the prototype      */      
cout<<"Your name is "<<name<<" ,right.\n"<<"Your age is "<<age<<" ,right.\n\n";
return 0;}

int abcd(int a,int b); // It is a prototype for add() function.

int main()
{cout<<"Hi, it is a important and toughest chapter.\n\n"<<"It is a example for function.\n";
getdata(); // This means we going to call the getdata function.We can type and get a number of datas.
getdata();
// Parametres and arguments
cout<<"It is a example for paramerts and arguments.\n";
abcd(12,12); // we giving arguments here. ',' will seperate the values.
abcd(14,194); // we can use number of times.
cout<<"\n\n";

//#define
cout<<"It is a example for #define.\n"<<NAME;cout<<"\n\n";

// calculater.h
cout<<"It is a example for user-defind header file.\n"<<add(12,1)<<endl<<multi(12,2)<<endl<<divi(1244,2)
<<endl<<sub(12-2,10); 
return 0;}

// Parametres and arguments
int abcd(int a,int b) // we giving parametres here. 
{cout<<a+b<<endl;
return 0;} 
// Byeeeeeeeeeeeeeeeeeeee

