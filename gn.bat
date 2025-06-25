:: Copyright (c) 2025 Alex313031

@ECHO OFF

ECHO GN

SET CWD=%~dp0

SET TOOLSDIR=%CWD%\tools\win

%TOOLSDIR%\gn.exe %*
