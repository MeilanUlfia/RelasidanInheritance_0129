#include <iostream>
#include <vector>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main() {
    ibu* varIbu = new ibu("lala");
    ibu* varIbu2 = new ibu("sukma");
    anak* varAnak1 = new anak("sekar");
    anak* varAnak2 = new anak("tara");
    anak* varAnak3 = new anak("mput");

    varIbu->tambahAnak(varAnak1);
    varIbu->tambahAnak(varAnak2);
    varIbu2->tambahAnak(varAnak3);
    varIbu2->tambahAnak(varAnak1);

    varIbu->cetakAnak();
    varIbu2->cetakAnak();

    delete varIbu;
    delete varIbu2;
    delete varAnak1;
    delete varAnak2;
    delete varAnak3;
}