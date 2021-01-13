// Historia_Narrada_2

#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string>
#include <time.h>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "Spanish");

	int respuesta = 1;
	int arma = 1; 
	int armar = 1;
	int material = 1;
	int casa = 1;
	int huir = 1;
	int hacer = 1;
	int cautela = 1;
	int destrucción = 1;
	char juego = 'G'; 
	char proto = 'A'; 
	char refugio = 'M';
	char construcción = 'F';
	char esconderse = 'E';
	char raptado = 'C';
	char fogata = 'H';
	char regresar = 'R';
	char victoria = 'D';
	
    
	    cout << "Hola mi nombre es Mike y hoy nos divertiremos mucho en este juego" << endl, Sleep(3000);
	    cout << "Primero que nada me gustaria saber con que juego quieres iniciar primero" << endl, Sleep(3000);
	    cout << "Para poder elegir hacer una elecciíon en el juego escribe el número y la inicial de cada sentencia" << endl, Sleep(3000);
	    cout << "1. (Guerra)" << endl, Sleep(3000);
	    cout << "2. (Supervivencia)" << endl, Sleep(3000);
	    cin >> respuesta >> juego;
	    cin.get();

		if (respuesta == 1 && juego == 'G') {
			cout << "Has elegido un juego de Guerra supongo que eres agil con las estrategias" << endl, Sleep(3000);
			cout << ".-.-.-.-.-.-.-.-..-.-.-." << endl, Sleep(3000);
			cout << "Bienvenido a la base militar 253 sector 27" << endl, Sleep(3000);
			cout << "Te podemos brindar un arma nivel 5 con un arma nivel 1 solo que es al azar" << endl, Sleep(3000);
			cout << "Para poder elegir un arma escribe el número y la letra" << endl, Sleep(3000);
			cout << "1. (A)" << endl, Sleep(3000);
			cout << "2. (B)" << endl, Sleep(3000);
			cin >> arma >> proto;
			cin.get();

			if (arma == 1 && proto == 'A') { // selección de armas
				cout << "Te ha tocado una AP - 74A1C con 50 balas, más un machete Z - hunter" << endl, Sleep(3000);
				cout << "Ahora tu misión es construir un refugio" << endl, Sleep(3000);
				cout << "Te brindaremos materiales pero solo contamos con dos diferentes los cuales tambien serán al azar" << endl, Sleep(3000);
				cout << "¿Cuál es el material con el que deseas trabajar?" << endl, Sleep(3000);
				cout << "Para poder elegir un material escribre el número y la letra" << endl, Sleep(3000);
				cout << "1. (Madera)" << endl, Sleep(3000);
				cout << "2. (Piedra)" << endl, Sleep(3000);
				cin >> armar >> refugio;
				cin.get();

				if (armar == 1 && refugio == 'M') { // selección de material
					cout << "Has elegido Madera, no es muy resistente pero podras sobrevir ademas de que no la usaras mucho" << endl, Sleep(300);
					cout << "Bien, ahora deberas de construir algo" << endl, Sleep(3000);
					cout << "Qué es lo que haras con el material" << endl, Sleep(3000);
					cout << "1. (Fuerte)" << endl, Sleep(3000);
					cout << "2. (Mansión)" << endl, Sleep(3000);
					cin >> material >> construcción;
					cin.get();

					if (material == 1 && construcción == 'F') { // selección de construcción
						cout << "Bien has construido un fuerte, pero te recuerdo que es una base militar" << endl, Sleep(3000);
						cout << "En este momento estas siendo transportado a una zona de guera nivel 2" << endl, Sleep(3000);
						cout << "Esta zona de guerra es muy dificil pero se que lo harás muy bien" << endl, Sleep(3000);
						cout << "Es el momento para que decidas que hacer" << endl, Sleep(3000);
						cout << "1. (Esconderse)" << endl, Sleep(3000);
						cout << "2. (Atacar)" << endl, Sleep(3000);
						cin >> casa >> esconderse;
						cin.get();

						if (casa == 1 && esconderse == 'E') { // selección de movimiento
							cout << "Vas corriendo por el bosque, y de pronto te rodean has sido atrapado por el enemigo" << endl, Sleep(3000);
							cout << "Has tenido una muy mala suerte, pero vamos no te desanimes, aún llevas contigo el cuchillo" << endl, Sleep(3000);
							cout << "Has recivido un golpe en la cabeza, has quedado inconsciente" << endl, Sleep(3000);
							cout << "Estas despertando en un bodega, estas dentro de una jaula para osos, para tu suerte la cerradura no esta bien hecha" << endl, Sleep(3000);
							cout << "Ahora que es lo que haras" << endl, Sleep(3000);
							cout << "1. (Correr al bosque)" << endl, Sleep(3000);
							cout << "2. (Huir y correr hasta la base)" << endl, Sleep(3000);
							cin >> huir >> raptado;
							cin.get();

							if (huir == 1 && raptado == 'C') { // selección de movimiento1
								cout << "Has corrido al bosque ahora solo tienes un cuchillo, tendras que llegar pronto al campamento militar" << endl, Sleep(3000);
								cout << "Te has encontrado con un poco de fruta ya tienes un poco de alimento" << endl, Sleep(3000);
								cout << "A lo lejos escuchas un rio con el agua más pura que te puedas imaginar" << endl, Sleep(3000);
								cout << "Te has encontrado una botella cerca del rio, has tomado un poco de agua y ahora solo llenas la botellas para llevartela contigo" << endl, Sleep(3000);
								cout << "Ahora llego el momento de tomar una nueva decisión" << endl, Sleep(3000);
								cout << "1. (Hacer una fogata y dormir)" << endl, Sleep(3000);
								cout << "2. (Seguir caminando hasta llegar a la base enemiga)" << endl, Sleep(3000);
								cin >> hacer >> fogata;
								cin.get();

								if (hacer == 1 && fogata == 'H') { // selección de ayuda 
									cout << "Ya has hecho la fogata ahora si puedes descansar un poco más tranquilo" << endl, Sleep(3000);
									cout << "A pesar de los ruidos y tener que dormir cerca de los cuerpos de tu equipo" << endl, Sleep(3000);
									cout << "Al despertar te encuntrras de nuevo en una situación difícil" << endl, Sleep(3000);
									cout << "1. (Regresar a la base)" << endl, Sleep(3000);
									cout << "2. (Avanzar con mucha cautela hasta llegar a la base enemiga e ir matando uno por uno a los enemigos)" << endl, Sleep(3000);
									cin >> cautela >> regresar;
									cin.get();

									if (cautela = 1 && regresar == 'R') { // selección de ayuda1
										cout << "Regresando a la base, cargando con las medallas de tus compañeros caidos" << endl, Sleep(3000);
										cout << "Te ves muy cansado es muy probable que te descubran por el ruido que haces" << endl, Sleep(3000);
										cout << "De un momento a otro un disparo cae muuy cerca de ti, corres pero una de las balas te da en las costillas" << endl, Sleep(3000);
										cout << "Lastimado te das cuenta que ibas en la direccion incorrecta. Estas en la base enemiga" << endl, Sleep(3000);
										cout << "Ahora tus unicas opciones es esperar la muerte o usar tu ultimo aliento" << endl, Sleep(3000);
										cout << "1. (Destruir la base enemiga)" << endl, Sleep(3000);
										cout << "2. (Esperar la muerte)" << endl, Sleep(3000);
										cin >> destrucción >> victoria;
										cin.get();

										if (destrucción == 1 && victoria == 'D') { // victoria
											cout << "Usando tu último aliento observas la base enemiga, destruyelo y se acaba todo" << endl, Sleep(3000);
											cout << "Lanzando explosivo..." << endl, Sleep(5000);
										    cout << "Felicidades soldado has logrado eliminar la base enemiga" << endl, Sleep(3000);
											cout << "Tu servicio pasara a la historia" << endl, Sleep(3000);
											cout << "GAME OVER" << endl, Sleep(3000);
										}
										
									
									}
									else {
										cout << "Has muerto le fallaste a tu equipo y a tu país" << endl, Sleep(3000);
										cout << "Espero que no regreses en otra vida" << endl, Sleep(3000);
										cout << "GAME OVER" << endl, Sleep(3000);

									}

								}
								else {
									cout << "Cansado, lastimado y ensangrentado, decides seguir caminando a la base enemiga" << endl, Sleep(3000);
									cout << "De armas estas utilizando las munciones de tus compañeros muertos" << endl, Sleep(3000);
									cout << "Aún así te quedas pensando en que es lo mejor que puedes hacer para ti" << endl, Sleep(3000);
									cout << "1. (Regresar a la base)" << endl, Sleep(3000);
									cout << "2. (Avanzar con mcuha cautela hasta llegar a la base enemiga e ir matando uno por uno a los enemigos)" << endl, Sleep(3000);
									cin >> cautela >> regresar;
									cin.get();
									
								}



							}
							else {
								cout << "Has corrido hasta la base, estas muy cansado y no has conseguido alimento" << endl, Sleep(3000);
								cout << "Estas a punto de tocar la puerta cuando de pronto te rodea tú equipo" << endl, Sleep(3000);
								cout << "Les explicas que eres un soldado que fuiste raptado, cuando terminaste de hablar te desvaneciste" << endl, Sleep(3000);
								cout << "Despiertas y tu general te dice que tienes una nueva mision" << endl, Sleep(3000);
								cout << "En este momento estas seindo transportado a la base de la misión dos" << endl, Sleep(3000);
								cout << "De pronto se encuentran con una emboscada enemiga" << endl, Sleep(3000);
								cout << "Has caido del transporte en el que ibas y te has golpeado la cabeza" << endl, Sleep(3000);
								cout << "Despiertas después de unas horas y te das cuenta que tu equipo a sido asesinado por completo" << endl, Sleep(3000);
								cout << "Que es lo que haras ahora" << endl, Sleep(3000);
								cout << "1. (Hacer una fogata y dormir)" << endl, Sleep(3000);
								cout << "2. (Seguir caminando hasta llegar a la base)" << endl, Sleep(3000);
								cin >> hacer >> fogata;
								cin.get();
								
							}

						}
						else {
						    cout << "Eres muy valiente has atacado con una gran eficacia" << endl, Sleep(3000);
						    cout << "Tú habilidad con el arma es increible, tú y tu equipo han derrotado una base enemiga" << endl, Sleep(3000);
						    cout << "Felicidades soldado has subido de rango" << endl, Sleep(3000);
						    cout << "Listo para la misión dos?" << endl, Sleep(3000);
						    cout << "1. Si estoy más que listo" << endl, Sleep(3000);
						    cout << "2. No, estoy cansado" << endl, Sleep(3000);
						    cin >> huir >> raptado;
						    cin.get();

						}

					}
					else { // movimiento parte 1-4
					    cout << "Vaya que vanidoso eres acabas de construir una mansión para ti solo" << endl, Sleep(3000);
					    cout << "Pasando de lado tu vanidad, estas siendo transportado a un zona de guerra nivel 2" << endl, Sleep(3000);
					    cout << "Este es el momento para que decidas que hacer" << endl, Sleep(3000);
					    cout << "1. (Esconderse)" << endl, Sleep(3000);
					    cout << "2. (Atacar" << endl, Sleep(3000);
					    cin >> casa >> esconderse;
					    cin.get();

						if (casa == 1 && esconderse == 'E') {
							cout << "Vas corriendo por el bosque, y de pronto te rodean has sido atrapado por el enemigo" << endl, Sleep(3000);
							cout << "Has tenido una muy mala suerte, pero vamos no te desanimes, aún llevas contigo el cuchillo" << endl, Sleep(3000);
							cout << "Has recivido un golpe en la cabeza, has quedado inconsciente" << endl, Sleep(3000);
							cout << "Estas despertando en un bodega, estas dentro de una jaula para osos, para tu suerte la cerradura no esta bien hecha" << endl, Sleep(3000);
							cout << "Ahora que es lo que haras" << endl, Sleep(3000);
							cout << "1. (Correr al bosque)" << endl, Sleep(3000);
							cout << "2. (Huir y correr hasta la base)" << endl, Sleep(3000);
							cin >> huir >> raptado;
							cin.get();

							if (huir == 1 && raptado == 'C') {
								cout << "Has corrido al bosque ahora solo tienes un cuchillo, tendras que llegar pronto al campamento militar" << endl, Sleep(3000);
								cout << "Te has encontrado con un poco de fruta ya tienes un poco de alimento" << endl, Sleep(3000);
								cout << "A lo lejos escuchas un rio con el agua más pura que te puedas imaginar" << endl, Sleep(3000);
								cout << "Te has encontrado una botella cerca del rio, has tomado un poco de agua y ahora solo llenas la botellas para llevartela contigo" << endl, Sleep(3000);
								cout << "Ahora llego el momento de tomar una nueva decisión" << endl, Sleep(3000);
								cout << "1. (Hacer una fogata y dormir)" << endl, Sleep(3000);
								cout << "2. (Seguir caminando hasta llegar a la base enemiga)" << endl, Sleep(3000);
								cin >> hacer >> fogata;
								cin.get();

								if (hacer == 1 && fogata == 'H') {
									cout << "Ya has hecho la fogata ahora si puedes descansar un poco más tranquilo" << endl, Sleep(3000);
									cout << "A pesar de los ruidos y tener que dormir cerca de los cuerpos de tu equipo" << endl, Sleep(3000);
									cout << "Al despertar te encuntrras de nuevo en una situación difícil" << endl, Sleep(3000);
									cout << "1. (Regresar a la base)" << endl, Sleep(3000);
									cout << "2. (Avanzar con mucha cautela hasta llegar a la base enemiga e ir matando uno por uno a los enemigos)" << endl, Sleep(3000);
									cin >> cautela >> regresar;
									cin.get();

									if (cautela = 1 && regresar == 'R') {
										cout << "Regresando a la base, cargando con las medallas de tus compañeros caidos" << endl, Sleep(3000);
										cout << "Te ves muy cansado es muy probable que te descubran por el ruido que haces" << endl, Sleep(3000);
										cout << "De un momento a otro un disparo cae muuy cerca de ti, corres pero una de las balas te da en las costillas" << endl, Sleep(3000);
										cout << "Lastimado te das cuenta que ibas en la direccion incorrecta. Estas en la base enemiga" << endl, Sleep(3000);
										cout << "Ahora tus unicas opciones es esperar la muerte o usar tu ultimo aliento" << endl, Sleep(3000);
										cout << "1. (Destruir la base enemiga)" << endl, Sleep(3000);
										cout << "2. (Esperar la muerte)" << endl, Sleep(3000);
										cin >> destrucción >> victoria;
										cin.get();

										if (destrucción == 1 && victoria == 'D') { // victoria
											cout << "Usando tu último aliento observas la base enemiga, destruyelo y se acaba todo" << endl, Sleep(3000);
											cout << "Lanzando explosivo..." << endl, Sleep(5000);
											cout << "Felicidades soldado has logrado eliminar la base enemiga" << endl, Sleep(3000);
											cout << "Tu servicio pasara a la historia" << endl, Sleep(3000);
											cout << "GAME OVER" << endl, Sleep(3000);
										}

									}
									else { // movimiento 1-7
										cout << "Has muerto le fallaste a tu equipo y a tu país" << endl, Sleep(3000);
										cout << "Espero que no regreses en otra vida" << endl, Sleep(3000);
										cout << "GAME OVER" << endl, Sleep(3000);

									}

								}
								else { // movimiento 1-6
									cout << "Cansado, lastimado y ensangrentado, decides seguir caminando a la base enemiga" << endl, Sleep(3000);
									cout << "De armas estas utilizando las munciones de tus compañeros muertos" << endl, Sleep(3000);
									cout << "Aún así te quedas pensando en que es lo mejor que puedes hacer para ti" << endl, Sleep(3000);
									cout << "1. (Regresar a la base)" << endl, Sleep(3000);
									cout << "2. (Avanzar con mcuha cautela hasta llegar a la base enemiga e ir matando uno por uno a los enemigos)" << endl, Sleep(3000);
									cin >> cautela >> regresar;
									cin.get();

									if (cautela = 1 && regresar == 'R') {
										cout << "Regresando a la base, cargando con las medallas de tus compañeros caidos" << endl, Sleep(3000);
										cout << "Te ves muy cansado es muy probable que te descubran por el ruido que haces" << endl, Sleep(3000);
										cout << "De un momento a otro un disparo cae muuy cerca de ti, corres pero una de las balas te da en las costillas" << endl, Sleep(3000);
										cout << "Lastimado te das cuenta que ibas en la direccion incorrecta. Estas en la base enemiga" << endl, Sleep(3000);
										cout << "Ahora tus unicas opciones es esperar la muerte o usar tu ultimo aliento" << endl, Sleep(3000);
										cout << "1. (Destruir la base enemiga)" << endl, Sleep(3000);
										cout << "2. (Esperar la muerte)" << endl, Sleep(3000);
										cin >> destrucción >> victoria;
										cin.get();

										if (destrucción == 1 && victoria == 'D') { // victoria
											cout << "Usando tu último aliento observas la base enemiga, destruyelo y se acaba todo" << endl, Sleep(3000);
											cout << "Lanzando explosivo..." << endl, Sleep(5000);
											cout << "Felicidades soldado has logrado eliminar la base enemiga" << endl, Sleep(3000);
											cout << "Tu servicio pasara a la historia" << endl, Sleep(3000);
											cout << "GAME OVER" << endl, Sleep(3000);
										}

									}
									else {
										cout << "Has muerto le fallaste a tu equipo y a tu país" << endl, Sleep(3000);
										cout << "Espero que no regreses en otra vida" << endl, Sleep(3000);
										cout << "GAME OVER" << endl, Sleep(3000);

									}

								}

							}
							else { // movimeinto 1-5
								cout << "Has corrido hasta la base, estas muy cansado y no has conseguido alimento" << endl, Sleep(3000);
								cout << "Estas a punto de tocar la puerta cuando de pronto te rodea tú equipo" << endl, Sleep(3000);
								cout << "Les explicas que eres un soldado que fuiste raptado, cuando terminaste de hablar te desvaneciste" << endl, Sleep(3000);
								cout << "Despiertas y tu general te dice que tienes una nueva mision" << endl, Sleep(3000);
								cout << "En este momento estas seindo transportado a la base de la misión dos" << endl, Sleep(3000);
								cout << "De pronto se encuentran con una emboscada enemiga" << endl, Sleep(3000);
								cout << "Has caido del transporte en el que ibas y te has golpeado la cabeza" << endl, Sleep(3000);
								cout << "Despiertas después de unas horas y te das cuenta que tu equipo a sido asesinado por completo" << endl, Sleep(3000);
								cout << "Que es lo que haras ahora" << endl, Sleep(3000);
								cout << "1. (Hacer una fogata y dormir)" << endl, Sleep(3000);
								cout << "2. (Seguir caminando hasta llegar a la base)" << endl, Sleep(3000);
								cin >> hacer >> fogata;
								cin.get();

								if (hacer == 1 && fogata == 'H') {
									cout << "Ya has hecho la fogata ahora si puedes descansar un poco más tranquilo" << endl, Sleep(3000);
									cout << "A pesar de los ruidos y tener que dormir cerca de los cuerpos de tu equipo" << endl, Sleep(3000);
									cout << "Al despertar te encuntrras de nuevo en una situación difícil" << endl, Sleep(3000);
									cout << "1. (Regresar a la base)" << endl, Sleep(3000);
									cout << "2. (Avanzar con mucha cautela hasta llegar a la base enemiga e ir matando uno por uno a los enemigos)" << endl, Sleep(3000);
									cin >> cautela >> regresar;
									cin.get();

									if (cautela = 1 && regresar == 'R') {
										cout << "Regresando a la base, cargando con las medallas de tus compañeros caidos" << endl, Sleep(3000);
										cout << "Te ves muy cansado es muy probable que te descubran por el ruido que haces" << endl, Sleep(3000);
										cout << "De un momento a otro un disparo cae muuy cerca de ti, corres pero una de las balas te da en las costillas" << endl, Sleep(3000);
										cout << "Lastimado te das cuenta que ibas en la direccion incorrecta. Estas en la base enemiga" << endl, Sleep(3000);
										cout << "Ahora tus unicas opciones es esperar la muerte o usar tu ultimo aliento" << endl, Sleep(3000);
										cout << "1. (Destruir la base enemiga)" << endl, Sleep(3000);
										cout << "2. (Esperar la muerte)" << endl, Sleep(3000);
										cin >> destrucción >> victoria;
										cin.get();

										if (destrucción == 1 && victoria == 'D') { // victoria
											cout << "Usando tu último aliento observas la base enemiga, destruyelo y se acaba todo" << endl, Sleep(3000);
											cout << "Lanzando explosivo..." << endl, Sleep(5000);
											cout << "Felicidades soldado has logrado eliminar la base enemiga" << endl, Sleep(3000);
											cout << "Tu servicio pasara a la historia" << endl, Sleep(3000);
											cout << "GAME OVER" << endl, Sleep(3000);
										}

									}
									else {
										cout << "Has muerto le fallaste a tu equipo y a tu país" << endl, Sleep(3000);
										cout << "Espero que no regreses en otra vida" << endl, Sleep(3000);
										cout << "GAME OVER" << endl, Sleep(3000);
									}

								}
								else {
									cout << "Cansado, lastimado y ensangrentado, decides seguir caminando a la base enemiga" << endl, Sleep(3000);
									cout << "De armas estas utilizando las munciones de tus compañeros muertos" << endl, Sleep(3000);
									cout << "Aún así te quedas pensando en que es lo mejor que puedes hacer para ti" << endl, Sleep(3000);
									cout << "1. (Regresar a la base)" << endl, Sleep(3000);
									cout << "2. (Avanzar con mcuha cautela hasta llegar a la base enemiga e ir matando uno por uno a los enemigos)" << endl, Sleep(3000);
									cin >> cautela >> regresar;
									cin.get();
								}

							}

						}
						else { // movimietno 1-4
							cout << "Eres muy valiente has atacado con una gran eficacia" << endl, Sleep(3000);
							cout << "Tú habilidad con el arma es increible, tú y tu equipo han derrotado una base enemiga" << endl, Sleep(3000);
							cout << "Felicidades soldado has subido de rango" << endl, Sleep(3000);
							cout << "Listo para la misión dos?" << endl, Sleep(3000);
							cout << "1. Si estoy más que listo" << endl, Sleep(3000);
							cout << "2. No, estoy cansado" << endl, Sleep(3000);
							cin >> huir >> raptado;
							cin.get();

							if (huir == 1 && raptado == 'C') {
								cout << "Has corrido al bosque ahora solo tienes un cuchillo, tendras que llegar pronto al campamento militar" << endl, Sleep(3000);
								cout << "Te has encontrado con un poco de fruta ya tienes un poco de alimento" << endl, Sleep(3000);
								cout << "A lo lejos escuchas un rio con el agua más pura que te puedas imaginar" << endl, Sleep(3000);
								cout << "Te has encontrado una botella cerca del rio, has tomado un poco de agua y ahora solo llenas la botellas para llevartela contigo" << endl, Sleep(3000);
								cout << "Ahora llego el momento de tomar una nueva decisión" << endl, Sleep(3000);
								cout << "1. (Hacer una fogata y dormir)" << endl, Sleep(3000);
								cout << "2. (Seguir caminando hasta llegar a la base enemiga)" << endl, Sleep(3000);
								cin >> hacer >> fogata;
								cin.get();

								if (hacer == 1 && fogata == 'H') {
									cout << "Ya has hecho la fogata ahora si puedes descansar un poco más tranquilo" << endl, Sleep(3000);
									cout << "A pesar de los ruidos y tener que dormir cerca de los cuerpos de tu equipo" << endl, Sleep(3000);
									cout << "Al despertar te encuntrras de nuevo en una situación difícil" << endl, Sleep(3000);
									cout << "1. (Regresar a la base)" << endl, Sleep(3000);
									cout << "2. (Avanzar con mucha cautela hasta llegar a la base enemiga e ir matando uno por uno a los enemigos)" << endl, Sleep(3000);
									cin >> cautela >> regresar;
									cin.get();

									if (cautela = 1 && regresar == 'R') {
										cout << "Regresando a la base, cargando con las medallas de tus compañeros caidos" << endl, Sleep(3000);
										cout << "Te ves muy cansado es muy probable que te descubran por el ruido que haces" << endl, Sleep(3000);
										cout << "De un momento a otro un disparo cae muuy cerca de ti, corres pero una de las balas te da en las costillas" << endl, Sleep(3000);
										cout << "Lastimado te das cuenta que ibas en la direccion incorrecta. Estas en la base enemiga" << endl, Sleep(3000);
										cout << "Ahora tus unicas opciones es esperar la muerte o usar tu ultimo aliento" << endl, Sleep(3000);
										cout << "1. (Destruir la base enemiga)" << endl, Sleep(3000);
										cout << "2. (Esperar la muerte)" << endl, Sleep(3000);
										cin >> destrucción >> victoria;
										cin.get();

										if (destrucción == 1 && victoria == 'D') { // victoria
											cout << "Usando tu último aliento observas la base enemiga, destruyelo y se acaba todo" << endl, Sleep(3000);
											cout << "Lanzando explosivo..." << endl, Sleep(5000);
											cout << "Felicidades soldado has logrado eliminar la base enemiga" << endl, Sleep(3000);
											cout << "Tu servicio pasara a la historia" << endl, Sleep(3000);
											cout << "GAME OVER" << endl, Sleep(3000);
										}

									}
									else {
										cout << "Has muerto le fallaste a tu equipo y a tu país" << endl, Sleep(3000);
										cout << "Espero que no regreses en otra vida" << endl, Sleep(3000);
										cout << "GAME OVER" << endl, Sleep(3000);
									}

								}
								else {
									cout << "Cansado, lastimado y ensangrentado, decides seguir caminando a la base enemiga" << endl, Sleep(3000);
									cout << "De armas estas utilizando las munciones de tus compañeros muertos" << endl, Sleep(3000);
									cout << "Aún así te quedas pensando en que es lo mejor que puedes hacer para ti" << endl, Sleep(3000);
									cout << "1. (Regresar a la base)" << endl, Sleep(3000);
									cout << "2. (Avanzar con mcuha cautela hasta llegar a la base enemiga e ir matando uno por uno a los enemigos)" << endl, Sleep(3000);
									cin >> cautela >> regresar;
									cin.get();
								}

							}
							else {
								cout << "Has corrido hasta la base, estas muy cansado y no has conseguido alimento" << endl, Sleep(3000);
								cout << "Estas a punto de tocar la puerta cuando de pronto te rodea tú equipo" << endl, Sleep(3000);
								cout << "Les explicas que eres un soldado que fuiste raptado, cuando terminaste de hablar te desvaneciste" << endl, Sleep(3000);
								cout << "Despiertas y tu general te dice que tienes una nueva mision" << endl, Sleep(3000);
								cout << "En este momento estas seindo transportado a la base de la misión dos" << endl, Sleep(3000);
								cout << "De pronto se encuentran con una emboscada enemiga" << endl, Sleep(3000);
								cout << "Has caido del transporte en el que ibas y te has golpeado la cabeza" << endl, Sleep(3000);
								cout << "Despiertas después de unas horas y te das cuenta que tu equipo a sido asesinado por completo" << endl, Sleep(3000);
								cout << "Que es lo que haras ahora" << endl, Sleep(3000);
								cout << "1. (Hacer una fogata y dormir)" << endl, Sleep(3000);
								cout << "2. (Seguir caminando hasta llegar a la base)" << endl, Sleep(3000);
								cin >> hacer >> fogata;
								cin.get();
							}

						}

					}

				}
				else { // movimiento parte 1-3 
				    cout << "Has elegido Piedra tu refugio sera resistente pero lastima que solo lo usaras una o dos veces" << endl, Sleep(3000);
				    cout << "Bien, ahora deberas de construir algo" << endl, Sleep(3000);
				    cout << "1. (Fuerte)" << endl, Sleep(3000);
				    cout << "2. (Mansión)" << endl, Sleep(3000);
				    cin >> material >> construcción;

					if (armar == 1 && refugio == 'M') {
						cout << "Has elegido Madera, no es muy resistente pero podras sobrevir ademas de que no la usaras mucho" << endl, Sleep(300);
						cout << "Bien, ahora deberas de construir algo" << endl, Sleep(3000);
						cout << "Qué es lo que haras con el material" << endl, Sleep(3000);
						cout << "1. (Fuerte)" << endl, Sleep(3000);
						cout << "2. (Mansión)" << endl, Sleep(3000);
						cin >> material >> construcción;
						cin.get();

						if (material == 1 && construcción == 'F') {
							cout << "Bien has construido una Fuerte, pero te recuerdo que es una base militar" << endl, Sleep(3000);
							cout << "En este momento estas siendo transportado a una zona de guera nivel 2" << endl, Sleep(3000);
							cout << "Esta zona de guerra es muy dificil pero se que lo harás muy bien" << endl, Sleep(3000);
							cout << "Es el momento para que decidas que hacer" << endl, Sleep(3000);
							cout << "1. (Esconderse)" << endl, Sleep(3000);
							cout << "2. (Atacar)" << endl, Sleep(3000);
							cin >> casa >> esconderse;
							cin.get();

							if (casa == 1 && esconderse == 'E') {
								cout << "Vas corriendo por el bosque, y de pronto te rodean has sido atrapado por el enemigo" << endl, Sleep(3000);
								cout << "Has tenido una muy mala suerte, pero vamos no te desanimes, aún llevas contigo el cuchillo" << endl, Sleep(3000);
								cout << "Has recivido un golpe en la cabeza, has quedado inconsciente" << endl, Sleep(3000);
								cout << "Estas despertando en un bodega, estas dentro de una jaula para osos, para tu suerte la cerradura no esta bien hecha" << endl, Sleep(3000);
								cout << "Ahora que es lo que haras" << endl, Sleep(3000);
								cout << "1. (Correr al bosque)" << endl, Sleep(3000);
								cout << "2. (Huir y correr hasta la base)" << endl, Sleep(3000);
								cin >> huir >> raptado;
								cin.get();

								if (huir == 1 && raptado == 'C') {
									cout << "Has corrido al bosque ahora solo tienes un cuchillo, tendras que llegar pronto al campamento militar" << endl, Sleep(3000);
									cout << "Te has encontrado con un poco de fruta ya tienes un poco de alimento" << endl, Sleep(3000);
									cout << "A lo lejos escuchas un rio con el agua más pura que te puedas imaginar" << endl, Sleep(3000);
									cout << "Te has encontrado una botella cerca del rio, has tomado un poco de agua y ahora solo llenas la botellas para llevartela contigo" << endl, Sleep(3000);
									cout << "Ahora llego el momento de tomar una nueva decisión" << endl, Sleep(3000);
									cout << "1. (Hacer una fogata y dormir)" << endl, Sleep(3000);
									cout << "2. (Seguir caminando hasta llegar a la base enemiga)" << endl, Sleep(3000);
									cin >> hacer >> fogata;
									cin.get();

									if (hacer == 1 && fogata == 'H') {
										cout << "Ya has hecho la fogata ahora si puedes descansar un poco más tranquilo" << endl, Sleep(3000);
										cout << "A pesar de los ruidos y tener que dormir cerca de los cuerpos de tu equipo" << endl, Sleep(3000);
										cout << "Al despertar te encuntrras de nuevo en una situación difícil" << endl, Sleep(3000);
										cout << "1. (Regresar a la base)" << endl, Sleep(3000);
										cout << "2. (Avanzar con mucha cautela hasta llegar a la base enemiga e ir matando uno por uno a los enemigos)" << endl, Sleep(3000);
										cin >> cautela >> regresar;
										cin.get();

										if (cautela = 1 && regresar == 'R') {
											cout << "Regresando a la base, cargando con las medallas de tus compañeros caidos" << endl, Sleep(3000);
											cout << "Te ves muy cansado es muy probable que te descubran por el ruido que haces" << endl, Sleep(3000);
											cout << "De un momento a otro un disparo cae muuy cerca de ti, corres pero una de las balas te da en las costillas" << endl, Sleep(3000);
											cout << "Lastimado te das cuenta que ibas en la direccion incorrecta. Estas en la base enemiga" << endl, Sleep(3000);
											cout << "Ahora tus unicas opciones es esperar la muerte o usar tu ultimo aliento" << endl, Sleep(3000);
											cout << "1. (Destruir la base enemiga)" << endl, Sleep(3000);
											cout << "2. (Esperar la muerte)" << endl, Sleep(3000);
											cin >> destrucción >> victoria;
											cin.get();

											if (destrucción == 1 && victoria == 'D') { // victoria
												cout << "Usando tu último aliento observas la base enemiga, destruyelo y se acaba todo" << endl, Sleep(3000);
												cout << "Lanzando explosivo..." << endl, Sleep(5000);
												cout << "Felicidades soldado has logrado eliminar la base enemiga" << endl, Sleep(3000);
												cout << "Tu servicio pasara a la historia" << endl, Sleep(3000);
												cout << "GAME OVER" << endl, Sleep(3000);
											}

										}
										else {
											cout << "Has muerto le fallaste a tu equipo y a tu país" << endl, Sleep(3000);
											cout << "Espero que no regreses en otra vida" << endl, Sleep(3000);
											cout << "GAME OVER" << endl, Sleep(3000);
										}

									}
									else {
										cout << "Cansado, lastimado y ensangrentado, decides seguir caminando a la base enemiga" << endl, Sleep(3000);
										cout << "De armas estas utilizando las munciones de tus compañeros muertos" << endl, Sleep(3000);
										cout << "Aún así te quedas pensando en que es lo mejor que puedes hacer para ti" << endl, Sleep(3000);
										cout << "1. (Regresar a la base)" << endl, Sleep(3000);
										cout << "2. (Avanzar con mcuha cautela hasta llegar a la base enemiga e ir matando uno por uno a los enemigos)" << endl, Sleep(3000);
										cin >> cautela >> regresar;
										cin.get();
									}

								}
								else {
									cout << "Has corrido hasta la base, estas muy cansado y no has conseguido alimento" << endl, Sleep(3000);
									cout << "Estas a punto de tocar la puerta cuando de pronto te rodea tú equipo" << endl, Sleep(3000);
									cout << "Les explicas que eres un soldado que fuiste raptado, cuando terminaste de hablar te desvaneciste" << endl, Sleep(3000);
									cout << "Despiertas y tu general te dice que tienes una nueva mision" << endl, Sleep(3000);
									cout << "En este momento estas seindo transportado a la base de la misión dos" << endl, Sleep(3000);
									cout << "De pronto se encuentran con una emboscada enemiga" << endl, Sleep(3000);
									cout << "Has caido del transporte en el que ibas y te has golpeado la cabeza" << endl, Sleep(3000);
									cout << "Despiertas después de unas horas y te das cuenta que tu equipo a sido asesinado por completo" << endl, Sleep(3000);
									cout << "Que es lo que haras ahora" << endl, Sleep(3000);
									cout << "1. (Hacer una fogata y dormir)" << endl, Sleep(3000);
									cout << "2. (Seguir caminando hasta llegar a la base)" << endl, Sleep(3000);
									cin >> hacer >> fogata;
									cin.get();
								}

							}
							else {
								cout << "Eres muy valiente has atacado con una gran eficacia" << endl, Sleep(3000);
								cout << "Tú habilidad con el arma es increible, tú y tu equipo han derrotado una base enemiga" << endl, Sleep(3000);
								cout << "Felicidades soldado has subido de rango" << endl, Sleep(3000);
								cout << "Listo para la misión dos?" << endl, Sleep(3000);
								cout << "1. Si estoy más que listo" << endl, Sleep(3000);
								cout << "2. No, estoy cansado" << endl, Sleep(3000);
								cin >> huir >> raptado;
								cin.get();
							}

						}
						else {
							cout << "Vaya que vanidoso eres acabas de construir una mansión para ti solo" << endl, Sleep(3000);
							cout << "Pasando de lado tu vanidad, estas siendo transportado a un zona de guerra nivel 2" << endl, Sleep(3000);
							cout << "Este es el momento para que decidas que hacer" << endl, Sleep(3000);
							cout << "1. (Esconderse)" << endl, Sleep(3000);
							cout << "2. (Atacar" << endl, Sleep(3000);
							cin >> casa >> esconderse;
							cin.get();
						}

					}
					else {
						cout << "Has elegido Piedra tu refugio sera resistente pero lastima que solo lo usaras una o dos veces" << endl, Sleep(3000);
						cout << "Bien, ahora deberas de construir algo" << endl, Sleep(3000);
						cout << "1. (Fuerte)" << endl, Sleep(3000);
						cout << "2. (Mansión)" << endl, Sleep(3000);
						cin >> material >> construcción;
					}

				}

			}
			else {  // movimiento parte 1-2
			    cout << "Te ha tocado una Type - 89 CQB mas un Cuchillo SmittyBilt" << endl, Sleep(3000);
			    cout << "Ahora tu misión sera construir un refugio" << endl, Sleep(3000);
			    cout << "Te brindaremos materiales pero solo contamos con dos diferentes, los cuales tambien serán al azar" << endl, Sleep(3000);
			    cout << "¿Cuál es el material con el que deseas trabajar?" << endl, Sleep(3000);
			    cout << "Para poder elegir un material escribe el número y la letra" << endl, Sleep(3000);
			    cout << "1. (Madera)" << endl, Sleep(3000);
			    cout << "2. (Piedra)" << endl, Sleep(3000);
			    cin >> armar >> refugio;
			    cin.get();

				if (armar == 1 && refugio == 'M') {
					cout << "Has elegido Madera, no es muy resistente pero podras sobrevir ademas de que no la usaras mucho" << endl, Sleep(300);
					cout << "Bien, ahora deberas de construir algo" << endl, Sleep(3000);
					cout << "Qué es lo que haras con el material" << endl, Sleep(3000);
					cout << "1. (Fuerte)" << endl, Sleep(3000);
					cout << "2. (Mansión)" << endl, Sleep(3000);
					cin >> material >> construcción;
					cin.get();

					if (material == 1 && construcción == 'F') {
						cout << "Bien has construido una casa simple, pero te recuerdo que es una base militar" << endl, Sleep(3000);
						cout << "En este momento estas siendo transportado a una zona de guera nivel 2" << endl, Sleep(3000);
						cout << "Esta zona de guerra es muy dificil pero se que lo harás muy bien" << endl, Sleep(3000);
						cout << "Es el momento para que decidas que hacer" << endl, Sleep(3000);
						cout << "1. (Esconderse)" << endl, Sleep(3000);
						cout << "2. (Atacar)" << endl, Sleep(3000);
						cin >> casa >> esconderse;
						cin.get();

						if (casa == 1 && esconderse == 'E') {
							cout << "Vas corriendo por el bosque, y de pronto te rodean has sido atrapado por el enemigo" << endl, Sleep(3000);
							cout << "Has tenido una muy mala suerte, pero vamos no te desanimes, aún llevas contigo el cuchillo" << endl, Sleep(3000);
							cout << "Has recivido un golpe en la cabeza, has quedado inconsciente" << endl, Sleep(3000);
							cout << "Estas despertando en un bodega, estas dentro de una jaula para osos, para tu suerte la cerradura no esta bien hecha" << endl, Sleep(3000);
							cout << "Ahora que es lo que haras" << endl, Sleep(3000);
							cout << "1. (Correr al bosque)" << endl, Sleep(3000);
							cout << "2. (Huir y correr hasta la base)" << endl, Sleep(3000);
							cin >> huir >> raptado;
							cin.get();

							if (huir == 1 && raptado == 'C') {
								cout << "Has corrido al bosque ahora solo tienes un cuchillo, tendras que llegar pronto al campamento militar" << endl, Sleep(3000);
								cout << "Te has encontrado con un poco de fruta ya tienes un poco de alimento" << endl, Sleep(3000);
								cout << "A lo lejos escuchas un rio con el agua más pura que te puedas imaginar" << endl, Sleep(3000);
								cout << "Te has encontrado una botella cerca del rio, has tomado un poco de agua y ahora solo llenas la botellas para llevartela contigo" << endl, Sleep(3000);
								cout << "Ahora llego el momento de tomar una nueva decisión" << endl, Sleep(3000);
								cout << "1. (Hacer una fogata y dormir)" << endl, Sleep(3000);
								cout << "2. (Seguir caminando hasta llegar a la base enemiga)" << endl, Sleep(3000);
								cin >> hacer >> fogata;
								cin.get();

								if (hacer == 1 && fogata == 'H') {
									cout << "Ya has hecho la fogata ahora si puedes descansar un poco más tranquilo" << endl, Sleep(3000);
									cout << "A pesar de los ruidos y tener que dormir cerca de los cuerpos de tu equipo" << endl, Sleep(3000);
									cout << "Al despertar te encuntrras de nuevo en una situación difícil" << endl, Sleep(3000);
									cout << "1. (Regresar a la base)" << endl, Sleep(3000);
									cout << "2. (Avanzar con mucha cautela hasta llegar a la base enemiga e ir matando uno por uno a los enemigos)" << endl, Sleep(3000);
									cin >> cautela >> regresar;
									cin.get();

									if (cautela = 1 && regresar == 'R') {
										cout << "Regresando a la base, cargando con las medallas de tus compañeros caidos" << endl, Sleep(3000);
										cout << "Te ves muy cansado es muy probable que te descubran por el ruido que haces" << endl, Sleep(3000);
										cout << "De un momento a otro un disparo cae muuy cerca de ti, corres pero una de las balas te da en las costillas" << endl, Sleep(3000);
										cout << "Lastimado te das cuenta que ibas en la direccion incorrecta. Estas en la base enemiga" << endl, Sleep(3000);
										cout << "Ahora tus unicas opciones es esperar la muerte o usar tu ultimo aliento" << endl, Sleep(3000);
										cout << "1. (Destruir la base enemiga)" << endl, Sleep(3000);
										cout << "2. (Esperar la muerte)" << endl, Sleep(3000);
										cin >> destrucción >> victoria;
										cin.get();

										if (destrucción == 1 && victoria == 'D') { // victoria
											cout << "Usando tu último aliento observas la base enemiga, destruyelo y se acaba todo" << endl, Sleep(3000);
											cout << "Lanzando explosivo..." << endl, Sleep(5000);
											cout << "Felicidades soldado has logrado eliminar la base enemiga" << endl, Sleep(3000);
											cout << "Tu servicio pasara a la historia" << endl, Sleep(3000);
											cout << "GAME OVER" << endl, Sleep(3000);
										}

									}
									else {
										cout << "Has muerto le fallaste a tu equipo y a tu país" << endl, Sleep(3000);
										cout << "Espero que no regreses en otra vida" << endl, Sleep(3000);
										cout << "GAME OVER" << endl, Sleep(3000);
									}

								}
								else {
									cout << "Cansado, lastimado y ensangrentado, decides seguir caminando a la base enemiga" << endl, Sleep(3000);
									cout << "De armas estas utilizando las munciones de tus compañeros muertos" << endl, Sleep(3000);
									cout << "Aún así te quedas pensando en que es lo mejor que puedes hacer para ti" << endl, Sleep(3000);
									cout << "1. (Regresar a la base)" << endl, Sleep(3000);
									cout << "2. (Avanzar con mcuha cautela hasta llegar a la base enemiga e ir matando uno por uno a los enemigos)" << endl, Sleep(3000);
									cin >> cautela >> regresar;
									cin.get();
								}

							}
							else {
								cout << "Has corrido hasta la base, estas muy cansado y no has conseguido alimento" << endl, Sleep(3000);
								cout << "Estas a punto de tocar la puerta cuando de pronto te rodea tú equipo" << endl, Sleep(3000);
								cout << "Les explicas que eres un soldado que fuiste raptado, cuando terminaste de hablar te desvaneciste" << endl, Sleep(3000);
								cout << "Despiertas y tu general te dice que tienes una nueva mision" << endl, Sleep(3000);
								cout << "En este momento estas seindo transportado a la base de la misión dos" << endl, Sleep(3000);
								cout << "De pronto se encuentran con una emboscada enemiga" << endl, Sleep(3000);
								cout << "Has caido del transporte en el que ibas y te has golpeado la cabeza" << endl, Sleep(3000);
								cout << "Despiertas después de unas horas y te das cuenta que tu equipo a sido asesinado por completo" << endl, Sleep(3000);
								cout << "Que es lo que haras ahora" << endl, Sleep(3000);
								cout << "1. (Hacer una fogata y dormir)" << endl, Sleep(3000);
								cout << "2. (Seguir caminando hasta llegar a la base)" << endl, Sleep(3000);
								cin >> hacer >> fogata;
								cin.get();
							}

						}
						else {
							cout << "Eres muy valiente has atacado con una gran eficacia" << endl, Sleep(3000);
							cout << "Tú habilidad con el arma es increible, tú y tu equipo han derrotado una base enemiga" << endl, Sleep(3000);
							cout << "Felicidades soldado has subido de rango" << endl, Sleep(3000);
							cout << "Listo para la misión dos?" << endl, Sleep(3000);
							cout << "1. Si estoy más que listo" << endl, Sleep(3000);
							cout << "2. No, estoy cansado" << endl, Sleep(3000);
							cin >> huir >> raptado;
							cin.get();
						}

					}
					else {
						cout << "Vaya que vanidoso eres acabas de construir una mansión para ti solo" << endl, Sleep(3000);
						cout << "Pasando de lado tu vanidad, estas siendo transportado a un zona de guerra nivel 2" << endl, Sleep(3000);
						cout << "Este es el momento para que decidas que hacer" << endl, Sleep(3000);
						cout << "1. (Esconderse)" << endl, Sleep(3000);
						cout << "2. (Atacar" << endl, Sleep(3000);
						cin >> casa >> esconderse;
						cin.get();
					}

				}
				else {
					cout << "Has elegido Piedra tu refugio sera resistente pero lastima que solo lo usaras una o dos veces" << endl, Sleep(3000);
					cout << "Bien, ahora deberas de construir algo" << endl, Sleep(3000);
					cout << "1. (Fuerte)" << endl, Sleep(3000);
					cout << "2. (Mansión)" << endl, Sleep(3000);
					cin >> material >> construcción;
				}
	
			}

		}
		else {  // movimiento parte 1-1
			cout << "Has elegido un juego de supervivencia, supongo que eres agil para administrar recursos" << endl, Sleep(3000);
			cout << ".-.-.-.-.-.-.-.-.--.-.-." << endl, Sleep(3000);
			cout << "Bienvenido a la isla crawler espero que sepas sobrevir" << endl, Sleep(3000);
			cout << "Te podemos brindar algunas herramientas basicas pero son aleatorias" << endl, Sleep(3000);
			cout << "1. (A)" << endl, Sleep(3000);
			cout << "2. (B)" << endl, Sleep(3000);
			cin >> arma >> proto;
			cin.get();

			if (arma == 1 && proto == 'A') { // selección de armas
				cout << "Te ha tocado una AP - 74A1C con 50 balas, más un machete Z - hunter" << endl, Sleep(3000);
				cout << "Ahora tu misión es construir un refugio" << endl, Sleep(3000);
				cout << "Te brindaremos materiales pero solo contamos con dos diferentes los cuales tambien serán al azar" << endl, Sleep(3000);
				cout << "¿Cuál es el material con el que deseas trabajar?" << endl, Sleep(3000);
				cout << "Para poder elegir un material escribre el número y la letra" << endl, Sleep(3000);
				cout << "1. (Madera)" << endl, Sleep(3000);
				cout << "2. (Piedra)" << endl, Sleep(3000);
				cin >> armar >> refugio;
				cin.get();

				if (armar == 1 && refugio == 'M') { // selección de material
					cout << "Has elegido Madera, no es muy resistente pero podras sobrevir ademas de que no la usaras mucho" << endl, Sleep(300);
					cout << "Bien, ahora deberas de construir algo" << endl, Sleep(3000);
					cout << "Qué es lo que haras con el material" << endl, Sleep(3000);
					cout << "1. (Fuerte)" << endl, Sleep(3000);
					cout << "2. (Mansión)" << endl, Sleep(3000);
					cin >> material >> construcción;
					cin.get();

					if (material == 1 && construcción == 'F') { // selección de construcción
						cout << "Bien has construido una casa simple, pero te recuerdo que es una base militar" << endl, Sleep(3000);
						cout << "En este momento estas siendo transportado a una zona de guera nivel 2" << endl, Sleep(3000);
						cout << "Esta zona de guerra es muy dificil pero se que lo harás muy bien" << endl, Sleep(3000);
						cout << "Es el momento para que decidas que hacer" << endl, Sleep(3000);
						cout << "1. (Esconderse)" << endl, Sleep(3000);
						cout << "2. (Atacar)" << endl, Sleep(3000);
						cin >> casa >> esconderse;
						cin.get();

						if (casa == 1 && esconderse == 'E') { // selección de movimiento
							cout << "Vas corriendo por el bosque, y de pronto te rodean has sido atrapado por el enemigo" << endl, Sleep(3000);
							cout << "Has tenido una muy mala suerte, pero vamos no te desanimes, aún llevas contigo el cuchillo" << endl, Sleep(3000);
							cout << "Has recivido un golpe en la cabeza, has quedado inconsciente" << endl, Sleep(3000);
							cout << "Estas despertando en un bodega, estas dentro de una jaula para osos, para tu suerte la cerradura no esta bien hecha" << endl, Sleep(3000);
							cout << "Ahora que es lo que haras" << endl, Sleep(3000);
							cout << "1. (Correr al bosque)" << endl, Sleep(3000);
							cout << "2. (Huir y correr hasta la base)" << endl, Sleep(3000);
							cin >> huir >> raptado;
							cin.get();

							if (huir == 1 && raptado == 'C') { // selección de movimiento1
								cout << "Has corrido al bosque ahora solo tienes un cuchillo, tendras que llegar pronto al campamento militar" << endl, Sleep(3000);
								cout << "Te has encontrado con un poco de fruta ya tienes un poco de alimento" << endl, Sleep(3000);
								cout << "A lo lejos escuchas un rio con el agua más pura que te puedas imaginar" << endl, Sleep(3000);
								cout << "Te has encontrado una botella cerca del rio, has tomado un poco de agua y ahora solo llenas la botellas para llevartela contigo" << endl, Sleep(3000);
								cout << "Ahora llego el momento de tomar una nueva decisión" << endl, Sleep(3000);
								cout << "1. (Hacer una fogata y dormir)" << endl, Sleep(3000);
								cout << "2. (Seguir caminando hasta llegar a la base enemiga)" << endl, Sleep(3000);
								cin >> hacer >> fogata;
								cin.get();

								if (hacer == 1 && fogata == 'H') { // selección de ayuda 
									cout << "Ya has hecho la fogata ahora si puedes descansar un poco más tranquilo" << endl, Sleep(3000);
									cout << "A pesar de los ruidos y tener que dormir cerca de los cuerpos de tu equipo" << endl, Sleep(3000);
									cout << "Al despertar te encuntrras de nuevo en una situación difícil" << endl, Sleep(3000);
									cout << "1. (Regresar a la base)" << endl, Sleep(3000);
									cout << "2. (Avanzar con mucha cautela hasta llegar a la base enemiga e ir matando uno por uno a los enemigos)" << endl, Sleep(3000);
									cin >> cautela >> regresar;
									cin.get();

									if (cautela = 1 && regresar == 'R') { // selección de ayuda1
										cout << "Regresando a la base, cargando con las medallas de tus compañeros caidos" << endl, Sleep(3000);
										cout << "Te ves muy cansado es muy probable que te descubran por el ruido que haces" << endl, Sleep(3000);
										cout << "De un momento a otro un disparo cae muuy cerca de ti, corres pero una de las balas te da en las costillas" << endl, Sleep(3000);
										cout << "Lastimado te das cuenta que ibas en la direccion incorrecta. Estas en la base enemiga" << endl, Sleep(3000);
										cout << "Ahora tus unicas opciones es esperar la muerte o usar tu ultimo aliento" << endl, Sleep(3000);
										cout << "1. (Destruir la base enemiga)" << endl, Sleep(3000);
										cout << "2. (Esperar la muerte)" << endl, Sleep(3000);
										cin >> destrucción >> victoria;
										cin.get();

										if (destrucción == 1 && victoria == 'D') {
											cout << "Usando tu último aliento observas la base enemiga, destruyelo y se acaba todo" << endl, Sleep(3000);
											cout << "Lanzando explosivo..." << endl, Sleep(5000);
											cout << "Felicidades soldado has logrado eliminar la base enemiga" << endl, Sleep(3000);
											cout << "Tu servicio pasara a la historia" << endl, Sleep(3000);
											cout << "GAME OVER" << endl, Sleep(3000);
										}
								
									}
									else {
										cout << "Has muerto le fallaste a tu equipo y a tu país" << endl, Sleep(3000);
										cout << "Espero que no regreses en otra vida" << endl, Sleep(3000);
										cout << "GAME OVER" << endl, Sleep(3000);

									}

								}
								else {
									cout << "Cansado, lastimado y ensangrentado, decides seguir caminando a la base enemiga" << endl, Sleep(3000);
									cout << "De armas estas utilizando las munciones de tus compañeros muertos" << endl, Sleep(3000);
									cout << "Aún así te quedas pensando en que es lo mejor que puedes hacer para ti" << endl, Sleep(3000);
									cout << "1. (Regresar a la base)" << endl, Sleep(3000);
									cout << "2. (Avanzar con mcuha cautela hasta llegar a la base enemiga e ir matando uno por uno a los enemigos)" << endl, Sleep(3000);
									cin >> cautela >> regresar;
									cin.get();

								}



							}
							else {
								cout << "Has corrido hasta la base, estas muy cansado y no has conseguido alimento" << endl, Sleep(3000);
								cout << "Estas a punto de tocar la puerta cuando de pronto te rodea tú equipo" << endl, Sleep(3000);
								cout << "Les explicas que eres un soldado que fuiste raptado, cuando terminaste de hablar te desvaneciste" << endl, Sleep(3000);
								cout << "Despiertas y tu general te dice que tienes una nueva mision" << endl, Sleep(3000);
								cout << "En este momento estas seindo transportado a la base de la misión dos" << endl, Sleep(3000);
								cout << "De pronto se encuentran con una emboscada enemiga" << endl, Sleep(3000);
								cout << "Has caido del transporte en el que ibas y te has golpeado la cabeza" << endl, Sleep(3000);
								cout << "Despiertas después de unas horas y te das cuenta que tu equipo a sido asesinado por completo" << endl, Sleep(3000);
								cout << "Que es lo que haras ahora" << endl, Sleep(3000);
								cout << "1. (Hacer una fogata y dormir)" << endl, Sleep(3000);
								cout << "2. (Seguir caminando hasta llegar a la base)" << endl, Sleep(3000);
								cin >> hacer >> fogata;
								cin.get();

							}

						}
						else {
							cout << "Eres muy valiente has atacado con una gran eficacia" << endl, Sleep(3000);
							cout << "Tú habilidad con el arma es increible, tú y tu equipo han derrotado una base enemiga" << endl, Sleep(3000);
							cout << "Felicidades soldado has subido de rango" << endl, Sleep(3000);
							cout << "Listo para la misión dos?" << endl, Sleep(3000);
							cout << "1. Si estoy más que listo" << endl, Sleep(3000);
							cout << "2. No, estoy cansado" << endl, Sleep(3000);
							cin >> huir >> raptado;
							cin.get();

						}

					}
					else {
						cout << "Vaya que vanidoso eres acabas de construir una mansión para ti solo" << endl, Sleep(3000);
						cout << "Pasando de lado tu vanidad, estas siendo transportado a un zona de guerra nivel 2" << endl, Sleep(3000);
						cout << "Este es el momento para que decidas que hacer" << endl, Sleep(3000);
						cout << "1. (Esconderse)" << endl, Sleep(3000);
						cout << "2. (Atacar" << endl, Sleep(3000);
						cin >> casa >> esconderse;
						cin.get();
					}

				}
				else {
					cout << "Has elegido Piedra tu refugio sera resistente pero lastima que solo lo usaras una o dos veces" << endl, Sleep(3000);
					cout << "Bien, ahora deberas de construir algo" << endl, Sleep(3000);
					cout << "1. (Casa)" << endl, Sleep(3000);
					cout << "2. (Mansión)" << endl, Sleep(3000);
					cin >> material >> construcción;

				}

			}
			else {
				cout << "Te ha tocado una Type - 89 CQB mas un Cuchillo SmittyBilt" << endl, Sleep(3000);
				cout << "Ahora tu misión sera construir un refugio" << endl, Sleep(3000);
				cout << "Te brindaremos materiales pero solo contamos con dos diferentes, los cuales tambien serán al azar" << endl, Sleep(3000);
				cout << "¿Cuál es el material con el que deseas trabajar?" << endl, Sleep(3000);
				cout << "Para poder elegir un material escribe el número y la letra" << endl, Sleep(3000);
				cout << "1. (Madera)" << endl, Sleep(3000);
				cout << "2. (Piedra)" << endl, Sleep(3000);
				cin >> armar >> refugio;
				cin.get();

			}

		}


	    

}
    