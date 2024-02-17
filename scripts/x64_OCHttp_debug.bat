echo ">>>>>"
echo "Start executing automatic processing script"

set inputDir="%~dp0\..\x64\Debug"

set mainDir="%~dp0\..\build\x64\Debug"
set libDir="%mainDir%\lib"
set headFileDir="%mainDir%\headFile"
set binDir="%mainDir%\bin"

if not exist %mainDir% md %mainDir%
if not exist %libDir% md %libDir%
if not exist %headFileDir% md %headFileDir%
if not exist %binDir% md %binDir%

set inFile1="%inputDir%\OCHttp.dll"
set outFile1="%libDir%\OCHttp.dll"

if exist %outFile1% del /Q /f %outFile1%
if exist %inFile1% (
    copy %inFile1% %libDir%
    echo "copy file OCHttp.dll"
) else (
    echo "ERR:file OCHttp.dll not found!"
)

set inFile="%inputDir%\OCHttp.lib"
set outFile="%libDir%\OCHttp.lib"

if exist %outFile% del /Q /f %outFile%
if exist %inFile% (
    copy %inFile% %libDir%
    echo "copy file OCHttp.lib"
) else (
    echo "ERR:file OCHttp.lib not found!"
)

echo "Script run completed, build completed!"
echo ">>>>>"