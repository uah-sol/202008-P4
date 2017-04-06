/**
 * Copyright (C) 2017 UAH. Departamento de Automática

 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
 */

/**
 * 
 * Práctica 4. SPI en Arduino. Maestro del bus.
 * 
 * En el arranque del sistema, el programa debe realizar las siguientes
 * operaciones:
 *
 * - Configurar los pines de entrada/salida
 * - Configurar los los registros SPI (Master, SPI enabled, Freq = osc/16)
 * - Establecer las salidas iniciales (SCK → LOW, MOSI → LOW, SS → HIGH)
 * - Configuración de la puerta serie
 * 
 * El programa debe implementar la siguiente tarea con un periodo de 1 segundo:
 * 
 * - Iniciar la transmisión (SS → LOW)
 * - Enviar el dato (Dato → SPDR). El dato es un contador de 8 bits.
 * - Realizar una espera activa hasta el fin de transmisión (SPSR[SPIF] = 1)
 * - Leer los datos recibidos
 * - Imprimir el dato recibido por la puerta serie
 * - Incrementar el contador
 *
 */

/*
 * Para referenciar los pines se pueden usar las siguientes MACROS:
 * - MOSI, MISO, SCK, SS
 *
 * e.g. pinMode(SCK,OUTPUT);
 *
 * Para referenciar los registros se pueden usar las siguientes variables:
 * - SPCR, SPSR, SPDR
 *
 * e.g. byte c = SPDR;
 *
 * Para referenciar los bits de los registros se pueden usar las siguientes
 * máscaras:
 * - SPIE, SPE, MSTR, SPR1, SPIF
 * 
 * e.g. SPCR |= (1<<SPE)
 *
 */

void setup() {
  
  // Código de configuración. Solo se ejecutará al comienzo de la aplicación.
  
}

void loop() {
  
  // Código principal de la aplicación. Se ejecutará de forma indefinida.
  
}

