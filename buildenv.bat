:: Copyright (c) 2025 Alex313031

@ECHO OFF

SET CWD=%~dp0

SET TOOLSDIR=%CWD%\tools\win

SET LLVMDIR=%CWD%\tools\win\llvm_18.1.8_win64

SET PATH=%PATH%;%TOOLSDIR%;%LLVMDIR%;

CMD.EXE /K