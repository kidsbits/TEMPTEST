@echo off
pushd %~dp0
ipconfig /flushdns

::git pull

git add .

git commit -m "%date% %time%"

git push origin
::git push ks


ping -n 3 127.1
exit /b


