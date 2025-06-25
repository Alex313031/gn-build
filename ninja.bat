REM Copyright (c) 2025 Alex313031

@ECHO OFF

SET CWD=%~dp0

SET TOOLSDIR=%CWD%\tools\win

%TOOLSDIR%\ninja.exe %*
