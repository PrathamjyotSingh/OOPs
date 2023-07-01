#include<iostream>
using namespace std;
class student{
    char name[50];
    int rn;
    char degree[5];
    char hs[2];
    float cg;
public :
void addDetails()
{
    cout<<"Enter Name: "<<endl;
    cin>>name;
    cout<<"Enter Roll Number: "<<endl;
    cin>>rn;
    cout<<"Enter Degree: "<<endl;
    cin>>degree;
    cout<<"Enter Hostel: "<<endl;
    cin>> hs;
    cout<<"Enter CGPA: "<<endl;
    cin>> cg;
}
void updateDetails()
{
    cout<<"Enter Name: "<<endl;
    cin>> name;
    cout<<"Enter Roll Number: "<<endl;
    cin>> rn;
    cout<<"Enter Degree: "<<endl;
    cin>> degree;
    cout<<"Enter Hostel: "<<endl;
    cin>> hs;
    cout<<"Enter CGPA: "<<endl;
    cin>> cg;
}
void updateCGPA()
{
  
    cout<<"Enter CGPA: "<<endl;
    cin>> cg;
}
void updateHostel()
{
    cout<<"Enter Hostel: "<<endl;
    cin>> cg;
}
void displayDetails()
{
     cout<<"Name : "<< name<<endl;
    cout<<"Roll Number : "<< rn<<endl;
    cout<<"Degree : "<< degree<<endl;
    cout<<"Hostel : "<< hs<<endl;
    cout<<"CGPA : "<< cg<<endl;
}
}s;
int main()
{   int op=55;
    while(op!=0)
    {
    cout<<"Enter choice:\n1. Add Details\n2. Update Details\n3. Update CGPA\n4. Update Hostel\n5. Display Details\n6. Exit"<<endl;
    cin>>op;
    if(op==6)
    break;
   switch(op)
   {
     case 1:
    s.addDetails();
    break;
    case 2:
    s.updateDetails();
    break;
    case 3:
    s.updateCGPA();
    break;
    case 4:
    s.updateHostel();
    break;
    case 5:
    s.displayDetails();
    break;
   }
}
}
