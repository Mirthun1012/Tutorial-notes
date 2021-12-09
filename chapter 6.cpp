#include<iostream>
#include<cstring> // we mention this for null terminated string. 
using namespace std;
/*
Data manipulating:
               Manipulating means control something, for ex: someone give water and sand and ask to make a wetsand (kalliman)
               we can make a various shapes, statues, and etc with that. Now we going to manipulate the data.
               
// null terminated string(character array):
               null terminated string means string ends with null(/0), the all string have null in the end because the compiler will know string is end
			   when the null is only come. The compiler automatically add null to the string or character array.
			   the another name of null terminated string is character array.
               In C there is no string data type so we use character array in C. So we see some funtions for character array.   
               
			   Some example functions for character array but we want to declare a library file called 'cstring' before use that,
                1. strcpy:
                       We can use this function for copying character array and the first argument is destinaton and
					   the second argument is source file.  
                       for ex:
   				        char s1[5]={"hi"};
						char s2[6]={"hello"};
						cout<<s1<<endl;	
						strcpy(s1,s2); // copying second array to first array.
						cout<<s1;	                     
                       and its syntax is 'strcpy()'.
				           
				2.strcat:
				      We can use it for concardinate (linking or joining) two character arrays, 
					  for ex:
					    char s1[15]={"hi buddy dome"};
					    char s2[5]={"hi"};
					    cout<< strcat(s1,s2); // we are linking two arrays. 	    
                      and its syntax is 'strcat()'.
                
				3.strlen:
				      We can use it for find the lenght of the character array,
				      for ex:
				        char s1[6]={"lenght"};
					    cout<<strlen(s1);
					  and its syntax is 'strlen()'.  
                
				4.strcmp:
                      We can use it for comparing two character arrays, and its syntax is 'strcmp()'.
                      If the two array is same it will return 0, If the first array is smaller than second array
					  it will return less than 0, If the first array is greater than second array it will return greater than 0.  
					  It will compare by using ascii value. First it will check first letter's ascii value of both arrays if it is same,
					  it will goto second letter.
					  for ex:
					    char s1[15]={"hi"}; // first it will check first letter ascii value(h), its ascii value is 104.
						char s2[15]={"compare"};// Its ascii value is 99 (c). first array is greater than second array so it will return positive number.
						cout<<strcmp(s1,s2); // It is comparing.	

				5.strchr:
				      We can use it for checking any character in that character array, and its syntax is 'strchr( ,/*character*\).
					  For eg, if you wanted to find a character 'i' in the array 'terminated', we can use this function in there.
				      But it will out not only 'i' it will out all the character after it, we can mainly use in
				      checking password.
				      for ex:
				        char s1[10]={"terminated"};
						  
				6.strstr:	  	  
					  We can use it for finding the whole word that store in an array that store in another array, its syntax is 'strstr()'.
					  For example:    
                            char a[50]={"hi nanba"};
                            char b[50]={"hi"};
                            cout<<strstr(a,b);
                        In here, we are finding the word 'hi' (that store in second array) that is store on 'hi nanba'. 

// operaters used for string:
            
			1.assignment(=):
			            It is used for assigning the value for variables. It's syntax is '='.
			            For ex:
			                string a="abc";
		  
            2.concatenation(+):
                          It is used for concatenating or linking the two variables. It's syntax is '+'.
                          For ex:
                              a+b;
                              
            3.equality(==):
			          It is used for checking the two variables are equal. It's syntax is '=='.
					  For ex:
					      a==b;
			
			4.Inequality(!=):			                    
			            It is used for checking the two variables are unequal. It's syntax is '!='.
			            For ex:
			                a!=b;
            
			5.Less than(<) and greater than(>):							 
                       Lesser than operater is used for checking which is lesser first variable or secound variable.
                       Greater than operater is used for checking which is greater first variable or secound variable.
                       It will check by ascii value.
					   For ex:
					       char a='a'; //we can also use string datype in here.
                           char b='b'; //also here. 
                           if(a>b) //greater than
                           {cout<<"hi";}
                           else if(a<b) //leasser than
                           {cout<<"hello";}
						It will out 'hello' because the ascii value of 'a' is smaller than the ascii value of 'b'.       
            
            6.Less than or equal than(<=) and greater than or equal(>=):
                       Less than or equal than operater is used for checking which is lesser or equal first variable or secound variable.
                       Greater than or equal than operater is used for checking which is lesser or equal first variable or secound variable.
					   It will also check by ascii value.
					   For ex:
					       string a="a";
                           string b="b"; 
                           if(a>=b)
                           {cout<<"hi";}
                           else if(a=<b) // we can give equal in before or after that lesser than or greater than operater.
                           {cout<<"hello";}
						It will out 'hello' because the ascii value of 'a' is smaller than the ascii value of 'b'.








*/




int main()
{char a='a'; 
char b='b';

if(a>b)
{cout<<"hi";}

else if(a<b)
{cout<<"hello";}

return 0;}
 





