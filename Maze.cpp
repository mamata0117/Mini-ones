#include<iostream>
using namespace std;
 
 
int maze[3][3]=
    {{1,1,0},
    {0,1,1},
    {1,0,1}   
      };
      int sol[3][3]={0};

     bool solve (int i, int j) {

        cout<<"Visiting ("<<i<<","<<j<<")"<<endl;
        if(i==2 && j==2){
            cout<<"Reached the destination at ("<<i<<","<<j<<")"<<endl;
           sol[i][j]=1;
           return true;
        }
      if(i>=3|| j>=3 || maze[i][j]==0) { 
        cout<<"Cannot move ,path is blocked ("<<i<<","<<j<<")"<<endl;  
        return false;
           }  
// Mark the current path as part of the solution
        sol[i][j]=1;
// it moves down such as from 0,0 to 1,0 and all
cout<<"Trying down to ("<<i+1<<","<<j<<")"<<endl;
          if(solve(i+1,j)){
            return true;}
                         
//it move right such as from 0,0 to 0,1 and all
cout<<"Trying right to ("<<i<<","<<j+1<<")"<<endl;
         if(solve(i,j+1)){
            return true;
          } 
         //backtracking step and it unmarks the current path as part of the solution
         cout<<"Backtracking from ("<<i<<","<<j<<")"<<endl;
         sol[i][j]=0;
         return false;
         //if you encounter a position and cant move down or right then you come back to the original position and try other path
        }
      int main()
      { cout << "Let's solve the maze:\n";
                   for(int i = 0; i < 3; i++) {
                               for(int j = 0; j < 3; j++) {
                               cout << maze[i][j] << " ";
                                       }
                                   cout << endl;
                                        }
               cout << "Let's begin solving the maze...\n";                           
        // Start solving the maze from the top-left corner (0,0)
        if (solve(0,0)) {
            
        for(int i =0;i<3;i++)
        { for(int j=0;j<3;j++)
            {
          cout<<sol[i][j]<<" ";
            }
          cout<<endl;
        } 
    }
    else{
        cout<<"There's no path to the destination."<<endl;
    }


      return 0;
   
       }
