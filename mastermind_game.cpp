#include<iostream>
#include<ctime>
#include<stdlib.h>
#include<cstdlib>
using namespace std;

int main(){
	
	int num1,num2,num3;
	int usernum1, usernum2, usernum3;
	int compnum1,compnum2,compnum3;
	int compguess1, compguess2, compguess3;
	int round=0;
	int i=0;
	char userchoice;
	char Y='Y';  //called initialising a character, currently Y has no value but when put in '', it gets a value (notes to self)
	char N='N';

	
	cout<<"------------------------------"<<endl;
	cout<<" Welcome to Mastermind Lite !"<<endl;
	cout<<"------------------------------"<<endl;
	
	 
	
       srand(time(0));
       compnum1=(rand()%5)+1;
       compnum2=(rand()%5)+1;
       compnum3=(rand()%5)+1;
    
    
      /* cout<<compnum1<<endl;
       cout<<compnum2<<endl;
       cout<<compnum3<<endl;
       To check the randomly generated number and efficiently test different possibilities*/
   
   
        cout<<"Choose your first pass code digit: ";
	    cin>>usernum1;
	    
	    cout<<"Choose your second pass code digit: ";
	    cin>>usernum2;
	    
	    cout<<"Choose your third pass code digit: ";
	    cin>>usernum3;
	    
	    cout<<"The computer has selected their passcode! "<<endl;
	
    
    
    
    do{ 
	    
	     i+=1; round+=1;
    	cout<<endl<<endl<<"Round "<<round<<endl;
    	
    	cout<<"Guess the first number: ";
    	cin>>num1;
    	
    	cout<<endl<<"Guess the second number: ";
    	cin>>num2;
    	
    	cout<<endl<<"Guess the third number: ";
    	cin>>num3;
    	
    	cout<<endl<<endl<<"Result"<<endl;
    	
    	   if( num1==compnum1){
    		cout<<num1<<" is correct!"<<endl;
    		}else if(num1== compnum2){
    			cout<<num1<<" is in the wrong position"<<endl;	
			}else if(num1 == compnum3){
			cout<<num1<<" is in the wrong position"<<endl;
			}	else{
				cout<<num1<<" does not appear in the passcode"<<endl;
			}
			
			
			if( num2==compnum2){
    		cout<<num2<<" is correct!"<<endl;
    		}else if(num2== compnum1){
    			cout<<num2<<" is in the wrong position"<<endl;	
			}else if(num2 == compnum3){
			cout<<num2<<" is in the wrong position"<<endl;
			}	else{
				cout<<num2<<" does not appear in the passcode"<<endl;
			}
			
			
			
			
		    if( num3==compnum3){
    		cout<<num3<<" is correct!"<<endl;
    		}else if(num3== compnum2){
    			cout<<num3<<" is in the wrong position"<<endl;	
			}else if(num3 == compnum1){
			cout<<num3<<" is in the wrong position"<<endl;
			}	else{
				cout<<num3<<" does not appear in the passcode"<<endl;
			}
			
			
			 srand(time(0));
       compguess1=(rand()%5)+1;
       compguess2=(rand()%5)+1;
       compguess3=(rand()%5)+1;
       
       cout<<"The computer guesses "<<compguess1<<" "<<compguess2<<" "<<compguess3<<endl;
       
            if((usernum1==compguess1)&&(usernum2==compguess2)&&(usernum3==compguess3)){
				cout<<"The computer won in "<<round<<" tries! better luck next time"<<endl;
        }
			
			if((num1==compnum1)&&(num2==compnum2)&&(num3==compnum3)){
				cout<<"You solved the pass code in "<<round<<" tries! Good job"<<endl;
				cout<<"Play again? (Y/N)"<<endl;
				cin>>userchoice;
					if(userchoice=='Y'){
				  
				  srand(time(0));
		       compnum1=(rand()%5)+1;
		       compnum2=(rand()%5)+1;
		       compnum3=(rand()%5)+1;
    
						
				i=0;
				round=0;
			} else{
				round+=6;
				cout<<"End of Game"<<endl;
			}
			} 
			
					
	}while(i<5, round<5);
	
	
	return 0;
	
}
