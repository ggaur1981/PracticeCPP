# CPP Notes

## Program Listing

This section has list of programs. The concepts covered in that program. Results of running it in different OS'es|

Compilers/OS'es:<br>

| No.| Compiler | OS | Executable Info |
|---|---|---|---|
|1|VC++2013| Windows 7| PE32 executable (console) Intel 80386, for MS Windows |
|2|g++ 4.8.5| SUSE Linux | ELF 64-bit LSB executable, x86-64, version 1 (SYSV), dynamically linked (uses shared libs) |

| No. |File Name|Concept|Short Descrption| Output 1| Output 2|
|---|---|---|---|---------------------------------------------|---------------------------------------------|
| 1 |[AutoDefaultCtorEx.cpp](https://github.com/ggaur1981/PracticeCPP/blob/master/BasicCPP/AutoDefaultCtorEx.cpp)|Auto Default Ctor Generation|When there is no default constructor is provided, compiler generates one itself.|Person's name is: ╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╬▬↑σh√$, name length 31, and age is: -858993460|Person's name is: °<br>@, name length 3, and age is: 1585585872|
| 2 |[ParamCtorNeedsDefaultCtorEx.cpp](https://github.com/ggaur1981/PracticeCPP/blob/master/BasicCPP/ParamCtorNeedsDefaultCtorEx.cpp)| Default Ctor Generation | When parameterized ctor is defined, then default ctor won't be auto genearted| Person's name is: Gaurav Gaur, name length 11, and age is: 36 | Person's name is: Gaurav Gaur, name length 11, and age is: 36 |
| 3 |[DefaultAndParamCtorEx.cpp](https://github.com/ggaur1981/PracticeCPP/blob/master/BasicCPP/DefaultAndParamCtorEx.cpp)| Default Ctor Generation | When parameterized ctor is defined, then default ctor won't be auto genearted| Person's name is: , name length 0, and age is: 0 <br >Person's name is: ABCDEFGHIJKLMN, name length 14, and age is: 10 <br>Person's name is: ABCDEFGHIJKLMNO, name length 15, and age is: 20 <br>Person's name is: ABCDEFGHIJKLMNOP▲, name length 17, and age is: 30 | Person's name is: , name length 0, and age is: 0 <br> Person's name is: ABCDEFGHIJKLMN, name length 14, and age is: 10 <br> Person's name is: ABCDEFGHIJKLMNO, name length 15, and age is: 20 <br> Person's name is: ABCDEFGHIJKLMNOP, name length 17, and age is: 30 |
