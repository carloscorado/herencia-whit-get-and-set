#include "Persona.cpp"
#include <iostream>
using namespace std;

class docentes : public Persona {  
    private:
        string nit;
        string codigo;      
        float salario;      
        string profesion;  
        
    public:    
        Personas() {   
       }
        
        docentes( string cui, string nom, string ape, string dir, int tel, string fn, bool gen,
                 string cod, string n, float sal, string prof) 
            : Persona(cui, nom, ape, dir, tel, fn, gen) {  
            cui = cui;
			codigo = cod;
            nit = n;
            salario = sal;
            profesion = prof;
        }
        
          void setNit(string n) {
            nit = n;
        }
        
        void setCodigo(string cod) {
            codigo = cod;
        }
        
        void setSalario(float sal) {
            salario = sal;
        }
        
        void setProfesion(string prof) {
            profesion = prof;
        }
        
        void setNombres(string nom) {
            nombres = nom;
        }
        
        void setApellidos(string ape) {
            apellidos = ape;
        }
        
        void setDireccion(string dir) {
            direccion = dir;
        }
        
        void setTelefono(int tel) {
            telefono = tel;
        }
        
        void setFechaNacimiento(string fn) {
            fecha_nacimiento = fn;
        }
        
        void setGenero(bool gen) {
            genero = gen;
        }
        
        // return
        string getNit() {
            return nit;
        }
        
        string getCodigo() {
            return codigo;
        }
        
        float getSalario() {
            return salario;
        }
        
        string getProfesion() {
            return profesion;
        }
        

        string getNombres() {
            return nombres;
        }
        
        string getApellidos() {
            return apellidos;
        }
        
        string getDireccion() {
            return direccion;
        }
        
        int getTelefono() {
            return telefono;
        }
        
        string getFechaNacimiento() {
            return fecha_nacimiento;
        }
        
        bool getGenero() {
            return genero;
        }
        
        void leer() {
            cout << "Codigo Docente: " << codigo << endl;
            cout << "Nit: " << nit << endl;
            cout << "Nombres: " << nombres << endl;
            cout << "Apellidos: " << apellidos << endl;
            cout << "Direccion: " << direccion << endl;
            cout << "Telefono: " << telefono << endl;
            cout << "Fecha Nacimiento: " << fecha_nacimiento << endl;
            cout << "Salario: " << salario << endl;
            cout << "Profesion: " << profesion << endl;
        }
};
