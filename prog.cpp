// Develop a meny-driven program  to implement  artimetic opertion +,-,*,/,%  using UDF,switch-case and looping. make sure that the program  is endless until  a certain letter is pressed.//
 
#include<iostream>
using namespace std;

int sum(int a, int b)
{
    return a+b;
}

int sub(int a, int b)
{
    return a-b;
}

int mulit(int a, int b)
{
    return a*b;
}

int division(int a, int b)
{
    return a/b;
}

int mode(int a, int b)
{
    return a%b;
}

int main()
{

    int choice;
    int a,b;
do
{
    cout<<endl<<"---------"<<endl;
   cout<<"Press 1 for + "<<endl;
   cout<<"Press 2 for - "<<endl;
   cout<<"Press 3 for * "<<endl;
   cout<<"Press 4 for / "<<endl;
   cout<<"Press 5 for % "<<endl;
   cout<<"Press 0 for exit "<<endl;

   cout<<endl<<"---------"<<endl;
   cout<<endl;
   cout<<"Enter Your Choice :";
   cin>>choice;

   switch (choice)
   {
   case 1:

    cout<<"Enter A :";
    cin>>a;
    cout<<"Enter B :";
    cin>>b;

    cout<<"Sum of "<<a<< " and "<<b<< " is :" << sum(a,b) <<endl;
    break;

    case 2:

    cout<<"Enter A :";
    cin>>a;
    cout<<"Enter B :";
    cin>>b;

    cout<<"Sub of "<<a<< " and "<<b<< " is :"<< sub(a,b) <<endl;
    break;

    case 3:

    cout<<"Enter A :";
    cin>>a;
    cout<<"Enter B :";
    cin>>b;

    if (a > 0 && b > 0)
    {

    cout<<"Mulitiplication of "<<a<< " and "<<b<< " is :"<<mulit(a,b)<<endl;

    }

       
    else
    {

    cout<<"Enter valid value";

    }
    break;
        
    case 4:

    cout<<"Enter A :";
    cin>>a;
    cout<<"Enter B :";
    cin>>b;

    if (a > 0 && b > 0)

    {

    cout<<"division of "<<a<< " and "<<b<< " is :"<<division(a,b)<<endl;
        
    }
        
    else
    {
        cout<<"Enter valid value";

        
    }
    
    break;
        

        
    case 5:
        
    cout<<"Enter A :";
    cin>>a;
    cout<<"Enter B :";
    cin>>b;

    if (a > 0 && b > 0)

    {

    cout<<"Modulus of "<<a<< " and "<<b<< " is :"<<mode(a,b)<<endl;

    }

    else

    {

    cout<<"Enter valid value :"<<endl;

    } 

    break;

    case 0:

    cout<<"Exit" ;

    break;    
   
    default: 
        
    cout<<"Please Enter Vaild Value :"<<endl;

    break;

   }


} while (choice!=0);

    return 0;
}
