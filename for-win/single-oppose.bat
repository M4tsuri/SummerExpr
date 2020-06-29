echo Input the num of question will be checked
set /p num =
set /a std = 10 
set /a my  = 9
g++.exe code_for_test/%num%/%std%.c -o exe_files/%num%/%std%.exe
g++.exe code_for_test/%num%/%my%.c -o exe_files/%num%/%my%.exe
g++.exe rand_input/rand%num%.c -o rand.exe
pause

::start
@echo off  

:loop  
    rand.exe>data.txt  
    exe_files\%num%\%std%.exe<data.txt>%std%.out
    exe_files\%num%\%my%.exe<data.txt>%my%.out  
    echo %count%th comparision
    fc %std%.out %my%.out  

set /a count += 1
if %count% GTR 300 (goto normal)

if not errorlevel 1 goto loop  
:error
    set /a count = 1
    echo %std% differ from %my%, check input in data.txt
    echo press to continue checking
    pause  

:normal
    del *.out

:finish
echo finished
pause