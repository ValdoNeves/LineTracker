#define MOTOR_ESQUERDO 8
#define MOTOR_DIREITO 7
#define VELOCIDADE_ESQUERDA 6
#define VELOCIDADE_DIREITA 5
#define SENSOR_DIREITA A0
#define SENSOR_ESQUERDA A1

const int limiteCorte = 945;
const int velocidadeNaCurva = 70;
const int velocidadePraFrente = 50;
const int velocidadeZero = 0;

void setSensores(){
	analogRead(SENSOR_ESQUERDA);
	analogRead(SENSOR_DIREITA);
}

void setMotores(){
	for(int i = 5; i <= 8 ; i++){
		pinMode(i, OUTPUT);
	}
	digitalWrite(MOTOR_DIREITO, LOW);
	digitalWrite(VELOCIDADE_DIREITA, velocidadeZero);
	digitalWrite(MOTOR_ESQUERDO, LOW);
	digitalWrite(VELOCIDADE_ESQUERDA, velocidadeZero);
}
boolean paraFrente(){
	return(SENSOR_ESQUERDA > limiteCorte && SENSOR_DIREITA > limiteCorte);
}