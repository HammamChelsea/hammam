/*
  Blink
  Menyalakan LED pada Pin 10 selama 5,5 detik dan Mematikanya selama 5,5 detik.
 
  Ini contoh Kode Programnya.
 */
 
int led = 10;//Output pada Digital Pin adalah sebuah LED yang terkoneksi/terhubung dengan Digital Pin 10.

void setup() 
{                
  pinMode(led, OUTPUT);//Mengatur Digital Pin sebagai Output.     
}

void loop() 
{
  digitalWrite(led, HIGH);   // Mengatur LED agar Menyala.
  delay(5500);               // Tunggu sampai 5,5 detik.
  digitalWrite(led, LOW);    // Mengatur LED agar Mati.
  delay(5500);               // Tunggu samapi 5,5 detik.
}