#include <iostream>
using namespace std;
class student{
  private:
     string name;
	 int id;
     static const int n = 10;
	 float grade[n];
	 int gradecount;
	 
  public:
   void student_details(string student_name, int student_id){
      name = student_name;
      id = student_id;
	  gradecount = 0;
   }
   
   void addgrade(float newgr){
       if (gradecount < n){
	       grade[gradecount] = newgr;
		   gradecount++;
	   }
	   else{
		   cout<<"Cannot add more grades"<<endl;
	   }
   }
   
   float calculateaverage(){
	   if(gradecount == 0) return 0;
	   float sum = 0;
	   for(int i = 0;i<gradecount;i++){
		   sum += grade[i];
	   }
	   return sum/gradecount;
   }
   
   void displayinfo(){
	   cout<<"Student Name: "<< name;
	   cout<<"\nStudent ID: "<<id;
	   cout<<"\nGrades: ";
	   if(gradecount == 0){
		   cout<< "no grades added";
	   }
	   else{
		   for(int i=0;i<gradecount;i++){
			   cout<<grade[i]<<" ";
		   }
		   cout<< endl;
		   cout <<"\nAverage grade: "<< calculateaverage() <<endl;
	   }
   }
   
};
int main(){
	student student1;
	student1.student_details("Shourya",456);
	student1.addgrade(98.5);
	student1.addgrade(92.5);
	student1.addgrade(96);
	
	student1.displayinfo();
	return 0;
}
/* Student Name: Shourya
Student ID: 456
Grades: 98.5 92.5 96

Average grade: 95.6667
*/
