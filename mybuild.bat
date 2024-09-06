@echo off

Set command=%1
msbuild DivByZeroTest-VS.sln -t:%command% -p:Configuration=Release -property:Platform=x64 -ds:true -v:diag


