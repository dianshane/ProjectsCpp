#include <student_definition.h>
#include <stdio.h>
#include <stdlib.h>
#include <functions.h>
    void start()
      {
	printf("............................................................\n");
	printf("............................................................\n");
	printf("Welcome to Student Manipulation Program!\n");
	printf("For testing purposes there are two students already created.\n");
	printf("These are Mary (with A.M.=1) and John (with A.M.=2).\n");
	printf("The rest of the info for each of them is generated randomly.\n");
	printf("Feel free to try out any command on them!\n");
	printf("Have fun!!\n");
	printf("............................................................\n");
	printf("............................................................\n");
      }



  Student *initiallizer(Student *obj) //generates initial 2 students so table is not empty and all commands may be used
    {
      Student *ptr=new Student [2];
      for(int j=0;j<2;j++)
	{	
	  ptr[j].AM=j+1;
	  if(j==0)
	    ptr[0].Name="Mary";
	  if(j==1)
	  {
	    ptr[1].Name="John";
	    //ptr[j].Sem=3;
	  }
	  ptr[j].Sem=(rand()%10)+1; //10 semesters max for our programm initializer
	  ptr[j].setSub(3);
	  ptr[j].setPts((float*) new float [3]);//3 subjects just for testing
	  for(int i=0;i<3;i++)
	    ptr[j].grade((float) (i+1),(float) (rand()%100));
	}
      ptr[0].mo();
      ptr[1].mo();
    return ptr;
    }
