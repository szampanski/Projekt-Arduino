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
