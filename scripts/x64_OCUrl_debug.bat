echo ">>>>>"
echo "Start executing automatic processing script"

set inputDir="%~dp0\..\x64\Debug"

set mainDir="%~dp0\..\build\x64\Debug"
set libDir="%mainDir%\lib"
set headFileDir="%mainDir%\headFile"
set binDir="%mainDir%\bin"

set inputfile1="%inputDir%\OCUrl.lib"
set outfile1="%libDir%\OCUrl.lib"

if not exist %mainDir% md %mainDir%
if not exist %libDir% md %libDir%
if not exist %headFileDir% md %headFileDir%
if not exist %binDir% md %binDir%

if exist %outfile1% del /f /Q %outfile1%
if exist %inputfile1% (
    copy %inputfile1% %libDir%
    echo "Copied file OCUrl.lib to directory lib"
) else (
    echo "ERR:Unable to find file OCUrl.lib"
)


echo "Script run completed, build completed!"
echo ">>>>>"