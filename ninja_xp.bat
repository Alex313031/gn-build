:: Copyright (c) 2025 Alex313031

@ECHO OFF

ECHO NINJA-XP

SET CWD=%~dp0

SET TOOLSDIR=%CWD%\tools\win

%TOOLSDIR%\ninja_xp.exe %*
