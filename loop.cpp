#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int minTwoNum(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int maxOfThree(int a, int b, int c)
{
    if (a >= b && a >= c)
    {
        return a;
    }
    else if (b >= a && b >= c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int factorial(int n)
{

    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int factn = factorial(n);
    int factr = factorial(r);
    int factnmr = factorial(n - r);
    return factn / (factr * factnmr);
}

void show()
{
    cout << "!Welcome" << endl;
    cout << "Dev" << endl
         << endl;
}

void add(int a, int b)
{
    int res = a + b;
    cout << "Addition result = " << res << endl;
}

int square(int n)
{
    int res = n * n;
    return res;
}

//  void show()
//     {
//         cout << roll << " = " << name << endl;
//     }
class Employee
{
public:
    int id;
    string name;
    float salary;
    string department;

    void display()
    {
        cout << "ID: " << id << " | Name:  " << name << " | Dept: " << department << " | Salary: $" << salary << endl;
    }

    void applyRaise(float percent)
    {
        salary += salary * (percent / 100);
    }
    bool isHighEarner(float threshold)
    {
        return salary >= threshold;
    }
};

// class Employee
// {
//     int id;
//     string name;
// } ;

class Student
{
private:
    string name;
    int rollNo;
    double gpa;

public:
    // ── 1. DEFAULT constructor ────────────────────────────
    Student() : name("Unknown"), rollNo(0), gpa(0.0)
    {
        cout << "[Default ctor] Student created\n";
    }

    // ── 2. PARAMETERIZED constructor ──────────────────────
    Student(string n, int r, double g) : name(n), rollNo(r), gpa(g)
    {
        cout << "[Param ctor]   " << name << " created\n";
    }

    // ── 3. PARAMETERIZED with default argument ────────────
    Student(string n, int r) : name(n), rollNo(r), gpa(0.0)
    { // overloaded
        cout << "[2-arg ctor]   " << name << " (no GPA)\n";
    }

    // ── 4. COPY constructor ───────────────────────────────
    Student(const Student &src) : name(src.name), rollNo(src.rollNo), gpa(src.gpa)
    {
        cout << "[Copy ctor]    Copied from " << src.name << "\n";
    }

    void display() const
    {
        cout << "  Roll: " << rollNo << "  Name: "
             << name << "  GPA: " << gpa << "\n";
    }
};
// class Parent
// {
// public:
//     int p = 5;
// };

// class ChildA : public Parent
// {
// };
// class ChildB : public Parent
// {
// };

// class GrandChild : public ChildA, public ChildB
// {
// };

// class Login
// {
// private:
//     int id;
//     int pass;

// public:
//     Login(const Login &src) : id(src.id), pass(src.pass)
//     {
//         cout << "Copy Constructor Copied from " << src.id;
//     }
// };

// class Login ()
// {
//     private:
//     int id;
//     int pwd;

//     public:
//     Login() : id(45), pwd(25)
//     {
//      cout<<"Constructor Created";
//     }
// };

class Parent
{
public:
    virtual void show()
    {
        cout << "Maruti Suzuki-->Alto" << endl;
    }

    virtual void dance()
    {
        cout << "I hate Dancing🤬" << endl;
    }
};
class Child : public Parent
{
public:
    void show()
    {
        cout << "Toyota-->Fortuner" << endl;
    }

    void partyAllTime()
    {
        cout << "Party all the time" << endl;
    }
};
int main()

{
    /*
    int main(){

    // cout<<"Dev";
    // float b=6.9
    // cout<<b;/

    // string a = "Dev";
    // string b ="Roy";
    // cout<<a+b;

    // int c;
    // float a=5.0;
    // float  b=3.0;
    //  c= a/b;
    //  cout<<c;

       // Relational Operator

       // (==) equal to
       // 	int a,b;
       // a=6;
       // b=9;

       // cout<< (a==b);     //true (1)  false(0)

       // (>) greater then
       // a =7;
       // b=6;
       // cout<<(a>b);

       // (<) less then

       // a=2;
       // b=5;
       // cout<<(a<b);

       // (>=) greater then equal to
       // a=3;
       // b=2;

       // cout<<(a>=b);

       // (<=) less than equal to

       // a=1;
       // b=1;
       // cout<<(a<=b);

       // (!=) not equal to
       // a=5;
       // b=3;
       // cout<<(a!=b);

       // 	Logical Operator
       // AND (&&)
       // Or  (||)
       // Not (!)

       // int a =6;
       // int b =6;
       // int c=2;
       // int d=9;

       // bool ans= (a==b) && (c==d);
       // cout<<ans;

       // BITWISE Operator - Applies btw the bits of the number..

       // int a =4;
       // int b=5;

       // int c=(a &b);
       // cout<<c;

       // n >> k then n/2^k

       // Swap two numbers without using a temp var
       // 	int a =2;
       // 	int b=3;

       // 	a=(a^b);
       // 	b=(a^b);
       // 	a=(a^b);

       // 	cout<< a<<" " << b;

       // int n;
       // cin>>n;

       // if(n%2 ==0){
           //     cout<<n<<" Multiple of 2 "<<endl;
       // }
       // else{
           //     cout<<n<<" is not a multile of 2"<<endl;
       // }

       // input a,b-> print a or b largest
       // input a,b,c -> print largest  a->b->c

       // cout<<minTwoNum(5,6)<<endl;

       // cout<<maxOfThree(1,2,3)<<endl;

       //  Calculate nCr value.. formula= n!/(r! * n-r!)

       // 	int n=6, r=3;

       // 	cout<<nCr(n,r);


       int num = 80;
       for (;;)
       {
           //    Initialize
              if (num < 74)
              {
               break;
           }
              // condition
              if (num % 2 == 0)
              {
                  cout << num << " ";
                  }
                  // updation
              num--;
           }
           return 0;



         int num = 12345;     // 65000- not greater than this... Max capacity
       cout << "Original Num = " << num << endl;
       int rem = num % 10;     // % cannot be applied to float or double only applied to whole number..
       cout << "rem = " << rem << endl;

       num = num / 10;
       cout << "Modified Num: " << num<<endl;



      int value =100;

      int result = log10(value);

              cout<<"The log10 of "<<value<<" is " << result<<endl;



             //    Palindrome / Reverse

       int n, temp;
       int rev = 0;

       cout << "Enter any number : ";
       cin >> n;
       temp = n; // to store the value of n at temp place to further check if the number is palindrome or not..
   cout << "Original Number: " << n << endl;

   while (n > 0)
   {
    int rem = n % 10;
    rev = rev * 10 + rem;
    n = n / 10;
   }

   if (temp == rev)
   {

   cout << "The number is palindrome : " << rev;
   }
   else
   {
       cout << "The number is not  palindrome : " << rev;
   }




   // Prime or not

   int n;

   cout << "Enter a number:";
   cin >> n;

       bool status = true;

       for (int i = 2; i < n; i++)
       {
           if (n % i == 0)
           {
               status = false;
               break;
               }
           }

           if (status == true)
       {
           cout << n << " Is a Prime Number: " << endl;
       }
       else
       {
           cout << n << " Is not  a Prime Number: " << endl;
           }





        }

        // funcction
        show();
        show();

        add(5,6);
        add(20,40);
        cout<<"Square of a number is: "<<square(5);

        // Multiplicatio Tables
        int k,d;
    cout<<"Enter a number: "<<endl;
    cin>>k;

    cout<<"Enter number to check divisibility: "<<endl;
    cin>>d;

    for (int i = 1; i <= 10; i++)
    {
        int result = k*i;

        if(result %d ==0)
        {

        cout << k << " * " << i << " = " << result << endl;
    }

}
 Class and Object/Instance

    // Stack memory allocation for class object.. It
Student s1;
    s1.roll=69;
    s1.name="Dev";
    Student s2;
    s2.roll=22;
    s2.name="Rooh";


    s1.show();
    s2.show();

    // Heap memory allocation for class object.. It will not be destroyed until we delete it explicitly.. It will not be destroyed when the function ends.. It will be destroyed when we delete it explicitly..
    Student *ptr1 = new Student();
    Student *ptr2 = new Student();

    ptr1->roll = 69;
    ptr1->name = "Dev";
    ptr1->show();
    delete ptr1;

    ptr2->roll = 22;
    ptr2->name = "Rooh";
    ptr2->show();

    delete ptr2;
    //-----------------------------
    //    Assignment Medium
    Employee team[3];
    team[0].id = 101, team[0].name = "Dev";
    team[0].salary = 22000;
    team[0].department = "HR";
    team[1].id = 101, team[1].name = "Rooh";
    team[1].salary = 65000;
    team[1].department = "IT";
    team[2].id = 101, team[2].name = "Roy";
    team[2].salary = 97000;
    team[2].department = "Management";

    for (int i = 0; i < 3; i++)
    {
        team[i].applyRaise(10);

        team[i].display();

        if (team[i].isHighEarner(70000))
        {
            cout << "Status: High Earner" << endl;
        }
        else
        {

        cout << " Status: Not High Earner" << endl;
        }
    }
//  --------------------------------------------------------------------


    cout << "Creating Objects" << endl;
    Student s1;                 // default
    Student s2("Dev", 69, 9.0); // Parametrized
    Student s3("Roy", 59);      // overloaded
    Student s4(s2);

    cout << "Student Info:- " << endl;
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    */

    // -------------------------Visibility Modes -----------------------------
    // .public
    // .protected
    // .private

    /*

        ------------------------NOTES-----------------------------
        // inheritance via public mode - then no changes in visibility of members of base class in derived class.

        // inheritance via protected mode - then all public and protected members of base class become protected in derived class.

        // inheritance via private mode - then all public and protected members of base class become private in derived class.

        // ---------------Ambiguity Solution(Scope Resolution)--------------------------

        // ------- Differnt classes but same name and used inside a child class causes ambiguity.. To resolve this ambiguity we can use scope resolution operator to specify which class's member we want to access.

        // // class Child: public ParentA,ParentB
        // {
            //     public:int num,int num;
            // }
        // Child obj;

        // obj.num=5;
        // obj.ParentA::num=5;
        // --------------------------------------------------------

        // gc.p = 5; // Error: 'p' is ambiguous because it is inherited from both ParentA and ParentB
        GrandChild gc;

        // gc.p=5 Diamond Problem
        gc.ChildA::p = 69; // Accessing 'p' from ParentA
        gc.ChildB::p=22; // Accessing 'p' from ParentB
        cout << gc.ChildA::p << " " << endl;
        cout << gc.ChildB::p << " " << endl;
        -----------------------------END LINE-----------------------------

    -------------------------Method Overriding-----------------------------
    Rule:
    .Minimum two classes.
    . Inheritance should be there.
    .Both should have same function name with same signature-(Prototype).
    .Virtual keyword is mandatory for parent class.
    .ONLY WORKS IN HEAP( -----NEW KEYWORD-----).


    Parent *p1 = new Parent();   // HEAP

        // p1->show();
        // p1->dance();

        Child *c1= new Child();
        c1-> show();
        c1->partyAllTime();


        Parent *p2 = new Child();
        p2->dance();
        p2->show();
        // p2->partyAllTime();  //Error:- Parent dont know about the PartyAllTime();

        Child *c2 = (Child *) p2;
        c2-> partyAllTime();
        return 0;
     --------------------------------END-------------------------------------
-----------------------------------Abstraction------------------------------
Notes:
.Only can be  created when there is  atleast Pure Virtual Func.
.Pure virtual = virtual is always =0.
.It uses  only pointers OR Array of  Pointers, no Stack OR  HEAP.
*/


      

}