 #include <iostream>
using namespace std;
int main()
{
    int num;
   int fact=0;
   cout<<"enter a number:";
   cin>>num;
   for(int i=1;i<=num;++i)
   {
    if( num % i==0){
       fact++; 
    }
   }
   if(fact==2){
    cout<<"prime no."<<endl;
   }

   else{
    cout<<"not a prime no."<<endl;
    
   }



}