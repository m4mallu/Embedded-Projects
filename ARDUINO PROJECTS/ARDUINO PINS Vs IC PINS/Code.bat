@echo off
color b0
title = ARDUINO PINS VS IC PINS- BY RENJITH
goto START
:START
echo.	
echo.
echo	  	(Eg : A0, A1, 2, 3, RESET, CLOCK, VCC, GROUND..etc)
echo.
echo		TYPE THE ARDUINO Pin Number..	
echo.
echo.
set/p "cho=>"
if %cho%==A0 goto 1
if %cho%==a0 goto 1
if %cho%==A1 goto 2 
if %cho%==a1 goto 2
if %cho%==A2 goto 3
if %cho%==a2 goto 3
if %cho%==A3 goto 4
if %cho%==a3 goto 4
if %cho%==A4 goto 5
if %cho%==a4 goto 5
if %cho%==A5 goto 6
if %cho%==a5 goto 6
if %cho%==0 goto 7
if %cho%==1 goto 8
if %cho%==2 goto 9
if %cho%==3 goto 10
if %cho%==4 goto 11
if %cho%==5 goto 12
if %cho%==6 goto 13
if %cho%==7 goto 14
if %cho%==8 goto 15
if %cho%==9 goto 16
if %cho%==10 goto 17
if %cho%==11 goto 18
if %cho%==12 goto 19
if %cho%==13 goto 20
if %cho%==VCC goto 21
if %cho%==vcc goto 21
if %cho%==GND goto 22
if %cho%==gnd goto 22
if %cho%==RESET goto 23
if %cho%==reset goto 23
if %cho%==CRYSTAL goto 24
if %cho%==crystal goto 24
:1
echo.
echo.
echo		IC PIN = 23 (ADC 0)
echo.
echo.
PAUSE
cls
goto START
:2
echo.
echo.
echo		IC PIN = 24 (ADC 1)
echo.
echo.
PAUSE
cls
goto START
:3
echo.
echo.
echo		IC PIN = 25 (ADC 2)
echo.
echo.
PAUSE
cls
goto START
:4
echo.
echo.
echo		IC PIN = 26 (ADC 3)
echo.
echo.
PAUSE
cls
goto START
:5
echo.
echo.
echo		IC PIN = 27 (ADC 4)
echo.
echo.
PAUSE
cls
goto START
:6
echo.
echo.
echo		IC PIN = 28 (ADC 5)
echo.
echo.
PAUSE
cls
goto START
:7
echo.
echo.
echo		IC PIN = 2 (RXD)
echo.
echo.
PAUSE
cls
goto START
:8
echo.
echo.
echo		IC PIN = 3 (TXD)
echo.
echo.
PAUSE
cls
goto START
:9
echo.
echo.
echo		IC PIN = 4 (DIGITAL PIN -INT 0)
echo.
echo.
PAUSE
cls
goto START
:10
echo.
echo.
echo		IC PIN = 5 (DIGITAL PIN -INT 1)
echo.
echo.
PAUSE
cls
goto START
:11
echo.
echo.
echo		IC PIN = 6 (DIGITAL PIN - XCK / T0)
echo.
echo.
PAUSE
cls
goto START
:12
echo.
echo.
echo		IC PIN = 11 (DIGITAL PIN - T1)
echo.
echo.
PAUSE
cls
goto START
:13
echo.
echo.
echo		IC PIN = 12 (DIGITAL PIN - AIN0)
echo.
echo.
PAUSE
cls
goto START
:14
echo.
echo.
echo		IC PIN = 13 (DIGITAL PIN - AIN1)
echo.
echo.
PAUSE
cls
goto START
:15
echo.
echo.
echo		IC PIN = 14 (DIGITAL PIN - ICP1)
echo.
echo.
PAUSE
cls
goto START
:16
echo.
echo.
echo		IC PIN = 15 (DIGITAL PIN -PWM)
echo.
echo.
PAUSE
cls
goto START
:17
echo.
echo.
echo		IC PIN = 16 (DIGITAL PIN - PWM)
echo.
echo.
PAUSE
cls
goto START
:18
echo.
echo.
echo		IC PIN = 17 (DIGITAL PIN -PWM)
echo.
echo.
PAUSE
cls
goto START
:19
echo.
echo.
echo		IC PIN = 18 (DIGITAL PIN )
echo.
echo.
PAUSE
cls
goto START
:20
echo.
echo.
echo		IC PIN = 19 (DIGITAL PIN )
echo.
echo.
PAUSE
cls
goto START
:21
echo.
echo.
echo		IC PIN = 7 , 20 ( +5v)
echo.
echo.
PAUSE
cls
goto START
:22
echo.
echo.
echo		IC PIN = 8 , 22 (GROUND)
echo.
echo.
PAUSE
cls
goto START
:23
echo.
echo.
echo		IC PIN = 1 (RESET +5V)
echo.
echo.
PAUSE
cls
goto START
:24
echo.
echo.
echo		IC PIN = 9 , 10 (16Mhz)
echo.
echo.
PAUSE
cls
goto START