int dato1;
int dato2;
flotar voltios;
temperatura de flotación C;
int alarma = 7;
int ventilador = 9;
int pin1Motor = 6;
int pin2Motor = 5;
int finalCarrera1 = 4;
int finalCarrera2 = 3;

anular ControlAlarma ()
{
  if (temperaturaC <36 && dato2> 850)
  {
  digitalWrite (alarma, BAJO);
  } 
  
  si (temperaturaC> = 36 || dato2 <= 850)
  {
    digitalWrite (alarma, ALTO);
  }

}

vacío ControlTecho ()
{ 
  if (temperaturaC> = 36 && temperaturaC <47 && dato2> 850)
  {
   if (digitalRead (finalCarrera1) == HIGH && digitalRead (finalCarrera2) == LOW)
   {
     analogWrite (pin1Motor, 70);
      analogWrite (pin2Motor, 0);
      Serial.println (">> ABRIENDO");
      Serial.println ("");
      retraso (100);
    }
  
    if (digitalRead (finalCarrera1) == LOW && digitalRead (finalCarrera2) == HIGH)
    {
     analogWrite (pin1Motor, 0);
     analogWrite (pin2Motor, 0);
     Serial.println (">> Techo Abierto");
     Serial.println ("");
     retraso (100);
   }
  
  }
 
  if (temperaturaC> = 36 && temperaturaC <47 && dato2 <= 850)
  {
   if (digitalRead (finalCarrera2) == ALTO)
   {
    analogWrite (pin1Motor, 0);
    analogWrite (pin2Motor, 70);
    Serial.println (">> CERRANDO");
    Serial.println ("");
    retraso (100);
   }
   if (digitalRead (finalCarrera1) == ALTO)
   {
    analogWrite (pin1Motor, 0);
    analogWrite (pin2Motor, 0);
    Serial.println (">> Techo Cerrado");
    Serial.println ("");
    retraso (100);
   }
    
  }

  if (temperaturaC <36 && dato2> 850)
  {
   if (digitalRead (finalCarrera2) == ALTO)
   {
    analogWrite (pin1Motor, 0);
    analogWrite (pin2Motor, 70);
    Serial.println (">> CERRANDO");
    Serial.println ("");
    retraso (100);
   }
   if (digitalRead (finalCarrera1) == ALTO)
   {
    analogWrite (pin1Motor, 0);
    analogWrite (pin2Motor, 0);
    Serial.println (">> Techo Cerrado");
    Serial.println ("");
    retraso (100);
   }
  }

   if (temperaturaC> 47 && dato2 <= 850)
  {
   if (digitalRead (finalCarrera1) == ALTO)
   {
      analogWrite (pin1Motor, 70);
      analogWrite (pin2Motor, 0);
      Serial.println (">> ABRIENDO");
      Serial.println ("");
      retraso (100);
    }
  
    if (digitalRead (finalCarrera2) == ALTO)
    {
     analogWrite (pin1Motor, 0);
     analogWrite (pin2Motor, 0);
     Serial.println (">> Techo Abierto");
     Serial.println ("");
     retraso (100);
   }
  }
}

vacío ControlVentilador ()
{
  si (temperaturaC> = 36)
  {
    digitalWrite (ventilador, ALTO);
  }
  más
  {
    digitalWrite (ventilador, BAJO);
  }
}

configuración nula () {
  Serial.begin (9600);
  pinMode (finalCarrera1, INPUT);
  pinMode (finalCarrera2, INPUT);
  pinMode (alarma, SALIDA);
  pinMode (pin1Motor, OUTPUT);
  pinMode (pin2Motor, OUTPUT);
  pinMode (ventilador, SALIDA);
}

bucle vacío () {
  dato1 = analogRead (A0);
  voltios = (dato1 / 1023.0) * 5;
  temperaturaC = voltios / 10e-3; 
  Serial.print ("TEMPERATURA:");
  Serial.print (temperaturaC);
  Serial.println ("C");
  retraso (100);
  
  Serial.println ("");
  
  dato2 = analogRead (A1);
  Serial.print ("HUMEDAD:");
  Serial.println (dato2);
  retraso (300);
  Serial.println ("");

  ControlAlarma ();
  ControlVentilador ();
  ControlTecho ();
} int dato1;
int dato2;
flotar voltios;
temperatura de flotación C;
int alarma = 7;
int ventilador = 9;
int pin1Motor = 6;
int pin2Motor = 5;
int finalCarrera1 = 4;
int finalCarrera2 = 3;

anular ControlAlarma ()
{
  if (temperaturaC <36 && dato2> 850)
  {
  digitalWrite (alarma, BAJO);
  } 
  
  si (temperaturaC> = 36 || dato2 <= 850)
  {
    digitalWrite (alarma, ALTO);
  }

}

vacío ControlTecho ()
{ 
  if (temperaturaC> = 36 && temperaturaC <47 && dato2> 850)
  {
   if (digitalRead (finalCarrera1) == HIGH && digitalRead (finalCarrera2) == LOW)
   {
     analogWrite (pin1Motor, 70);
      analogWrite (pin2Motor, 0);
      Serial.println (">> ABRIENDO");
      Serial.println ("");
      retraso (100);
    }
  
    if (digitalRead (finalCarrera1) == LOW && digitalRead (finalCarrera2) == HIGH)
    {
     analogWrite (pin1Motor, 0);
     analogWrite (pin2Motor, 0);
     Serial.println (">> Techo Abierto");
     Serial.println ("");
     retraso (100);
   }
  
  }
 
  if (temperaturaC> = 36 && temperaturaC <47 && dato2 <= 850)
  {
   if (digitalRead (finalCarrera2) == ALTO)
   {
    analogWrite (pin1Motor, 0);
    analogWrite (pin2Motor, 70);
    Serial.println (">> CERRANDO");
    Serial.println ("");
    retraso (100);
   }
   if (digitalRead (finalCarrera1) == ALTO)
   {
    analogWrite (pin1Motor, 0);
    analogWrite (pin2Motor, 0);
    Serial.println (">> Techo Cerrado");
    Serial.println ("");
    retraso (100);
   }
    
  }

  if (temperaturaC <36 && dato2> 850)
  {
   if (digitalRead (finalCarrera2) == ALTO)
   {
    analogWrite (pin1Motor, 0);
    analogWrite (pin2Motor, 70);
    Serial.println (">> CERRANDO");
    Serial.println ("");
    retraso (100);
   }
   if (digitalRead (finalCarrera1) == ALTO)
   {
    analogWrite (pin1Motor, 0);
    analogWrite (pin2Motor, 0);
    Serial.println (">> Techo Cerrado");
    Serial.println ("");
    retraso (100);
   }
  }

   if (temperaturaC> 47 && dato2 <= 850)
  {
   if (digitalRead (finalCarrera1) == ALTO)
   {
      analogWrite (pin1Motor, 70);
      analogWrite (pin2Motor, 0);
      Serial.println (">> ABRIENDO");
      Serial.println ("");
      retraso (100);
    }
  
    if (digitalRead (finalCarrera2) == ALTO)
    {
     analogWrite (pin1Motor, 0);
     analogWrite (pin2Motor, 0);
     Serial.println (">> Techo Abierto");
     Serial.println ("");
     retraso (100);
   }
  }
}

vacío ControlVentilador ()
{
  si (temperaturaC> = 36)
  {
    digitalWrite (ventilador, ALTO);
  }
  más
  {
    digitalWrite (ventilador, BAJO);
  }
}

configuración nula () {
  Serial.begin (9600);
  pinMode (finalCarrera1, INPUT);
  pinMode (finalCarrera2, INPUT);
  pinMode (alarma, SALIDA);
  pinMode (pin1Motor, OUTPUT);
  pinMode (pin2Motor, OUTPUT);
  pinMode (ventilador, SALIDA);
}

bucle vacío () {
  dato1 = analogRead (A0);
  voltios = (dato1 / 1023.0) * 5;
  temperaturaC = voltios / 10e-3; 
  Serial.print ("TEMPERATURA:");
  Serial.print (temperaturaC);
  Serial.println ("C");
  retraso (100);
  
  Serial.println ("");
  
  dato2 = analogRead (A1);
  Serial.print ("HUMEDAD:");
  Serial.println (dato2);
  retraso (300);
  Serial.println ("");

  ControlAlarma ();
  ControlVentilador ();
  ControlTecho ();
} int dato1;
int dato2;
flotar voltios;
temperatura de flotación C;
int alarma = 7;
int ventilador = 9;
int pin1Motor = 6;
int pin2Motor = 5;
int finalCarrera1 = 4;
int finalCarrera2 = 3;

anular ControlAlarma ()
{
  if (temperaturaC <36 && dato2> 850)
  {
  digitalWrite (alarma, BAJO);
  } 
  
  si (temperaturaC> = 36 || dato2 <= 850)
  {
    digitalWrite (alarma, ALTO);
  }

}

vacío ControlTecho ()
{ 
  if (temperaturaC> = 36 && temperaturaC <47 && dato2> 850)
  {
   if (digitalRead (finalCarrera1) == HIGH && digitalRead (finalCarrera2) == LOW)
   {
     analogWrite (pin1Motor, 70);
      analogWrite (pin2Motor, 0);
      Serial.println (">> ABRIENDO");
      Serial.println ("");
      retraso (100);
    }
  
    if (digitalRead (finalCarrera1) == LOW && digitalRead (finalCarrera2) == HIGH)
    {
     analogWrite (pin1Motor, 0);
     analogWrite (pin2Motor, 0);
     Serial.println (">> Techo Abierto");
     Serial.println ("");
     retraso (100);
   }
  
  }
 
  if (temperaturaC> = 36 && temperaturaC <47 && dato2 <= 850)
  {
   if (digitalRead (finalCarrera2) == ALTO)
   {
    analogWrite (pin1Motor, 0);
    analogWrite (pin2Motor, 70);
    Serial.println (">> CERRANDO");
    Serial.println ("");
    retraso (100);
   }
   if (digitalRead (finalCarrera1) == ALTO)
   {
    analogWrite (pin1Motor, 0);
    analogWrite (pin2Motor, 0);
    Serial.println (">> Techo Cerrado");
    Serial.println ("");
    retraso (100);
   }
    
  }

  if (temperaturaC <36 && dato2> 850)
  {
   if (digitalRead (finalCarrera2) == ALTO)
   {
    analogWrite (pin1Motor, 0);
    analogWrite (pin2Motor, 70);
    Serial.println (">> CERRANDO");
    Serial.println ("");
    retraso (100);
   }
   if (digitalRead (finalCarrera1) == ALTO)
   {
    analogWrite (pin1Motor, 0);
    analogWrite (pin2Motor, 0);
    Serial.println (">> Techo Cerrado");
    Serial.println ("");
    retraso (100);
   }
  }

   if (temperaturaC> 47 && dato2 <= 850)
  {
   if (digitalRead (finalCarrera1) == ALTO)
   {
      analogWrite (pin1Motor, 70);
      analogWrite (pin2Motor, 0);
      Serial.println (">> ABRIENDO");
      Serial.println ("");
      retraso (100);
    }
  
    if (digitalRead (finalCarrera2) == ALTO)
    {
     analogWrite (pin1Motor, 0);
     analogWrite (pin2Motor, 0);
     Serial.println (">> Techo Abierto");
     Serial.println ("");
     retraso (100);
   }
  }
}

vacío ControlVentilador ()
{
  si (temperaturaC> = 36)
  {
    digitalWrite (ventilador, ALTO);
  }
  más
  {
    digitalWrite (ventilador, BAJO);
  }
}

configuración nula () {
  Serial.begin (9600);
  pinMode (finalCarrera1, INPUT);
  pinMode (finalCarrera2, INPUT);
  pinMode (alarma, SALIDA);
  pinMode (pin1Motor, OUTPUT);
  pinMode (pin2Motor, OUTPUT);
  pinMode (ventilador, SALIDA);
}

bucle vacío () {
  dato1 = analogRead (A0);
  voltios = (dato1 / 1023.0) * 5;
  temperaturaC = voltios / 10e-3; 
  Serial.print ("TEMPERATURA:");
  Serial.print (temperaturaC);
  Serial.println ("C");
  retraso (100);
  
  Serial.println ("");
  
  dato2 = analogRead (A1);
  Serial.print ("HUMEDAD:");
  Serial.println (dato2);
  retraso (300);
  Serial.println ("");

  ControlAlarma ();
  ControlVentilador ();
  ControlTecho ();
} int dato1;
int dato2;
flotar voltios;
temperatura de flotación C;
int alarma = 7;
int ventilador = 9;
int pin1Motor = 6;
int pin2Motor = 5;
int finalCarrera1 = 4;
int finalCarrera2 = 3;

anular ControlAlarma ()
{
  if (temperaturaC <36 && dato2> 850)
  {
  digitalWrite (alarma, BAJO);
  } 
  
  si (temperaturaC> = 36 || dato2 <= 850)
  {
    digitalWrite (alarma, ALTO);
  }

}

vacío ControlTecho ()
{ 
  if (temperaturaC> = 36 && temperaturaC <47 && dato2> 850)
  {
   if (digitalRead (finalCarrera1) == HIGH && digitalRead (finalCarrera2) == LOW)
   {
     analogWrite (pin1Motor, 70);
      analogWrite (pin2Motor, 0);
      Serial.println (">> ABRIENDO");
      Serial.println ("");
      retraso (100);
    }
  
    if (digitalRead (finalCarrera1) == LOW && digitalRead (finalCarrera2) == HIGH)
    {
     analogWrite (pin1Motor, 0);
     analogWrite (pin2Motor, 0);
     Serial.println (">> Techo Abierto");
     Serial.println ("");
     retraso (100);
   }
  
  }
 
  if (temperaturaC> = 36 && temperaturaC <47 && dato2 <= 850)
  {
   if (digitalRead (finalCarrera2) == ALTO)
   {
    analogWrite (pin1Motor, 0);
    analogWrite (pin2Motor, 70);
    Serial.println (">> CERRANDO");
    Serial.println ("");
    retraso (100);
   }
   if (digitalRead (finalCarrera1) == ALTO)
   {
    analogWrite (pin1Motor, 0);
    analogWrite (pin2Motor, 0);
    Serial.println (">> Techo Cerrado");
    Serial.println ("");
    retraso (100);
   }
    
  }

  if (temperaturaC <36 && dato2> 850)
  {
   if (digitalRead (finalCarrera2) == ALTO)
   {
    analogWrite (pin1Motor, 0);
    analogWrite (pin2Motor, 70);
    Serial.println (">> CERRANDO");
    Serial.println ("");
    retraso (100);
   }
   if (digitalRead (finalCarrera1) == ALTO)
   {
    analogWrite (pin1Motor, 0);
    analogWrite (pin2Motor, 0);
    Serial.println (">> Techo Cerrado");
    Serial.println ("");
    retraso (100);
   }
  }

   if (temperaturaC> 47 && dato2 <= 850)
  {
   if (digitalRead (finalCarrera1) == ALTO)
   {
      analogWrite (pin1Motor, 70);
      analogWrite (pin2Motor, 0);
      Serial.println (">> ABRIENDO");
      Serial.println ("");
      retraso (100);
    }
  
    if (digitalRead (finalCarrera2) == ALTO)
    {
     analogWrite (pin1Motor, 0);
     analogWrite (pin2Motor, 0);
     Serial.println (">> Techo Abierto");
     Serial.println ("");
     retraso (100);
   }
  }
}

vacío ControlVentilador ()
{
  si (temperaturaC> = 36)
  {
    digitalWrite (ventilador, ALTO);
  }
  más
  {
    digitalWrite (ventilador, BAJO);
  }
}

configuración nula () {
  Serial.begin (9600);
  pinMode (finalCarrera1, INPUT);
  pinMode (finalCarrera2, INPUT);
  pinMode (alarma, SALIDA);
  pinMode (pin1Motor, OUTPUT);
  pinMode (pin2Motor, OUTPUT);
  pinMode (ventilador, SALIDA);
}

bucle vacío () {
  dato1 = analogRead (A0);
  voltios = (dato1 / 1023.0) * 5;
  temperaturaC = voltios / 10e-3; 
  Serial.print ("TEMPERATURA:");
  Serial.print (temperaturaC);
  Serial.println ("C");
  retraso (100);
  
  Serial.println ("");
  
  dato2 = analogRead (A1);
  Serial.print ("HUMEDAD:");
  Serial.println (dato2);
  retraso (300);
  Serial.println ("");

  ControlAlarma ();
  ControlVentilador ();
  ControlTecho ();
}
