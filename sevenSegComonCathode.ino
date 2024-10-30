int segmento[8] = {2, 3, 4, 5, 6, 7, 8, 9};  // Pines D2 a D9

// función para asignar HIGH o LOW a cada segmento (LOW enciende el segmento y HIGH lo apaga)
void SEGMENTO(int A, int B, int C, int D, int E, int F, int G, int DP) {
  int valores[] = {A, B, C, D, E, F, G, DP};

  for (int i = 0; i < 8; i++) {
    digitalWrite(segmento[i], valores[i]);
  }
}

void setup() {
  // Configurar los pines como OUTPUT
  for (int i = 0; i < 8; i++) {
    pinMode(segmento[i], OUTPUT);
  }

  Serial.begin(9600);
}

// Configuración de los valores para cada número o letra en el display
const int configuraciones[38][8] = {
  {1, 1, 1, 1, 1, 1, 0, 0}, // 0
  {0, 1, 1, 0, 0, 0, 0, 0}, // 1
  {1, 1, 0, 1, 1, 0, 1, 0}, // 2
  {1, 1, 1, 1, 0, 0, 1, 0}, // 3
  {0, 1, 1, 0, 0, 1, 1, 0}, // 4
  {1, 0, 1, 1, 0, 1, 1, 0}, // 5
  {1, 0, 1, 1, 1, 1, 1, 0}, // 6
  {1, 1, 1, 0, 0, 0, 0, 0}, // 7
  {1, 1, 1, 1, 1, 1, 1, 0}, // 8
  {1, 1, 1, 1, 0, 1, 1, 0}, // 9
  {0, 0, 0, 0, 0, 0, 0, 1}, // 10 .
  {1, 1, 1, 0, 1, 1, 1, 0}, // 11 A
  {0, 0, 1, 1, 1, 1, 1, 0}, // 12 b
  {0, 0, 0, 1, 1, 0, 1, 0}, // 13 c
  {0, 1, 1, 1, 1, 0, 1, 0}, // 14 d
  {1, 0, 0, 1, 1, 1, 1, 0}, // 15 E
  {1, 0, 0, 0, 1, 1, 1, 0}, // 16 F
  {1, 0, 1, 1, 1, 1, 1, 0}, // 17 G
  {0, 1, 1, 0, 1, 1, 1, 0}, // 18 H
  {0, 0, 0, 0, 1, 1, 0, 0}, // 19 I
  {0, 1, 1, 1, 0, 0, 0, 0}, // 20 J
  {0, 1, 0, 0, 1, 1, 1, 0}, // 21 k
  {0, 0, 0, 1, 1, 1, 0, 0}, // 22 L
  {1, 1, 1, 0, 1, 1, 0, 0}, // 23 M
  {0, 0, 1, 0, 1, 0, 1, 0}, // 24 n
  {1, 0, 1, 0, 1, 0, 1, 0}, // 25 ñ
  {0, 0, 1, 1, 1, 0, 1, 0}, // 26 o
  {1, 1, 0, 0, 1, 1, 1, 0}, // 27 P
  {1, 1, 1, 0, 0, 1, 1, 0}, // 28 q
  {0, 0, 0, 0, 1, 0, 1, 0}, // 29 r
  {1, 0, 1, 1, 0, 1, 1, 0}, // 30 s
  {1, 0, 0, 0, 1, 1, 0, 0}, // 31 t
  {0, 0, 1, 1, 1, 0, 0, 0}, // 32 u
  {0, 1, 1, 1, 1, 1, 0, 0}, // 33 V
  {0, 1, 1, 1, 1, 1, 0, 0}, // 34 W
  {0, 1, 1, 0, 1, 1, 1, 0}, // 35 X
  {0, 1, 1, 1, 0, 1, 1, 0}, // 36 Y
  {1, 1, 0, 1, 1, 0, 1, 0}  // 37 Z
};
void mostrarNumero(int numero) {
  for (int i = 0; i < 8; i++) {
    digitalWrite(segmento[i], configuraciones[numero][i]);
  }
}

void loop() {



//descomentar el for para mostrar todos los numeros de a uno
 for (int i = 0; i < 38; i++) {
    mostrarNumero(i);
    delay(500);
  }


//mostrarNumero(5);
//delay(500);

}
