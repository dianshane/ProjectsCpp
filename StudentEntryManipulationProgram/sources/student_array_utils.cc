#include <student_definition.h>
#include <stdio.h>
#include <functions.h>



  Student *generate(int size,Student *obj)
    {
      Student *tmp=obj;
      Student *ptr=new Student [size];
	for(int j=0;j<(size-1);j++)
	  {
	    ptr[j].copy(tmp[j]);
	  }
	delete[] tmp;
    return ptr;
    }


  int search(int  am,Student *obj,int size)
    {
    int k=0;
      for(;obj[k].AM!=am;k++)		
	{
	  if(k>size)
	    {
	      printf("............................................................\n");
	      printf("No match found!!\n");
	      printf("............................................................\n");
	      return (-1);
	    }
	}
    return k;
    }



    void print_all(Student * obj,int size)
      {
	printf("............................................................\n");
	printf("A.M.---Name---Semester\n");
	printf("............................................................\n");
	  for(int a=0;a<size;a++)
	    {
	      obj[a].SmallPrint();
	    }
	printf("............................................................\n");
      }
