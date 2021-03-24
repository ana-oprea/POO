#ifndef APARATFOTO_H
#define APARATFOTO_H
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class AparatFoto
{
    private:
        // rez video, distanta focala, diafragma
        const int idAparat;
        static int idContor;
        string firma = "";
        char* model = NULL;
        float pret = 0;
        int stoc = 0;
        string rezolutie = "";
        bool blit = 0;
        float* dimensiuni = NULL;
        string greutate = "";
    public:
        // CONSTRUCTORI SI DESTRUCTOR
        AparatFoto();
        AparatFoto(const float);
        AparatFoto(const string, char*);
        AparatFoto(const AparatFoto&);
        AparatFoto(string firma, char* model, float pret,
                   const int stoc, string rezolutie, bool blit,
                   float* dimensiuni, string greutate);
        ~AparatFoto();

        // GETTERS
        int getIdAparat() const;
        string getFirma() const;
        char* getModel() const;
        float getPret() const;
        int getStoc() const;
        string getRezolutie() const;
        bool getBlit() const;
        float* getDimensiuni() const;
        string getGreutate() const;

        // SETTERS
        void setFirma(string);
        void setModel(char*);
        void setPret(float);
        void setStoc(int);
        void setRezolutie(string);
        void setBlit(bool);
        void setDimensiuni(float[]);
        void setGreutate(string);

        // SUPRAINCARCARI
        friend ostream& operator << (ostream&, const AparatFoto&);
        friend istream& operator >> (istream&, AparatFoto&);
        friend AparatFoto operator + (float, AparatFoto);
        AparatFoto operator + (AparatFoto);
        AparatFoto operator + (int);
        AparatFoto operator - (float);
        AparatFoto operator - (AparatFoto);
        AparatFoto& operator = (const AparatFoto&);
        bool operator == (const AparatFoto&);
        bool operator < (const AparatFoto&);
        bool operator > (const AparatFoto&);
        explicit operator int();
        const AparatFoto& operator ++ (); // PRE
        const AparatFoto operator ++ (int); // POST
        const AparatFoto& operator -- (); // PRE
        const AparatFoto operator -- (int); // POST
        float operator [] (int);
};

#endif // APARATFOTO_H
