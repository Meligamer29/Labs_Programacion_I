#include <iostream>
#include <stack>
#include <queue>
#include <string>

using namespace std;

void add_task(stack<string>& stc, queue<string>& que, const string& task) {
    stc.push(task);
    que.push(task);
}

void complete_last_task(stack<string>& stc, queue<string>& que) {
    if (!stc.empty()) {
        cout << "Tarea completada: " << stc.top() << endl;
        stc.pop();
        que.pop();
    } else {
        cout << "No hay tareas para completar." << endl;
    }
}

void attend_oldest_task(stack<string>& stc, queue<string>& que) {
    if (!que.empty()) {
        cout << "Tarea atendida: " << que.front() << endl;
        que.pop();
        stc.pop();
    } else {
        cout << "No hay tareas para atender." << endl;
    }
}

void show_tasks(const stack<string>& stc, const queue<string>& que) {
    stack<string> temp_stc = stc;
    queue<string> temp_que = que;

    cout << "Tareas en pila:" << endl;
    while (!temp_stc.empty()) {
        cout << temp_stc.top() << endl;
        temp_stc.pop();
    }

    cout << "\nTareas en cola:" << endl;
    while (!temp_que.empty()) {
        cout << temp_que.front() << endl;
        temp_que.pop();
    }
}

int main() {
    stack<string> stc;
    queue<string> que;
    int op;
    string task;

    do {
        cout << endl << endl;
        cout << "1. Agregar tarea." << endl;
        cout << "2. Completar ultima tarea." << endl;
        cout << "3. Atender tarea mas antigua." << endl;
        cout << "4. Mostrar todas las tareas." << endl;
        cout << "5. Salir." << endl << endl;
        cout << "Selecciona una opcion: ";
        cin >> op;
        cin.ignore();

        switch (op) {
            case 1:
                system("cls");
                cout << "Ingresa la tarea: ";
                getline(cin, task);
                add_task(stc, que, task);
                break;
            case 2:
                system("cls");
                complete_last_task(stc, que);
                break;
            case 3:
                system("cls");
                attend_oldest_task(stc, que);
                break;
            case 4:
                system("cls");
                show_tasks(stc, que);
                break;
            case 5:
                system("cls");
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opcion invalida." << endl;
        }
    } while (op != 5);

    return 0;
}

