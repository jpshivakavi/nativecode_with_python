from ctypes import *
import sys
import os
import os.path

if os.name == "posix":
    _major_ver = sys.version_info.major
    _minor_ver = sys.version_info.minor
    _dll_path = os.path.join(os.path.dirname(__file__), "libstudent.so")
    #_dll_path = os.path.join("/usr/local/lib/python" + str(_major_ver) + "." + str(_minor_ver),
    #                        "site-packages", "hello", "libhello.so")
    _dll_loader = cdll
else:
    _dll_path = os.path.join(os.path.dirname(sys.executable), 'LIB', 'site-packages', 'student', 'student.dll')
    _dll_loader = windll

_handle = _dll_loader.LoadLibrary(_dll_path)


class Student(Structure):
    pass

Student._fields_ = [('Name', c_char_p), 
                    ('Age', c_int), 
                    ('Next', POINTER(Student))]

def getstudent():
    pst = POINTER(Student)()
    _handle.getStudent.argtype = [POINTER(POINTER(Student))]
    
    # calling into the DLL function
    _handle.getStudent(byref(pst))
    
    print("Student Name : {}".format(pst[0].Name))
    print("Student Age : {}".format(pst[0].Age))
    return pst


def getstudentlist():
    _handle.getStudentList.argtype = [POINTER(POINTER(Student))]
    pst = POINTER(Student)()
    # calling into the DLL function
    _handle.getStudentList(byref(pst))
    x=pst
    print("\nStudent List :")
    while True:
        try:
            if pst and pst[0]:
                print()
                print("Name : ", pst[0].Name)
                print("Age  : ", pst[0].Age)
                pst = pst[0].Next
            else:
                print("End of List")
                break
        except Exception as exp:
            print(exp)
            print("End of List")
            break
    pst = x
    return pst

def delstudent(pst):
    _handle.delStudent.argtype = [POINTER(POINTER(Student))]
    _handle.delStudent(byref(pst))


if __name__ == "__main__":

    pst = getstudent()
    delstudent(pst)
    pstlist = getstudentlist()










