#include <stdio.h>
#include <string.h>

struct MyStructure {
    int rollno;
    float marks;
    char name[20];
    double doubleMember;
    short shortMember;
    long longMember;
    unsigned int unsignedintMember;
    char characterMember;
    unsigned short unsignedShortMember;
    long double longdoubleMember;
};
void updateStructure(struct MyStructure *task) {
    task->rollno = 10;
    task->marks = 55.5;
    strcpy(task->name, "Updated String");
    task->doubleMember = 2.78;
    task->shortMember = 456;
    task->longMember = 987654321;
    task->unsignedintMember = 799;
    task->characterMember = 'k';
    task->unsignedShortMember = 456;
    task->longdoubleMember = 1.23456789;
}

int main() {
    struct MyStructure myStruct;
    
    updateStructure(&myStruct);
    
    printf("int: %d\n", myStruct.rollno);
    printf("Float: %f\n", myStruct.marks);
    printf("String: %s\n", myStruct.name);
    printf("Double: %f\n", myStruct.doubleMember);
    printf("Short: %d\n", myStruct.shortMember);
    printf("Long: %ld\n", myStruct.longMember);
    printf("Unsigned Int: %u\n", myStruct.unsignedintMember);
    printf("Character: %c\n", myStruct.characterMember);
    printf("Unsigned Short: %u\n", myStruct.unsignedShortMember);
    printf("Long Double: %Lf\n", myStruct.longdoubleMember);
    
    return 0;
}