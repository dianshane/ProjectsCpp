#include <stdlib.h>
#include <time.h>
#include <student_definition.h>
#include <string>
#include <functions.h>

int main(void)
  {
    srand (time(NULL));
    Student *obj;
    obj=initiallizer(obj);
    start();//visual
    menu(obj);//everything is being controled through this function
    return 0;
  }
