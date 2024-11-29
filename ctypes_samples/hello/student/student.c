#include "student.h"
#include <stdio.h>
#include <malloc.h>
#include <string.h>

STUDENTDLL_API void getStudent(Student** pStudent)
{
	Student* s1 = malloc(sizeof(Student));
	if (s1 != NULL)
	{
		s1->age = 20;
		
		s1->name = (char*)malloc(64);
		if (s1->name != NULL)
		{
#ifdef _WIN32
			strcpy_s(s1->name, 3, "JP");
#else
			strncpy(s1->name, "JP", 3);
#endif
		}
		s1->next = NULL;
		*pStudent = s1;
	}
}

STUDENTDLL_API void delStudent(Student** pStudent)
{
	Student *pTempStudent = NULL;

	if (pStudent != NULL && *pStudent != NULL) {
		pTempStudent = *pStudent;
		if (pTempStudent->name)
		{
			free(pTempStudent->name);
			free(pTempStudent);
		}

		*pStudent = NULL;
	}
}

STUDENTDLL_API void getStudentList(Student** pStudent)
{
	Student* s1 = malloc(sizeof(Student));
	if (s1 != NULL)
	{
		s1->age = 20;

		s1->name = (char*)malloc(64);
		if (s1->name != NULL)
		{
#ifdef _WIN32
			strcpy_s(s1->name, 3, "JP");
#else
			strncpy(s1->name, "JP", 3);
#endif
		}
		s1->next = NULL;
		*pStudent = s1;
	}
	else
	{
		return;
	}

	Student* s2 = malloc(sizeof(Student));
	if (s2 != NULL)
	{
		s2->age = 220;

		s2->name = (char*)malloc(64);
		if (s2->name != NULL)
		{
#ifdef _WIN32
			strcpy_s(s2->name, 3, "JP");
#else
			strncpy(s2->name, "JP", 3);
#endif
		}

		s1->next = s2;
		s2->next = NULL;
	}
	else
	{
		return;
	}

	Student* s3 = malloc(sizeof(Student));
	if (s3 != NULL)
	{
		s3->age = 20;

		s3->name = (char*)malloc(64);
		if (s3->name != NULL)
		{
#ifdef _WIN32
			strcpy_s(s3->name, 3, "JP");
#else
			strncpy(s3->name, "JP", 3);
#endif
		}

		s2->next = s3;
		s3->next = NULL;
	}

	return;
}

STUDENTDLL_API void delStudentList(Student** pStudent)
{
	Student* pTempStudent = NULL;
	Student* pTempVar = NULL;

	if (pStudent != NULL && *pStudent != NULL) {
		pTempStudent = *pStudent;
		while (pTempStudent != NULL)
		{
			pTempVar = pTempStudent;
			if (pTempVar->name)
			{
				free(pTempVar->name);
				free(pTempVar);
			}

			pTempStudent = pTempStudent->next;
		}
		*pStudent = NULL;
	}

}