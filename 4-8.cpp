#include<iostream>
using namespace std;
class Physics;
class Chemistry;
class Mathematics;
class Marks{
	protected:
		int rollno;
		string name;
		int marks[3];
	public:
		Marks(){
		}
		Marks(int roll, string n){
			rollno = roll;
			name = n;
		}
		void display(){
			cout<<"Roll Number:   "<<rollno<<" \n ";
			cout<<"Name:     "<<name<<" \n ";
		
		}
		friend int getTotalMarks(Marks &, Physics&, Chemistry&,  Mathematics&);
};
 class Physics: public Marks{
 	private:
 		int mark;
 	public:
 		Physics(){
		 }
 		Physics(int mark){
 			this->mark = mark;
		 }
		 friend int getPhysicsMarks(Physics &);
 	
 };
 class Chemistry: public Marks{
 		private:
 		int mark;
 	public:
 		Chemistry(){
		 }
 		Chemistry(int mark){
 			this->mark = mark;
		 }
		 friend int getChemistryMarks(Chemistry &);
 	
 	
 }; 
 class Mathematics: public Marks{
 	private:
 		int mark;
 	public:
 		Mathematics(){
		 }
 		Mathematics(int mark){
 			this->mark = mark;
		 }
		 friend int getMathematicsMarks(Mathematics &);
 };
 //The function to return Physics marks
  int getPhysicsMarks(Physics &p){
 	
 	
 	return p.mark;
 }
 //The function to return Chemistry marks
  int getChemistryMarks(Chemistry &c){
 	
 	
 	return c.mark;
 }
 //The function to return Mathematics mark
 int getMathematicsMarks(Mathematics &m){
 	
 	
 	return m.mark;
 }
 
 int getTotalMarks(Marks&ma,Physics&p, Chemistry&c,  Mathematics&m){
 	
 	int first = getPhysicsMarks(p);
 	int second = getChemistryMarks(c);
 	int third = getMathematicsMarks(m);
 	ma.marks[0] = first;
 	ma.marks[1] = second;
 	ma.marks[2] = third;
 	int sum = 0.0;
 	for(int i=0; i<3; i++){
 		sum += ma.marks[i];
	 }
 	return sum;
 }
int main(){


int n;
cout<<"Enter the total number of students in the class\n";
cin>>n;
double totalSum = 0.0;
int physics;
int chemistry;
int maths;
string name;
Marks marks[n];
double total [n];
for(int i=0; i<n; i++){
	cout<<"Student "<<(i+1)<<endl;
	cout<<"Enter the student name:  "<<endl;
	cin>>name;
	Marks J(i+1,name);
	marks[i] = J;
	cout<<"Enter the student Physics marks:  "<<endl;
	cin>>physics;
	cout<<"Enter the student Chemistry marks:  "<<endl;
	cin>>chemistry;
	cout<<"Enter the student Mathematics marks:  "<<endl;
	cin>>maths;
	Physics p1(physics);
Chemistry c1(chemistry);
Mathematics m1(maths);
	total[i] = getTotalMarks(marks[i],p1,c1,m1);
	
}


for(int i=0; i<n; i++){
	cout<<"Student:   "<<(i+1)<<endl;
	marks[i].display();
	cout<<"Total  marks:   "<<total[i]<<endl;
}
double average = 0.0;
for(int i=0; i<n; i++){
	totalSum += total[i];
}
cout<<"Total marks of the class is:   "<<totalSum<<"\nThe average marks of the class is:    "<<totalSum /n;


}
