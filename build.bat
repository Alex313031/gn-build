:: Copyright (c) 2025 Alex313031

@ECHO OFF

SET CWD=%~dp0

:: gn.bat gen out\test\ --args="import(\"//src/picalc_win/assets/debug_args.gn\")" &&ninja_xp.bat -C out\test\ libnt5 nt5_con reboot misc_all libpicalc_all picalc_win -v -d stats -j 16&&.\out\test\picalc_win.exe
ninja_xp.bat -C out\test\ calcrect reboot icon_refresh picalc_test picalc_win -v -d stats -j 16&&.\out\test\picalc_win.exe
