#include <iostream> 
using namespace std;
 class Student {
  public: 
  virtual void display() = 0;
   };
class Engineering : public Student 
{
public: 
void display()
 { 
 cout << "Engineering student" << endl; 
 } 
};
 class Medicine : public Student 
 { 
 public: 
 void display() 
 {
  cout << "Medicine student" << endl;
   }
};
 class Science : public Student 
 {
  public: 
  void display() 
  {
   cout << "Science student" << endl; 
   }
 };
  int main()
   {
    Student *students[3];
	 students[0] = new Engineering();
	  students[1] = new Medicine();
	  students[2] = new Science();
	   for(int i = 0; i < 3; i++)
	    {
		 students[i]->display(); 
		 } 
		 return 0;
 }
