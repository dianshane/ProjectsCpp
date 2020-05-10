//Class Student for student entry manipulation program
#ifndef student_definition_h
#define student_definition_h
#include <string>
  class Student
    {
      //attributes
      public:
	int AM;
	std::string Name;
	unsigned int Sem;
      private:
	unsigned int Sub;
	float * Pts;
	float MO;

      //functions
      public:
	void small(int,std::string);
	void big(int,std::string,unsigned int);
	void extended(int,std::string,unsigned int,unsigned int);
	void grade(float ,float);
	void print();
	
	void SmallPrint();
	void clone(Student,int,std::string);
	void copy(Student);
	void mo();
	
      //setters and getters 
      public:
      unsigned int getSub(void)
	{
	  return Sub;
	} 
      void setSub(unsigned int Sub)      
	{
	  this->Sub=Sub;
	}
      float *getPts(void)
	{
	  return Pts;
	}
      void setPts(float *Pts)
	{
	  this->Pts=Pts;
	}
    };
#endif
