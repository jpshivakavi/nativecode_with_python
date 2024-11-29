#pragma once
#ifdef _WIN32
#ifdef STUDENTDLL_EXPORTS 
#define STUDENTDLL_API __declspec(dllexport)
#else 
#define STUDENTDLL_API __declspec(dllimport)
#endif 
#else
#define STUDENTDLL_API
#endif 

typedef struct Student {
	char* name;
	int age;
	struct Student* next;
} Student;


STUDENTDLL_API void getStudent(Student** pStudent);
STUDENTDLL_API void delStudent(Student** pStudent);
STUDENTDLL_API void getStudentList(Student** pStudent);
STUDENTDLL_API void delStudentList(Student** pStudent);
