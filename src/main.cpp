// ============================================================================
// ACTIVIDAD 9 — Práctica en Papel: "Pensar antes de Programar"
// Laboratorio de Programación — EEST N.º 1 "Eduardo Ader"
// Alumno: Malek Cheheid — Grupo A
//
// Este archivo contiene el código fuente resuelto de referencia de los
// 5 ejercicios propuestos en la actividad.
// Cada ejercicio está implementado como función independiente para mantener
// el programa organizado y fácil de probar.
// ============================================================================

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// ----------------------------------------------------------------------------
// EJERCICIO 0 (Ejemplo guiado): "Hola Mundo" personalizado con cálculo de edad
// ----------------------------------------------------------------------------
void ejercicio0() {
    string nombre;
    int anioNacimiento;
    int edad;

    cout << "=== Ejercicio 0: Saludo personalizado ===" << endl;
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);

    cout << "Ingrese su año de nacimiento: ";
    cin >> anioNacimiento;
    cin.ignore();  // limpiar salto de línea sobrante

    edad = 2026 - anioNacimiento;

    cout << "Hola " << nombre
         << ", tu edad estimada en 2026 es: "
         << edad << " años." << endl;
    cout << endl;
}

// ----------------------------------------------------------------------------
// EJERCICIO 1: Sensor de Aprobación (variables, constantes y condicionales)
// Requisitos:
//   NOTA_MINIMA = 6
//   Leer nota1 y nota2
//   promedio = (nota1 + nota2) / 2
//   Si promedio >= NOTA_MINIMA -> "APROBADO"
//   De lo contrario -> "A INTENSIFICACIÓN"
// ----------------------------------------------------------------------------
void ejercicio1() {
    const double NOTA_MINIMA = 6.0;
    double nota1, nota2, promedio;

    cout << "=== Ejercicio 1: Sensor de Aprobación ===" << endl;
    cout << "Ingrese nota1 (Primer Cuatrimestre): ";
    cin >> nota1;
    cout << "Ingrese nota2 (Segundo Cuatrimestre): ";
    cin >> nota2;

    promedio = (nota1 + nota2) / 2.0;

    cout << fixed << setprecision(2);
    cout << "Promedio: " << promedio << endl;

    if (promedio >= NOTA_MINIMA) {
        cout << "APROBADO" << endl;
    } else {
        cout << "A INTENSIFICACIÓN" << endl;
    }
    cout << endl;
}

// ----------------------------------------------------------------------------
// EJERCICIO 2: Bucle del Contador de Vidas (estructuras repetitivas)
// Requisitos:
//   Inicializar vidas = 3
//   Mientras vidas > 0:
//       Mostrar "Jugador activo. Vidas restantes: " + vidas
//       Decrementar vidas = vidas - 1 (simular impacto de obstáculo)
//   Al finalizar (vidas == 0): mostrar "GAME OVER"
// ----------------------------------------------------------------------------
void ejercicio2() {
    int vidas = 3;

    cout << "=== Ejercicio 2: Contador de Vidas ===" << endl;

    while (vidas > 0) {
        cout << "Jugador activo. Vidas restantes: " << vidas << endl;
        vidas = vidas - 1;
    }

    cout << "GAME OVER" << endl;
    cout << endl;
}

// ----------------------------------------------------------------------------
// EJERCICIO 3: Registro de Jugador en Memoria (struct)
// Requisitos:
//   struct Jugador con campos:
//       nickname (texto)
//       nivel (entero)
//       esVIP (booleano)
//   Instanciar un objeto Jugador
//   Cargar atributos por teclado
//   Si esVIP == true -> "Bienvenido al Servidor VIP, " + nickname
//   De lo contrario -> "Bienvenido al Servidor Estándar, " + nickname
// ----------------------------------------------------------------------------
struct Jugador {
    string nickname;
    int nivel;
    bool esVIP;
};

void ejercicio3() {
    Jugador jugador;

    cout << "=== Ejercicio 3: Registro de Jugador ===" << endl;
    cout << "Ingrese nickname: ";
    getline(cin, jugador.nickname);

    cout << "Ingrese nivel: ";
    cin >> jugador.nivel;
    cin.ignore();

    char vipRespuesta;
    cout << "¿Es VIP? (s/n): ";
    cin >> vipRespuesta;
    cin.ignore();
    jugador.esVIP = (vipRespuesta == 's' || vipRespuesta == 'S');

    if (jugador.esVIP) {
        cout << "Bienvenido al Servidor VIP, "
             << jugador.nickname << endl;
    } else {
        cout << "Bienvenido al Servidor Estándar, "
             << jugador.nickname << endl;
    }
    cout << endl;
}

// ----------------------------------------------------------------------------
// EJERCICIO 4: Control de Inventario con Arreglos (vectores y recorrido)
// Requisitos:
//   stock predefinido de 5 posiciones: [12, 0, 5, 30, 0]
//   i = 0
//   Mientras i < 5:
//       Verificar stock[i]
//       Si stock[i] == 0 -> "ALERTA: Sin stock en la posición " + i
//       i = i + 1
// ----------------------------------------------------------------------------
void ejercicio4() {
    int stock[5] = {12, 0, 5, 30, 0};
    int i = 0;

    cout << "=== Ejercicio 4: Control de Inventario ===" << endl;
    cout << "Vector stock: [12, 0, 5, 30, 0]" << endl;
    cout << endl;

    while (i < 5) {
        if (stock[i] == 0) {
            cout << "ALERTA: Sin stock en la posición " << i << endl;
        }
        i = i + 1;
    }
    cout << endl;
}

// ----------------------------------------------------------------------------
// main
// ----------------------------------------------------------------------------
int main() {
    int opcion = 0;

    do {
        cout << "========================================" << endl;
        cout << "   ACTIVIDAD 9 - Menú de ejercicios   " << endl;
        cout << "========================================" << endl;
        cout << "0. Salir" << endl;
        cout << "1. Ejercicio 0 - Saludo personalizado con edad" << endl;
        cout << "2. Ejercicio 1 - Sensor de Aprobación" << endl;
        cout << "3. Ejercicio 2 - Contador de Vidas" << endl;
        cout << "4. Ejercicio 3 - Registro de Jugador (struct)" << endl;
        cout << "5. Ejercicio 4 - Control de Inventario (arreglos)" << endl;
        cout << "----------------------------------------" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1: ejercicio0(); break;
            case 2: ejercicio1(); break;
            case 3: ejercicio2(); break;
            case 4: ejercicio3(); break;
            case 5: ejercicio4(); break;
            case 0: cout << "Saliendo del programa..." << endl; break;
            default: cout << "Opción inválida. Intente de nuevo." << endl;
        }
    } while (opcion != 0);

    return 0;
}
