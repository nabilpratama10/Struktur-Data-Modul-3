#include "pelajaran.h"

using namespace std;

int main() {
    string namamel = "Struktur Data";
    string kodepel = "STD";
    pelajaran pel = create_pelajaran(namamel, kodepel);
    tampil_pelajaran(pel);

    return 0;
}