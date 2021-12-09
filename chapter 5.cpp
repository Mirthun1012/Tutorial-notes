#include<iostream>
#include<time.h>
#include<cstdlib>
using namespace std;
/* 
//switch:
      It is used to give multiple choices in a program and we can choose anything in that, and
      its syntax is 'switch(){}'. The nice example is, we going to make a 
	  quiz and the participantet can choose any choise.
	  It is similar to if else, but we use switch to make minimum
	  lines of code and it will use in advance program, dont forget to give break.
	  And i tell its one of rule, we must not give the name of the variable
	  in the case, for example:
	  switch(a)
   //Wrong\\ case a==1: // We do not give the variable name because we already pass it in switch.
  //Correct\\ case 1:  // We want to give like this.
	 And then if you want to create a program that find the even number by using switch, 
	 we want to mention the module in the passing area,
	 for eg:
   //Correct\\ switch(a%2) // we want to mention here.
  //Wrong\\    case a%2:  // we do not mention it here.
  And we can also use break for loop.  

// goto:
      It is one of the jump sequence, we use it for to mention skip something in the 
      program. But it has one problem, it will not skip when there is a int datatype in middle of that  
	  and, the the top developers said that, avoid the goto because it will rong
      change the controlflow, so i will use it to check something and i will delete
      it later. Its syntax is "goto 'variable'; 'variable':". 

// random value:
        It was a  awesome and ofcourse it is thoug to understand, and its syntax is 'rand()' and we want to mention a library file 'cstdlib' before use that.
		we will use random value for getting randomly, we can use it in games, in advance program and etc.	
        eg: the coin filp, because it will randomly come sometimes head and sometimes tail,
		    we use random value in coin flip program.
		But its have an one problem, its not actually giving a true random value or true random number, it is pseudo(false) random number,
		it seems random value for human only because computer generate random value by some rules or certain pattern
		or certain algorithm, it is so complex or complicated to understand for human begins (Homo sapiens) 
	    so, it seems like random value for human, for ex: 1,12,2,14,6,7,98,4. this is seems like random value for humans but
	    for computer it just following a big algorithm or big pattern and out it.
		If we make a game, we thought that the number or some obstacals want to not predictable, so we want to change little in a algorithm
		or in a pattern but its not important to know that algorithm, we use seed random number and its syntax is 'srand()',
		we use it for seed a number in a random value generater, when we seed something, the algorithm or pattern change little,
	    so it will vary. for eg: if we give 43 in srand, the random value will differ. But here also a problem occur, when we give 43 in srand
		the same pattern only out, for eg: its out 1,4,6. it will not change, it will change when we changing a value or number in srand(),
		because we not make a true random number, we just tell to follow the another pattern or algorithm. For this, we want to use time 
		because it will vary every seconds, to use time we want to mention the headerfile called 'time.h' or 'ctime', the uses of this headerfile 
		is to read the time of our computer, and its syntax is 'time()', and we want to mention a parameter in it so, we want to mention 0 or NULL,
		when we use this in srand() it will become true random generater because the time will vary in every seconds.    		 
		
// arrays:
        It is used for giving multiple value to the single variable, for example: if you want to create a 100 value,
        we use array there. Its syntax is '[]={}'. And its have some rules, we want to give only one datatype and we cant give 
        multiple datatype in single array. The computer will store the value like 0, 1, 2, 3,....etc and its defaultly start at 0,
		for eg:
		     a1[]={1,2,3};  //the computer will store 0=1, 1=2, 2=3.
        we want to call the value by using its name and square bracket and we want mention the position of the value in that bracket,
		for eg:
		     a1[0];
		It is so important in advance programs, and keep in mind to add curly brackets and call it correctly and
		also dont forget, the computer will defaultly start at 0. We can also give some other data types, for ex: string, char, etc,
		but we can give only one datatype in single array. We want to seperate the element by using comma. And we can also tell its size, 
		by declaring the number of elements on the bracket in the identifier and when we call the array we mention position of the value,
		for eg:
		     a1[3]={1,2,3};
		when we tell its size it will take only the capacity of its size in our memory, and we can give small than its size but
		we can't give more than its size. If we call that without the square bracket it will show the address of that array.
		so, give size for all the arrays you make because it is efficient. And we can also get value from user by only using loop,
		because if we use cin ones it will get only one value so we want to use many cin it will consume more time and storage so only,
		we use loop It is efficient and In array the computer will stop at null(/0), dont worry it will automactly add but it will
		cousume one size of the array.				
*/

int main()
{
//switch
cout<<"What you prefer, windows or mac?\nIf windows type a or mac type b.\n";
char a;
cin>>a;
switch(a)// I pass a to switch
{
case'a': // we use colon for mentioning like equal, and its also a rule.
cout<<"Ohhh, it is a nice choice, i also have windows.\n\n";break;// we use break for to mention stop.
case'b':cout<<"Hmm, i dont know about it, sorry.\n\n";break;
default:cout<<"you dont like two of them,\nare you a fan of android.\n\n";}

//goto
cout<<"It is a example for, goto:\n"<<"Hi";
goto skip; // we use goto here and mention a variable skip.
cout<<"hello"; // it will skip everything between in that.
skip:    // we use skip for countinue here. 
cout<<",buddy.\n\n";

//random value generating
srand(time(NULL)); // we can also give 0 in parameter.
int max=12,min=1;
int s= rand()%(max-min+1)+min; // It is a one of the genral formula for random value generator. 
cout<<"It is a example for random value generator,\n"<<s<<"\n\n";

//arrays
int m[]={1,2,3};
cout<<"It is a example for array,\n"<<m[0]*m[1]<<"\n";
// getting value from user and find it is odd or even 
/*
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{int a[5];
int sum;
cout<<"Give any five numbers.\n";
for(int x=0;x<=4;x++)                       // If you want to run it, use a fresh file.
{int y;
cin>>y;	
a[x]={y};}

sum=a[0]+a[1]+a[2]+a[3]+a[4];
switch(sum%2)
{case 0:cout<<"Hey, your total of your number is "<<sum<<" and that is even.\n\n";break;
case 1:cout<<"Hey, your total of your number is "<<sum<<" and that is odd.\n\n";break;
default:cout<<"Why you dont give any numbers.\n\n";}
 
return 0;}
*/
return 0;}
// Byeeeeeeeeeeeeeeeeeeee
