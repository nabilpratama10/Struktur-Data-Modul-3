#include "pelajaran.h"

pelajaran create_pelajaran(string namamel, string kodepel) {
    pelajaran pel;
    pel.namaMapel = namamel;
    pel.kodeMapel = kodepel;
    return pel;
}

void tampil_pelajaran(pelajaran pel) {
    cout << "nama pelajaran : " << pel.namaMapel << endl;
    cout << "nilai : " << pel.kodeMapel << endl;
}