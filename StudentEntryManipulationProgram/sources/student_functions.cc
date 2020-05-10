#include <iostream>
#include <stdio.h>
#include <string>
#include <student_definition.h>
  void Student::small(int AM,std::string Name)
    {
      this->AM=AM;
      this->Name=Name;
      //memcpy((char*) &(this->Name),(const char*) Name,strlen(Name));
      this->Sem=1;
      this->Sub=0;
    }

  void Student::big(int AM,std::string Name,unsigned int Sem)
    {
      this->AM=AM;
      this->Name=Name;
      //strcpy((char*) &(this->Name),(const char*) Name);
      this->Sem=Sem;
      this->Sub=0;
    }
	  

	  
  void Student::extended(int AM,std::string Name,unsigned int Sem,unsigned int Sub)
    {
      this->AM=AM;
      this->Name=Name;
      //memcpy((char*) &(this->Name),(const char*) Name,strlen(Name));
      this->Sem=Sem;
      this->Sub=Sub;
      //this->Pts=Pts;
    }


  void Student::print()
    {
      printf("............................................................\n");
      printf("A.M.---Name---Semester\n");
      printf("............................................................\n");
      std::cout <<AM<<"---"<<Name<<"---"<<Sem<<std::endl;
      //printf("%i %u \n",AM,Sem);
      //printf("%s",Name);
      printf("............................................................\n");
      printf("............................................................\n");
      printf("Subject---Grade\n");
      for(int i=0;i<(this->Sub);i++)
	{
	  printf("%i---",i+1);
	  printf("%.0f \n",(this->Pts)[i]);
	}
      printf("M.O.=%.1f\n",MO);
      printf("............................................................\n");
	
    
    }
  void Student::SmallPrint()
    {
	    std::cout <<AM<<"---"<<Name<<"---"<<Sem<<std::endl;
    }


  void Student::copy(Student src)
    {
      //this->AM=am;
      this->AM=src.AM;
      //this->Name=name;
      this->Name=src.Name;
      this->Sem=src.Sem;
      this->Sub=src.Sub;
      this->Pts=src.Pts;
      //this->Pts=(float*) new float [1];
      this->MO=src.MO;
      //this->mo();
    }
    
    void Student::clone(Student src,int am,std::string name)
    {
      this->AM=am;
      //this->AM=src.AM;
      this->Name=name;
      //this->Name=src.Name;
      this->Sem=src.Sem;
      this->Sub=src.Sub;
      if(this->Sub!=0)
	{
	  this->Pts=(float*) new float[1];	
      	  for(int i=0;i<this->Sub;i++)
	  this->Pts[i]=src.Pts[i];
	}
      else
      	{      
	  this->Pts=(float*) new float[1];	
	  this->Pts[0]=0;
	}
      //this->Pts=src.Pts;
      this->MO=src.MO;
    }
  void Student::grade(float s,float g)
    {
      (this->Pts)[(int)(s)-1]=g;
    }

  void Student::mo()
    {
    float tmp=0;
    int sub=(int) Sub;
    for(int i=0;i<sub;i++)
      {
	tmp+=Pts[i];
      }
      //printf("test %f\n",tmp);
      //printf("test %i\n",sub);
    this->MO=(tmp/sub);
    }
