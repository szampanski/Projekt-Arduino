int odczytanaWartosc = 0;

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
  odczytanaWartosc = analogRead(A5);//Odczytanie wartości z ADC   
  odczytanaWartosc = map(odczytanaWartosc, 0, 1021, 1, 5);//Przeskalowanie wartości
  switch (odczytanaWartosc)
  {
  case 1:
      digitalWrite(8, HIGH);
      delay(600); 
      digitalWrite(8, LOW);
      delay(600);
      digitalWrite(9, LOW); 
      digitalWrite(10, LOW); 
      digitalWrite(11, LOW); 
      digitalWrite(12, LOW);
   break;

   case 2:
      digitalWrite(8, LOW); 
      digitalWrite(9, HIGH);
      delay(400);
      digitalWrite(9, LOW);
      delay(400);
      digitalWrite(10, LOW); 
      digitalWrite(11, LOW); 
      digitalWrite(12, LOW);
   break;

   case 3:
      digitalWrite(8, LOW); 
      digitalWrite(9, LOW); 
      digitalWrite(10, HIGH);
      delay(300); 
      digitalWrite(10, LOW);
      delay(300);
      digitalWrite(11, LOW); 
      digitalWrite(12, LOW);
   break;

   case 4:
      digitalWrite(8, LOW); 
      digitalWrite(9, LOW); 
      digitalWrite(10, LOW); 
      digitalWrite(11, HIGH);
      delay(150); 
      digitalWrite(11, LOW);
      delay(150);
      digitalWrite(12, LOW);
   break;

   case 5:
      digitalWrite(8, LOW); 
      digitalWrite(9, LOW); 
      digitalWrite(10, LOW); 
      digitalWrite(11, LOW); 
      digitalWrite(12, HIGH);  
      delay(50);
      digitalWrite(12, LOW);  
      delay(50);
   break;  
  }
}
