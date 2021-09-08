//Harry_based c++ tutorial
#include <iostream>
// #include "cal.cpp"
#include <cstring>
#include <math.h>
using namespace std;

// int add(int x,int y )
// {    int z;
//     z = x+y;
//     return z;
// }
// class Emp{
//     public:
//     string name;
//     int salary;
//     void printdetails()
//     {
//         cout << "the name of the person is " << this->name << " and the salary is " << this->salary << " rupuees"
//              << "\n";
//     }
// };
// int main()
// {

//     int age;
//     cout<<"enter your age: ";
//     cin >> age;
//     switch(age)
//     {
//     case 12:
//         cout << "You are 12 years old";
//         break;
//     case 13:
//         cout << "You are 13 years old";
//         break;

//     default:
//         cout<<"You are neither 12 nor 18 years old";
//         break;
// int val = 0;

// while(val<=10)
// {
//     cout<<"Hello ppl:-"<<val<<endl;
//     val = val+1;
// }
// do
// {
//     cout << "we have the value in here " << val << "\n";
//     val = val + 1;
// } while (val <= 20);

// for (int i = 0; i < 20; ++i)
// {
//     cout<<"the value is: "<<i<<"\n";
// }

// int x,y;
// cout<<"Enter the first number"<<"\n";
// cin>>x;
// cout<<"Enter the second number"<<"\n";
// cin>>y;
// cout<<"The function returned:- "<<add(x,y);

// int marks[10];
// for(int i = 0; i<=10; ++i)
// {
//     cout<<"marks of "<<i<<"th student is "<<marks[i] <<"\n";
//     // cin>>marks[i];

// }
// int age;
// cout << "enter here your age: ";
// cin >> age;
// if (age > 150 || age < 2)
// {
//     cout << "YO you are a legend";
// }
// else if (age >= 18)
// {
//     cout << "You are adult now";
// }

// else
// {

//     cout << "hey kiddo ";
// }

// int value[10];
// for (int i = 0; i <= 10; i++)
// {
//     cout << "Enter the value in here " << i << "\n";
//     cin >> value[i];
// }
// for (int i = 0; i <= 10; i++)
// {
//     cout << "Marks of " << i << "th student is " << value[i] << "\n";
// }

// int arr2d[2][3] = {
//     {1, 2, 3},
//     {4, 5, 6}

// };
// for (int i = 0; i < 2; i++)
// {
//     for (int j = 0; j<3; j++)
//     {
//         cout << "the values are: " << i << ", " << j << " is " << arr2d[i][j]<<"\n";
//     }
// }

// string name = "peeyal";
// int a = 12;
// float b = 91.2;
// cout << (float)a / 5 << "\n";
// cout << (int)b << endl;

// cout << "the length of the string is " << name.length() << endl;
// cout << "the name is " << name.substr(0, 3) << endl;
// cout << "the name is " << name.substr(3, 6);
// int a=31;
// int*ptra;
// ptra = &a;
// cout<<*ptra;

// Emp abhirup;
// abhirup.name = "Peeyal";
// abhirup.salary = 100000;
// abhirup.printdetails();
// cout << "the name of the person is " << abhirup.name << " and the salary is " << abhirup.salary << " rupuees"
//      << "\n";

//     return 0;
// }

// typedef struct employee
// {
//     /* data */
//     int ID;
//     string Name;
//     char val;
//     float salary;
// } ep;
// union money
// {
//     /* data */
//     int rice;

//     char pen;
//     float germs;
// };
// int main()
// {

//     enum Meal
//     {
//         breakfast,
//         lunch,
//         Snacks,
//         Dinner
//     };
//     cout << breakfast;
//     cout << lunch;
//     cout << Snacks;

//     cout << Dinner;

//   int x,y,z=0;
//   cout<<"Enter the the first number: ";
//   cin>>x;
//   cout<<"Enter the the second number: ";
//   cin>>y;
//   cout<<++x<<" "<<y++<<"\n";
//   cout<<"New value of Y "<<y;
//   cout<<((x>y)?x:y)<<"\n";
//   cout<<"val"<<(z=x)<<"\n";
//   cout<<(x>y);

// int a[]={1,2,3,4,5};
// for(int i=0;i<5;i++){
//     cout<<i<<"\n";

// struct employee abhirup;
// ep abhirup;
// ep peeyal;
// ep sinha;
// union money val;
// val.rice = 34;
// val.germs = 9012.22;
// val.pen = 'G';

// cout<<val.rice<<"\n";

// peeyal.ID = 96;
// abhirup.Name = "Abhirup";
// abhirup.val = 'B';
// abhirup.salary = 550000.50;
// cout << "the value of ID is: " << peeyal.ID << "\n";
// cout << "the value of Name is: " << abhirup.Name << "\n";
// cout << "the value of val is: " << abhirup.val << "\n";
// cout << "the value of salary per month is: " << abhirup.salary << "\n";

/*int a = 290;
int b = 230;
int c = 291;

int main()
{
    if (a > b)
    {
        if (a > c)
        {

            cout << "C is greater than A "
                 << "\n";
        }
        else
        {
            if (b > c)
            {

                cout << "B is less than A"
                     << "\n";
            }
            else
            {
                cout << "B is less than C";
            }
            return 0;
        }
    }
}*/

// string val[] = {"Abhirup", "sfheiufh", "efheufhr", "peeyal", "sinha", "Rahul",
//                 "Rohit", "Rk", "nilu", "wahed", "pritam", "kutta"};

// int a[10];
// int main()
// {
//     for (int i = 0; i <= 10; i++)
//     {
//         cout<< "enter the number in the array: ";
//         cin >> a[i];
//     }
//     for(int i=0; i<=10; i++)
//     {

//         cout<<a[i];
//     }

//     return 0;
// }

// int main(){
//  int a =20;
//  int b = 3520;
//  int c = 40;

//     if((a>b)&&(a>c)){
//         cout<<"a is greater than all";    }
//     else{
//         cout<<"a is less than all"<<"\n";

//     }
//     if ((b>a)&&(b>c)){
//         cout<<"b is greater than all";    }

//         return 0;
// }

// for (int i = 0; i <= 25; ++i)
// {
//     cout << val[i] << " " << endl;
// }
// int i = 10;
// while (i<80)

// {
//     cout<<i<<"\n";
//     i =i+1;

// int main() {
// int month_number;
// cout << "Enter the number in here: ";
// cin >> month_number;
// switch (month_number)

// {
// case 1:
//     cout << "January";
//     break;
// case 2:
//     cout << "Feburary";
//     break;
// case 3:
//     cout << " March";
//     break;
// case 4:
//     cout << " April";
//     break;
// case 5:
//     cout << " May";
//     break;
// case 6:
//     cout << "June";
//     break;
// case 7:
//     cout << "July";
//     break;
// case 8:
//     cout << " August";
//     break;
// case 9:
//     cout << "September";
//     break;
// case 10:
//     cout << " October";
//     break;
// case 11:
//     cout << " November";
//     break;
// case 12:
//     cout << " December";
//     break;

// default:
//     cout << "none above them above";
//     break;
// }
// return 0;
// }

// }

// pointer
// int m = 100;
// int *p = &m;
// cout<<p<<&m<<endl;

/*double add(double x, double y)
{
    return x + y;
}
int add(int x, int y)
{
    return x + y;
}

int main()
{

    double a, b, c;
    cout << "Enter the first number in here: ";
    cin >> a;
    cout << "Enter the second number in here: ";
    cin >> b;
    cout<<"The store value is: "<<(c+=add(a,b))<<endl;


    if (c<=50)
    {
        cout<<"It is a SMALL NUMBER!! ";
    }
    else
    {
        cout<<"it is BIG NUMBER!!";
    }
    
    return 0;
}
*/

class Student
{
public:
    int id;
    string name;
    void set_data(int i, string n)
    {
        id = i;
        name = n;
    }
    void get_data()
    { 
       
        cout << "name: " << name<<"\n";
        cout << "Id: " << id;
    }
};

int stu_id;
string stu_name;
int main()
{
    Student s1;
    cout << "Enter the name of Student: ";
    cin >> stu_name;
    cout << "Enter the Id: ";
    cin >> stu_id;
    s1.set_data(stu_id, stu_name);
    s1.get_data();
}