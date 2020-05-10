#include <student_definition.h>
#include <iostream>
#include <stdio.h>
#include <functions.h>
  Student *write(int size,Student *obj)
    {
      int am;
      std::string name;
      unsigned int sem;
      unsigned int sub;
      int a;
      
      obj=generate(size,obj);
	printf("please insert 'AM':");
	  scanf(" %i",&am);		      
	  obj[size-1].big(am,(char *) &name,sem);

	  printf("please insert name:");
	  scanf(" ");
	  getline(std::cin,name);
	  //name.append (1,'\0');
	  //printf("%s",name); //test gia na doume an diabazei
	  //cout <<"test:"<<name<<endl;
	  printf("please insert semester (If your'e done insert '-1'):");
	  scanf(" %i",&a);
	  
	  if(a+1!=0)
	    {
		int u;
		sem=(unsigned int) a;
		printf("please insert subjects of success (If your'e done insert '-1'):");
		scanf(" %i",&u);
		//printf("test");
		if(u+1!=0)
		  {
		    sub=(unsigned int) u;
		    vathmos((size-1),obj,0);
		    obj[size-1].extended(am,name,sem,sub);
		    char h;
		    printf("Would you like to add the grades of the subjects now?\n"); 
		    printf("You can always do it later using 'e' command. (y or n) :");
		    do{
		      scanf(" %c",&h);
		      if(h=='y')
			{
			  vathmos((size-1),obj,1);
			  break;
			}
		      if(h=='n')
			break;
		      printf("Invalid option!Please type y or n :");
		      continue;
		    }while(0);
		    obj[size-1].mo();
		  }
		  else
		    {
      		      obj[size-1].setPts(new float [1]);
		      obj[size-1].getPts()[0]=0;
		      obj[size-1].big(am,name,sem);
		    }
	    }
	  else 
	    {
      	      obj[size-1].setPts(new float [1]);
	      obj[size-1].getPts()[0]=0;
	      obj[size-1].small(am,name);
	    }
    return obj;
    }
