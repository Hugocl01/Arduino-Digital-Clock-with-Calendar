// Code for Arduino

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
//Fecha
int dia = 28;
int mes = 2;
int anio = 2020;
//Reloj
int hora = 23;
int min = 59;
int seg = 50;

String horas;

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD until its over delay().
  lcd.setCursor(0, 0);
  lcd.print("Reloj digital");
  lcd.setCursor(0, 1);
  lcd.print("Hugo C.L.");
  delay(2000);
  lcd.clear();
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("Fecha:");
  switch (mes) {
    case 1:
      if (dia > 31) {
        dia = 1;
        mes++;
      }
      break;
    case 2:
      if ((anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0) && dia > 29) {
        dia = 1;
        mes++;
      } else if (dia > 28) {
        dia = 1;
        mes++;
      }
      break;
    case 3:
      if (dia > 31) {
        dia = 1;
        mes++;
      }
      break;
    case 4:
      if (dia > 30) {
        dia = 1;
        mes++;
      }
      break;
    case 5:
      if (dia > 31) {
        dia = 1;
        mes++;
      }
      break;
    case 6:
      if (dia > 30) {
        dia = 1;
        mes++;
      }
      break;
    case 7:
      if (dia > 31) {
        dia = 1;
        mes++;
      }
      break;
    case 8:
      if (dia > 31) {
        dia = 1;
        mes++;
      }
      break;
    case 9:
      if (dia > 30) {
        dia = 1;
        mes++;
      }
      break;
    case 10:
      if (dia > 31) {
        dia = 1;
        mes++;
      }
      break;
    case 11:
      if (dia > 30) {
        dia = 1;
        mes++;
      }
      break;
    case 12:
      if (dia > 31) {
        dia = 1;
        mes++;
      }
      break;
  }
  if (dia < 10) {
    lcd.print(0);
    lcd.print(dia);
  } else {
    lcd.print(dia);
  }
  lcd.print("/");
  if (mes < 10) {
    lcd.print(0);
    lcd.print(mes);
  } else {
    lcd.print(mes);
  }
  lcd.print("/");
  if (anio < 10) {
    lcd.print(0);
    lcd.print(anio);
  } else {
    lcd.print(anio);
  }

  lcd.setCursor(0, 1);
  lcd.print("Hora: ");
  delay(1000);
  seg++;
  if (hora > 23) {
    hora = 0;
    dia++;
  }
  if (min > 59) {
    min = 0;
    hora++;
  }
  if (seg > 59) {
    seg = 0;
    min++;
  }

  if (hora < 10) {
    lcd.print(0);
    lcd.print(hora);
  } else {
    lcd.print(hora);
  }
  lcd.print(":");
  if (min < 10) {
    lcd.print(0);
    lcd.print(min);
  } else {
    lcd.print(min);
  }
  lcd.print(":");
  if (seg < 10) {
    lcd.print("0");
    lcd.print(seg);
  } else {
    lcd.print(seg);
  }
}