// Note_c++.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <stdio.h>

using namespace std;
int main()
 {
	int sayici, note, toplam, ortalama;
	
		 /* ilk değerlerin verilmesi */
		 toplam = 0;
	 sayici = 1;
			/* iĢlem kısmı */
		 while (sayici <= 10) {
		printf("Notu girin: ");
		 scanf("%d", &note);
		 toplam = toplam + note;
		 sayici = sayici + 1;
		
	}
	
		 /* bitiĢ kısmı */
		 ortalama = toplam / 10;
	 printf("Sınıf ortalaması %d dir.\n", ortalama);
	
		 return 0; /* programın baĢarılı bir Ģekilde bitti */
	}

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
