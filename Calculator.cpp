#include<iostream>
#include<cmath>
using namespace std;
class Besic_Arithmetic{
    public:
    float add(float a,float b){
        return a+b;
    }
    float sub(float a, float b){
        return a-b;
    }
    float mul(float a, float b){
        return a*b;
    }
    float div(float a, float b){
        return a/b;
    }
    float rem(int a, int b){
        return a%b;
    }
};

class P_and_L_And_Per:public Besic_Arithmetic{
    int profit=0;
    public:
    float per(float part, float total){
        return part/total;
    }

    int p_L(float Selling_Price, float Coast_price){
       
        profit = Selling_Price - Coast_price;
        if(profit>0){
            cout<<"\n You maked a profit:" <<profit;
          
        }
        else{
            cout<<"\n You Maked a Loss:"<<profit;
        }
    }

    int p_L_per(float Coast_price){
        if(profit>0)
        {
            int per = (profit/Coast_price)*100;
            cout<<"profit Percentage is:"<<per<<"%";
        }
        else{
            int per = (profit/Coast_price)*100;
            cout<<"loss Percentage is:"<<per<<"%";
        }
    }

};
class Power_And_Root : public P_and_L_And_Per
{
    public:
    int square(int a){
        return a*a;
    }
    int cude(int a){
        return a*a*a;
    }
    int power(int a, int b){
        return power(a, b);
    }
};
class algebra : public Power_And_Root{
    float a, b, c, x1, x2;
    public:
    int LinearE(){
         
    cout << "Enter a and b for linear equation (ax + b = 0): ";
    cin >> a >> b;

    if (a != 0) {
        float x = -b / a;
        cout << "Linear Equation Solution x = " << x;
    } else {
        cout << "Invalid equation (a cannot be 0)";
    }
    }

    int QuadraticEquation()
    {

        cout << "Enter a b c: ";
        cin >> a >> b >> c;

        float d = b*b - 4*a*c;

        if(d > 0) {
            x1 = (-b + sqrt(d)) / (2*a);
            x2 = (-b - sqrt(d)) / (2*a);
            cout << "Two real roots: " << x1 << " and " << x2;
    }
    else if(d == 0) {
        x1 = -b / (2*a);
        cout << "Same roots: " << x1;
    }
    else {
        cout << "Roots are imaginary";
    }
    }

    int a_PM_b_squar(){
        cout << "\nEnter a and b for (a + b)^2: ";
    cin >> a >> b;
    cout << "(a + b)^2 = " << (a*a + 2*a*b + b*b) ;

   
    cout << "\nEnter a and b for (a - b)^2: ";
    cin >> a >> b;
    cout << "(a - b)^2 = " << (a*a - 2*a*b + b*b) ;

    }
};

int main(){
    algebra obj;
    float a,b;
    int choice;
    while (1)
    {
        cout<<"\n================Calculator in CPP==================";
        cout<<"\n1.Addition.\n2.Subtraction.\n3.Multiplication.\n4.Division.\n5.Remender.\n\nEnter your Choice to perform operation. ";
        cin>>choice;
        switch(choice){
            case 1: 
            cout<<"\nEnter A And B:";
            cin>>a>>b;
            cout<<"\nAddition: "<<obj.add(a,b);
            break;
            case 2:
            cout<<"\nEnter A And B:";
            cin>>a>>b;
            cout<<"\nsubtraction: "<<obj.sub(a,b);
            break;
            case 3:
            cout<<"\nEnter A And B:";
            cin>>a>>b;
            cout<<"\nMultiplication: "<<obj.mul(a,b);
            break;
            case 4:
            
            cout<<"\nEnter A And B:";
            cin>>a>>b;
            cout<<"\nDivision: "<<obj.div(a,b);
            break;
            case 5:
    
            cout<<"\nEnter A And B:";
            cin>>a>>b;
            cout<<"\nRemender: "<<obj.rem(a,b);
            break;

            case 6:



        }

    }
    return 0;
}