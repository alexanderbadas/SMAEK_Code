@echo off

echo === Checking / Installing Python ===
where python >nul 2>&1
if %errorlevel% equ 0 (
    echo Python already installed, skipping.
) else (
    winget install -e --id Python.Python.3.13 --accept-source-agreements --accept-package-agreements
    if %errorlevel% neq 0 (
        echo Python installation failed. Make sure winget is available.
        pause
        exit /b 1
    )
)

echo.
echo === Checking / Installing Git ===
where git >nul 2>&1
if %errorlevel% equ 0 (
    echo Git already installed, skipping.
) else (
    winget install -e --id Git.Git --accept-source-agreements --accept-package-agreements
    if %errorlevel% neq 0 (
        echo Git installation failed.
        pause
        exit /b 1
    )
)

echo.
echo === Refreshing PATH ===
call refreshenv >nul 2>&1
set "PATH=%PATH%;%LOCALAPPDATA%\Programs\Python\Python313;%LOCALAPPDATA%\Programs\Python\Python313\Scripts"

echo.
echo === Installing pygame-ce ===
pip install pygame-ce
if %errorlevel% neq 0 (
    echo pygame-ce installation failed.
    pause
    exit /b 1
)

echo.
echo === Cloning CheesySituation ===
if exist "CheesySituation" (
    echo CheesySituation folder already exists, skipping clone.
) else (
    git clone https://github.com/AngelBall09/CheesySituation
    if %errorlevel% neq 0 (
        echo Git clone failed.
        pause
        exit /b 1
    )
)

echo.
echo === Done! ===
echo Everything is installed. Launching Game.py...
pause

python CheesySituation\Game.py
