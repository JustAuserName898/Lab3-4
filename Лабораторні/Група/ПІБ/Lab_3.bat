echo off

md "batch"
md "batch\Hidden"
md "batch\Not hidden"

attrib +h "batch\Hidden"

xcopy /s /i /y "copyhelp.txt" "batch\Not hidden\copyhelp.txt" > "batch\Not hidden\copyhelp.txt"

xcopy /s /i /y "batch\Not hidden\copyhelp.txt" "batch\Hidden\copied_copyhelp.txt"

