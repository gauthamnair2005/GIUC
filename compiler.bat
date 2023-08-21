@echo off

for %%i in ("%~dp0*.C")do gcc "%%~i" -o "%%~dpni.exe"