@ECHO OFF
TITLE Wechsel zu Michael
call git config --global user.name "Michael Draxler"
call git config --global user.email "michael.draxler1@gmx.at"
Echo Aktueller Benutzer ist jetzt:
call git config --global user.name
PAUSE