// Das ist eine C -Datei.
// Arduino arbeitet auch mit C-Dateien.
// Allerdings wird die C-Datei dann für den Arduino kompiliert und 
// nicht für Windows.
// Das kompilierte Programm: Html.exe erzeugt die HTML Datei: Client.html
// Dieses Programm liest die Datei Client.h
// Unser ArduinoFile wird dann auch Client.h lesen
// Html.exe muss eigentlich nur einmal kompiliert werden.
// Jede Aenderung in der HTML Seite passiert dann nur in Client.h
// Das Programm Html.exe muss dann mit Erstelle_exe.bat neu kompiliert 
// werden und danach muss das Programm Html.exe noch ausgeführt werden. 
// und damit wird dann eine neue Version von Client.html erzeugt.

#include <stdio.h>
#include <stdlib.h>
#include "Client.h"
int main() {
   //printf("Hello World!");
   printf(MAIN_page);
   FILE *f = fopen("Client.html", "w");
   if (f == NULL)
   {
      printf("Error opening file!\n");
      exit(1);
   }
   fprintf(f, "%s", MAIN_page);
   fclose(f);
   return 0;
}