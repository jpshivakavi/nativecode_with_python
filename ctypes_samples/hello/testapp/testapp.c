#include "hello.h"
#include "hello_cpp.h"
#include "student.h"
#include <stdio.h>

Student* pStudent = NULL;

int main()
{
	// calling the sayhello function from the DLL.
	printf("Executing APIs from hello DLL\n");
	sayhello();
	echo("Hello extension module!\n");

	printf("Executing APIs from hellocpp DLL\n");
	sayhello_cpp();
	echo_cpp("Hello extension module written in CPP\n");
	greet_cpp("Jayaprakash N");

	printf("Executing getStudent API from student DLL\n");
	getStudent(&pStudent);

	while (pStudent != NULL)
	{
		printf("Name = %s \n", pStudent->name);
		printf("Age = %d\n\n", pStudent->age);

		pStudent = pStudent->next;
	}

	delStudent(&pStudent);
	if (pStudent == NULL)
		printf("Deleted student\n");

	printf("Executing getStudentList API from student DLL\n");
	getStudentList(&pStudent);

	while (pStudent != NULL)
	{
		printf("Name = %s \n", pStudent->name);
		printf("Age = %d\n\n", pStudent->age);

		pStudent = pStudent->next;
	}

	delStudentList(&pStudent);

	if (pStudent == NULL)
	{
		printf("Deleted studentlist \n");
	}

	return 0;
}
