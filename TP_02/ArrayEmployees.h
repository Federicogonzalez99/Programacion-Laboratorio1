    typedef struct
    {
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;
    }Employee;
    int initEmployees(Employee array[], int tamanio);
    int addEmployee(Employee array[], int len, int* id, char name[],char lastName[],float salary,int sector);
