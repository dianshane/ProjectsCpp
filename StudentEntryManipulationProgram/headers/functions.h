void menu(Student *);//controls everything
void help(void);//displays manual
Student * write(int ,Student *);//controls contructors
int search(int,Student *,int );//searches for specific student in array and returnes his position
Student *generate(int ,Student *);//generates student array (and/or extends it)
void vathmos(int ,Student *,int);//generates grade array for each student
float *extend(int,float *);//extends subject-grade array when needed
void print_all(Student *,int);//lists all students
Student *initiallizer(Student *);//creates two initial students for testing purposes
void start(void);//visual on start of program
