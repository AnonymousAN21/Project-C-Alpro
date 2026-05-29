# Proyek Game Berbasis C

Repositori ini memuat kode sumber untuk pengembangan game menggunakan bahasa pemrograman C. Struktur proyek ini dirancang secara modular dengan memisahkan deklarasi (skema) dan implementasi, sehingga kode lebih terstruktur, mudah dibaca, dan mudah dikelola oleh banyak pengembang.

## Quick Start

Untuk menjalankan proyek, gunakan perintah berikut di konsol:

```bash
make
```

---

## Struktur Direktori

Proyek ini dibagi menjadi dua direktori utama:

```
game/
├── scheme/                      # File Header (.h) untuk deklarasi
│   ├── action.h
│   ├── event.h
│   ├── inventory.h
│   └── player.h
│
└── src/                         # File Source (.c) untuk implementasi
    ├── action-handler/
    │   └── action.c
    ├── event-handler/
    │   └── event.c
    ├── inventory-management/
    │   └── inventory.c
    ├── player-handler/
    │   └── player.c
    └── main.c
```

### Penjelasan Direktori

- **scheme/**: Menyimpan semua berkas header (.h). Bagian ini digunakan untuk:
  - Deklarasi struktur data (struct)
  - Deklarasi makro (#define)
  - Prototipe fungsi

- **src/**: Menyimpan semua berkas sumber (.c). Berkas di direktori ini berisi:
  - Implementasi logika dari fungsi yang telah dideklarasikan di header
  - Setiap fitur memiliki folder masing-masing
  - `main.c` merupakan titik awal jalannya program

---

## Standar Penulisan Kode

Untuk menjaga konsistensi proyek, setiap pengembang wajib mengikuti templat dan tata cara penulisan berikut:

### 1. Standar Berkas Header (.h)

Setiap berkas header di dalam folder `scheme/` wajib menggunakan **Include Guards** untuk mencegah masalah deklarasi ganda saat proses kompilasi.

#### Templat Wajib:

```c
// [nama_modul].h

#ifndef [NAMA_MODUL]_H
#define [NAMA_MODUL]_H

// 1. Pustaka standar (hanya yang dibutuhkan untuk deklarasi tipe data)
#include <stdbool.h>

// 2. Deklarasi Makro atau Konstanta
#define MAX_EXAMPLE 20

// 3. Deklarasi Struktur Data (Struct)
typedef struct {
    int property_example;      // Penjelasan fungsi properti ini
} ExampleStruct;

// 4. Deklarasi Fungsi (dengan dokumentasi)
void example_function(ExampleStruct *E);

#endif
```

### 2. Standar Berkas Sumber (.c)

Setiap berkas sumber di dalam folder `src/` harus mengimplementasikan fungsi dari header pasangannya. Terdapat blok komentar wajib yang harus diisi.

#### Templat Wajib:

```c
// [nama_modul].c

// 1. Pustaka standar dasar
#include <stdio.h>
#include <string.h>

// 2. Impor berkas header terkait
#include "[nama_modul].h"

/**
 * YOUR NOTES TO OTHER DEVELOPERS:
 * [Tuliskan catatan penting, peringatan, atau cara kerja khusus
 * dari modul ini agar diketahui oleh pengembang lain]
 */

// CONSTANT/VARIABLE DECLARATION :
int const EXAMPLE = 1;
// END LINE OF CONSTANT/VARIABLE DECLARATION

// 3. Implementasi Fungsi
void example_function(ExampleStruct *E) {
    // Tulis kode logika di sini
}
```

### 3. Format Dokumentasi Fungsi

Setiap fungsi yang dideklarasikan di berkas header (.h) **wajib** memiliki blok komentar dokumentasi. Ini memudahkan pengembang lain untuk memahami kegunaan fungsi tanpa membuka berkas implementasi (.c).

#### Aturan Penulisan:

- **@brief**: Penjelasan singkat mengenai tugas utama fungsi
- **Deskripsi Tambahan**: Menjelaskan mekanisme detail, kondisi khusus, atau peringatan
- **@param**: Menjelaskan parameter masukan (nama variabel dan tipe datanya)
- **@return**: Menjelaskan nilai kembalian (jika fungsi tidak menggunakan `void`)

#### Contoh Penulisan:

```c
/**
 * @brief Menambahkan item baru ke dalam inventaris
 * 
 * Fungsi ini digunakan untuk memasukkan item yang didapatkan
 * pemain ke dalam ruang inventaris yang masih kosong.
 * 
 * @param I Pointer menuju struktur Inventory
 * @param item Data item yang akan ditambahkan
 */
void add_item(Inventory *I, Item item);
```

---

## Catatan Penting

- Selalu gunakan Include Guards di file header untuk menghindari duplikasi
- Dokumentasi fungsi adalah wajib untuk semua deklarasi
- Pisahkan deklarasi (header) dan implementasi (source) dengan jelas
- Gunakan penamaan yang konsisten dan deskriptif untuk variabel dan fungsi

---

## Kontribusi

Untuk berkontribusi, pastikan mengikuti semua standar penulisan kode yang telah ditentukan di atas agar kode tetap konsisten dan mudah dipahami oleh semua anggota tim.