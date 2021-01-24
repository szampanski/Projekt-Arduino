<h1>Wskaźnik diodowy</h1>
<h2>Opis projektu</h2>

Projekt polega na włączaniu kolejnych diod sterując potencjometrem. Dodatkowo, im większa wartość ustawiona potencjometrem, tym szybciej włączona dioda miga.

<h2>Lista użytych elementów w projekcie:</h2>
<ul><li>Płytka Arduino Uno</li></ul>
<ul><li>Dioda LED x5</li></ul>
<ul><li>Rezystor 1k Ohm x5</li></ul>
<ul><li>Potencjometr leżący 10k Ohm</li></ul>

<h2>Zdjęcia układu:</h2>

![IMG_20210124_144253](https://user-images.githubusercontent.com/75728297/105633506-4654e080-5e59-11eb-969d-774b84ef60c7.jpg)
![IMG_20210124_144322](https://user-images.githubusercontent.com/75728297/105633542-769c7f00-5e59-11eb-8b44-41f7b52cf9b1.jpg)

<h2>Kod programu wraz z opisem:</h2>

``` C++
int odczytanaWartosc = 0; //Deklaracja wartości odczytywanej z potencjometru

void setup()
{
  pinMode(8, OUTPUT); //Konfiguracja wyjść pod diody LED
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() 
{
  odczytanaWartosc = analogRead(A5);//Odczytanie wartości z wyjścia A5   
  odczytanaWartosc = map(odczytanaWartosc, 0, 1022, 1, 5);//Przeskalowanie wartości z analogowej (0-1021) na cyfrową (1-5V)
  switch (odczytanaWartosc) //Sprawdzenie warunków dla konkretnych wartości odczytanych z potencjometru
  {
  case 1: //Zakres pierwszy równy 0-1V
      digitalWrite(8, HIGH); //Włączenie 1 diody i ustawienie szybkości migania
      delay(600); 
      digitalWrite(8, LOW);
      delay(600);
      digitalWrite(9, LOW); 
      digitalWrite(10, LOW); 
      digitalWrite(11, LOW); 
      digitalWrite(12, LOW);
   break;

   case 2: //Zakres drugi równy 1-2V
      digitalWrite(8, LOW);  
      digitalWrite(9, HIGH); //Włączenie 2 diody i ustawienie szybkości migania
      delay(400);
      digitalWrite(9, LOW);
      delay(400);
      digitalWrite(10, LOW); 
      digitalWrite(11, LOW); 
      digitalWrite(12, LOW);
   break;

   case 3: //Zakres trzeci równy 2-3V
      digitalWrite(8, LOW);  
      digitalWrite(9, LOW); 
      digitalWrite(10, HIGH); //Włączenie 3 diody i ustawienie szybkości migania
      delay(300); 
      digitalWrite(10, LOW);
      delay(300);
      digitalWrite(11, LOW); 
      digitalWrite(12, LOW);
   break;

   case 4: //Zakres czwarty równy 3-4V
      digitalWrite(8, LOW);  
      digitalWrite(9, LOW); 
      digitalWrite(10, LOW); 
      digitalWrite(11, HIGH);//Włączenie 4 diody i ustawienie szybkości migania
      delay(150); 
      digitalWrite(11, LOW);
      delay(150);
      digitalWrite(12, LOW);
   break;

   case 5: //Zakres piąty równy 5V
      digitalWrite(8, LOW); 
      digitalWrite(9, LOW); 
      digitalWrite(10, LOW); 
      digitalWrite(11, LOW); 
      digitalWrite(12, HIGH);   //Włączenie 5 diody i ustawienie szybkości migania
      delay(50);
      digitalWrite(12, LOW);  
      delay(50);
   break;  
  }
}
```
<h2>Wideo poglądowe:</h2>

https://youtu.be/7DB_rV1vsvI
