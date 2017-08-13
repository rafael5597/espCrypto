/*
 Name:		espCrypto.ino
 Created:	13/08/2017 19:34:34
 Author:	Jos� morais
*/

#include <EspCrypto.h>

espCrypto esp;


void setup()
{
	Serial.begin(115200);//Inicia a comunica��o serial.


	esp.setKey("1234567890123456");//Adicionado a chave para encripta��o, mantenha em segredo!


	Serial.println(esp.encrypt("oi"));//Printamos a String criptografada retornada pela fun��o encrypt.
}


void loop()
{

}
