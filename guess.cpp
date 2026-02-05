#include<iostream>
#include<stdio.h>
using namespace std;
const int ans=45;

 class game {
     int number;
int attempts=0;
public:

     void input()
     {
        cout<<"Enter the number between 1 and 100"<<endl;
        

        while(true){
        cin>>number;
     attempts++;
        int sub=abs(number-ans);
         
        if(number==ans) {
        
cout<<"bingooooo!!!"<<ans<<"correct number"<<endl;
cout<<"attempts"<<attempts<<endl;
break;
     } 
            else if (sub<=2 )
            {
                cout<<"very nearrrrrrr"<<endl;
                
            }
          else  if( ans>number)
            {
                cout<<"number is too low"<<endl;
            
            }
            else if(ans<number){
                cout<<"number is too high"<<endl;

            }
        
    } }
 };
 int main()
 {
    game g1;
    g1.input();
    return 0;
 }