@ECHO OFF
TITLE Wechsel zu David
call git config --global user.name "David Draxler"
call git config --global user.email "."
Echo Aktueller Benutzer ist jetzt:
call git config --global user.name
PAUSE