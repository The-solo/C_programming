#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Employee employee_t;
typedef struct Department department_t;



struct Employee {
    int id; // here the size of int is known(4 bytes) so no need to use the pointer.
    char *name; // it's an array it the size is dynamic.
    department_t *department;
};

struct Department {
    char *name;
    employee_t *manager;
};


// The Employee & Department both share the fields making them a "mutual structs"
// when you use forward declarations, you must use pointers to incomplete types

employee_t create_employee(int id, char *name) {
    employee_t emp = {
        .id = id,
        .name = name,
        .department = NULL,
    };
    return emp;
}

department_t create_department(char *name) {
    department_t dept = {
        .name = name,
        .manager = NULL,
    };
    return dept;
}

void assign_employee(employee_t *emp, department_t *department) {
    emp->department = department;
}

void assign_manager(department_t *dept, employee_t *manager) {
    dept->manager = manager;
}

employee_t create_employee(int id, char *name);
department_t create_department(char *name);

void assign_employee(employee_t *emp, department_t *department);
void assign_manager(department_t *dept, employee_t *manager);

int main() {
    return 0;
}
