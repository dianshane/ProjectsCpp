#include <student_definition.h>
#include <stdio.h>
#include <functions.h>
  float *extend(int Sub,float *pts)
    {
      //float *tmp=pts;
      float *ptr=new float[Sub];
	for(int j=0;j<(Sub);j++)
	  {
	    ptr[j]=pts[j];
	  }
	  
	delete[] pts;
    return ptr;
    }

  void vathmos(int f,Student * obj,int b)
    {
      obj[f].setPts(new float [obj[f].getSub()]);
      float *tmp=obj[f].getPts();
      b==1?printf("Please insert grades in a scale from zero to one hundred.\n"):0;
      for(int j=0;j<(obj[f].getSub());)
	      
	{
	  float g;
	  do{
	  printf("Please insert grade for subject %i:",j+1);
	  scanf("%f",&g);
	  if(g<0||g>100)
	    {
	      printf("Invalid grade!\n");
	      continue;
	    }
	  tmp[j]=g;
	  j++;
	  }while(0);
	}    
      
    }      
