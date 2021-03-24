#include "AparatFoto.h"
#include "Drona.h"
#include "Admin.h"
#include "Produs.h"
#include "Client.h"
using namespace std;

int main()
{

    /// TESTE CLASA APARATFOTO
    // AparatFoto ap(4);
    // cout << ap.getPret() << endl;
    // string firma = "NIKON";
    // char* model  = "A77";
    // string rezolutie = "42 Mpx";
    // float dimensiuni[3] = {10,20,30};
    // bool blit = false;
    // float pret = 10040.54;
    // string greutate = "650g";
    // AparatFoto ap2;
    // ap2.setFirma(firma);
    // ap2.setModel(model);
    // cout << ap2.getFirma() << " , " << ap2.getModel()<<endl;
    // ap2.setRezolutie(rezolutie);
    // cout << ap2.getRezolutie() << endl;
    // ap2.setDimensiuni(dimensiuni);
    // float* dimensiun = ap2.getDimensiuni();
    // for (int i = 0; i < 3; i++)
    //    cout << ap2.getDimensiuni()[i] << " ";
    // cout <<endl;
    // ap2.setBlit(blit);
    // cout << "Blit " << ap2.getBlit()<<endl;
    // ap2.setPret(pret);
    // cout << "Pret " << ap2.getPret()<<endl;
    // ap2.setGreutate(greutate);
    // cout << "Greutate" << ap2.getGreutate()<<endl;

    /// TESTE CLASA DRONA
    // Drona d;
    // d.setFirma("Dij");
    // d.setModel("faj56");
    // double dimen[3] = {1000, 500, 324};
    // d.setDimensiuni(dimen);
    // d.setDistantaZborMin(2000);
    // d.setDistantaZborMax(4000);
    // d.setnrElice(4);
    // d.setGps(false);
    // d.setGreutate("900g");
    // d.setRezolutie("44MPX");
    // d.setRezolutieVideo("4k");
    // d.setDiafragma("1.7f");
    // cout << d.getDiafragma();

    //Admin admin;
    //admin.addAparatFoto();
    //cout << admin.getAparatFoto();

    /// TESTE SUPRAINCARCARE OPERATORI
    //AparatFoto a1(10), a2(35);
    //cin >> a1;
    //cout << a1;
    //a2 = a1;
    //cout << a2;

    //AparatFoto a4(a1);
    //cout << "a4";
    //cout << a4;
    // Drona d;
    // d.setPret(30);
    // d.setFirma("dronadasdas");
    // Drona d2(d);
    // d2.setRezolutieVideo("4k");
    // cout << d;
    // cout << d2;
    // cin >> d2;
    // cout << d2;

    //Admin admin;
    //cout << admin.getNumeMagazin();
    //admin.setAparatFoto();
    //admin.setAparatFoto();
    //vector<AparatFoto> ap = admin.getAparateFoto();
   // for (int i = 0; i < ap.size(); i++)
        //cout << ap[i] << endl;

    // float dimensiuni[3] = {923, 56 ,67};
    // AparatFoto a1("Sony", "A77", 1599, 4, "70px", 1, dimensiuni, "800g");
    // AparatFoto a2("Nikon", "dasd", 13523429, 4, "180px", 1, dimensiuni, "900g");
    // admin.addAparatFoto(a1);
    // admin.addAparatFoto(a2);
    // admin.deleteAparatFoto(0);
    // //admin.deleteAparatFoto(1);
    // vector <AparatFoto> ap = admin.getAparateFoto();
    // for(int i = 0; i < ap.size(); i++)
    //     cout << ap[i] << endl;
    //admin.setDrona();
    //admin.setDrona();
    //vector<Drona> d = admin.getDrone();
    //for(int i = 0; i < d.size(); i++)
        //cout << d[i] << endl;

    // Admin admin;
    // float dimensiuni[3] = {923, 56 ,67};
    // AparatFoto a1("Sony", "A77", 1599, 4, "70px", 1, dimensiuni, "800g");
    // AparatFoto a2("Nikon", "dasd", 13523429, 4, "180px", 1, dimensiuni, "900g");
    // cout << a1.getIdAparat() << endl;
    // cout << a2.getIdAparat();
    // admin.addAparatFoto(a1);
    // admin.addAparatFoto(a2);
    // Drona d ("Dij", "A7", 10093, 3, "20px","4k",
    //         "f1.7", "1", dimensiuni, "300g", 2000, 4000, 4);
    // admin.addDrona(d);
    // Drona d2 ("Dij", "A7", 10093, 3, "20px","4k",
    //         "f1.7", "1", dimensiuni, "300g", 2000, 4000, 4);
    // admin.addDrona(d2);
    // cout << d.getIdDrona() << endl;
    // cout << d2.getIdDrona();
    // admin.showProduseMagazin();
    //float dimensiuni[3] = {923, 56 ,67};
    //Drona d ("Dij", "A7", 10093, 3, "20px","4k","f1.7", "1", dimensiuni, "300g", 2000, 4000, 4);
    //Drona d2 ("Dij", "A7", 10093, 3, "20px","4k","f1.7", "1", dimensiuni, "300g", 2000, 4000, 4);

    //DRONA MERGE
    //PRODUS MERGE
    //CLIENT MERGE
    float dimensiuni[3] = {923, 56 ,67};
    AparatFoto a1("Sony", "A77", 1599, 4, "70px", 1, dimensiuni, "800g");
    AparatFoto a2("Nikon", "dasd", 13523429, 4, "180px", 1, dimensiuni, "900g");
    return 0;
}
