// CONGRATULATIONS - Mac Miller

// unas cuantas notas (no todas son necesarias)
#define doo 130
#define ree 147
#define miib 155
#define mii 165
#define sollb 185
#define soll 196
#define laa 220
#define sii 247
#define Do 262
#define reb 277
#define re 294
#define mib 311
#define mi 330
#define fa 349
#define solb 370
#define sol 392
#define lab 413
#define la 440
#define sib 466
#define si 494
#define dO 523 //do alto
#define Reb 554
#define Re 587
#define Mib 622
#define Mi 660
#define Fa 698
#define Solb 740
#define Sol 784
#define La 880
#define SI 988
#define REb 1108
#define RE 1174
#define MI 1320
const int buzzer = 8;
/*int hojaMelody[] = {
  sollb, soll, sii, re, solb, solb, sol, la, solb, sii, solb, sol, la, Reb, Reb, Re, Mi,
  Reb, solb, si, la, sol, mi, solb, solb, sol, la, solb, sii, solb, sol, la, Reb, Reb, Re,
  Mi, Reb, solb, si, la, sol, mi, solb, solb, sol, la, solb, sii, solb, sol, la, Reb,
  Reb, Re, Mi, Reb, solb, si, la, sol, mi, solb, re, reb, sii
  };*/ // esto es una octaba menor 

  int hojaMelody[] = {
    solb, sol, si, Re, Solb, Solb, Sol, La, Solb, si, Solb, Sol, La, REb, REb, 
    RE, MI, REb, Solb, SI, La, Sol, Mi, Solb, Solb, Sol, La, Solb, si, Solb, Sol,
    La, REb, REb, RE, MI, REb, Solb, SI, La, Sol, Mi, Solb, Solb, Sol, La,
    Solb, si, Solb, Sol, La, REb, REb, RE, MI, REb, Solb, SI, La, Sol, Mi,
    Solb, Re, Reb, si
  };
int hojaDurations[] = {
  200, 200, 200, 200, 2400, 267, 267, 267, 800, 1600, 267, 267, 267, 2400, 267,
  267, 267, 800, 1600, 500, 100, 100, 100, 2400, 267, 267, 267, 800, 1600, 267, 
  267, 267, 2400, 267, 267, 267, 800, 1600, 500, 100, 100, 100, 2400, 267, 267,
  267,800, 1600, 267, 267, 267, 2400, 267, 267, 267, 800, 1600, 500, 100, 100,
  100, 2400, 334, 167, 3100 
};

void setup()
{
  //para q suene una vez
  for(int nota = 0; nota < 65; nota++)
  {
      if (hojaMelody[nota] == 0)
       {
      delay(hojaDurations[nota]);
       }
     else 
     {
      tone(buzzer, hojaMelody[nota], hojaDurations[nota]);
      // Pausa pequeña entre notas para que no se peguen los sonidos
      delay(hojaDurations[nota] * 1.30);
    }
    noTone(buzzer);
  }
  
}
void loop()
{

}