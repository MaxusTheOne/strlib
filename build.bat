@echo off
setlocal

rem Set the compiler and source file
set COMPILER=gcc
set SOURCE=strlib.c
set OUTPUT=strlib.exe

rem Compile the source file
%COMPILER% %SOURCE% -o %OUTPUT%

rem Check if the compilation was successful
if %ERRORLEVEL% neq 0 (
    echo Compilation failed.
    exit /b %ERRORLEVEL%
)

rem Run the compiled program
%OUTPUT%

endlocal