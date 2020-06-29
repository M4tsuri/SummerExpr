echo Input the num of question will be checked
set /p num=:
for %%i in (1,2,3,4,5,6,7,8,9,10) do gcc.exe code_for_test/%num%/%%i.c -o exe_files/%num%/%%i.exe
gcc.exe rand_input/rand%num%.c -o rand.exe
pause

::start
@echo off  
set /a count = 1
set /a std = 1
set /a my = 2
:loop  
    rand.exe>data.txt  
    exe_files\%num%\%std%.exe<data.txt>%std%.out
    exe_files\%num%\%my%.exe<data.txt>%my%.out  
    echo %count%th comparision
    fc %std%.out %my%.out  

set /a count += 1
if %count% GTR 200 (goto normal)

if not errorlevel 1 goto loop  
:error
    set /a count = 1
    echo %std% differ from %my%, check input in data.txt
    echo press to continue checking
    pause  

:normal
    del *.out
    set /a count = 0
    set /a std += 1
    set /a my += 1
    if %my% GTR 10 (goto finish)
    goto loop

:finish
echo finished
pause