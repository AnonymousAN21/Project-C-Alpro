# Proyek Game Berbasis C

Repositori ini memuat kode sumber untuk pengembangan game menggunakan bahasa pemrograman C. Struktur proyek ini dirancang secara modular dengan memisahkan deklarasi (skema) dan implementasi, sehingga kode lebih terstruktur, mudah dibaca, dan mudah dikelola oleh banyak pengembang.

cara run tinggal gunakan "make" di console
## 📁 Struktur Direktori

Proyek ini dibagi menjadi dua direktori utama:

```text
game/
├── scheme/                 # Berisi semua file Header (.h) untuk deklarasi
│   ├── action.h
│   ├── event.h
│   ├── inventory.h
│   └── player.h
│
└── src/                    # Berisi semua file Source (.c) untuk implementasi
    ├── action-handler/     # Modul penanganan aksi
    │   └── action.c
    ├── event-handler/      # Modul penanganan peristiwa
    │   └── event.c
    ├── inventory-management/# Modul manajemen inventaris
    │   └── inventory.c
    ├── player-handler/     # Modul penanganan status pemain
    │   └── player.c
    └── main.c              # Berkas utama untuk menjalankan program
    ```
Penjelasan Direktori:
scheme/: Tempat untuk menyimpan semua berkas header (.h). Bagian ini khusus digunakan untuk deklarasi struktur data (struct), makro (#define), dan prototipe fungsi.

src/: Tempat untuk menyimpan semua berkas sumber (.c). Berkas di dalam direktori ini berisi logika dan implementasi dari fungsi yang telah dideklarasikan di bagian header. Setiap fitur memiliki foldernya masing-masing, kecuali main.c yang merupakan titik awal jalannya program.

🛠️ Standar Penulisan Kode
Untuk menjaga konsistensi proyek, setiap pengembang wajib mengikuti templat dan tata cara penulisan berikut pada setiap modul yang dikerjakan.

1. Standar Berkas Header (.h)
Setiap berkas header di dalam folder scheme/ wajib menggunakan Include Guards untuk mencegah masalah deklarasi ganda saat proses kompilasi.

Templat Wajib:

C
// [nama_modul].h

#ifndef [NAMA_MODUL]_H
#define [NAMA_MODUL]_H

// 1. Pustaka standar yang hanya dibutuhkan untuk deklarasi tipe data (contoh: stdbool.h)
#include <stdbool.h> 

// 2. Deklarasi Makro atau Konstanta
#define MAX_EXAMPLE 20

// 3. Deklarasi Struktur Data (Struct)
typedef struct {
    // Gunakan komentar sebaris (inline) untuk menjelaskan properti
    int property_example; // penjelasan fungsi properti ini
} ExampleStruct;

// 4. Deklarasi Fungsi (Wajib menyertakan dokumentasi, lihat poin 3)
void example_function(ExampleStruct *E);

#endif
2. Standar Berkas Sumber (.c)
Setiap berkas sumber di dalam folder src/ harus mengimplementasikan fungsi dari header pasangannya. Terdapat blok komentar wajib yang harus diisi.

Templat Wajib:

C
// [nama_modul].c

// 1. Pustaka standar dasar
#include <stdio.h>
#include <string.h>

// 2. Impor berkas header terkait (sesuaikan jalur direktorinya jika perlu)
#include "[nama_modul].h" 

/**
 * YOUR NOTES TO OTHER TO SEE :
 * [Tuliskan catatan penting, peringatan, atau cara kerja khusus 
 * dari modul ini agar diketahui oleh pengembang lain]
 */

// CONSTANT/VARIABLE DECLARATION :
// [Deklarasikan variabel global atau konstanta khusus berkas ini]
int const EXAMPLE = 1;
// END LINE OF CONSTANT/VARIABLE DECLARATION

// 3. Implementasi Fungsi
void example_function(ExampleStruct *E) {
    // Tulis kode logika di sini
}
3. Format Dokumentasi Fungsi
Setiap fungsi yang dideklarasikan di dalam berkas header (.h) wajib memiliki blok komentar dokumentasi di atasnya. Hal ini memudahkan pengembang lain untuk memahami kegunaan fungsi tanpa harus membuka berkas implementasi (.c).

Aturan Penulisan:

@brief: Penjelasan singkat mengenai tugas utama fungsi.

Deskripsi Tambahan: (Ditulis di bawah brief) Menjelaskan mekanisme detail, kondisi khusus, atau peringatan.

@param: Menjelaskan parameter masukan (tuliskan nama variabel dan tipe datanya, terutama jika berupa pointer).

@return: Menjelaskan nilai kembalian (jika fungsi tidak menggunakan void).

Contoh Penulisan:

C
/**
 * @brief Menambahkan item baru ke dalam inventaris
 * * Fungsi ini digunakan untuk memasukkan item yang didapatkan
 * pemain ke dalam ruang inventaris yang masih kosong.
 * * @param I Pointer menuju data struktur Inventory
 * @param item Data item yang akan ditambahkan
 */
void add_item(Inventory *I, Item item);