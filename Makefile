# ini dpe nama file eksekusi
TARGET = game.exe

# Kompiler yang digunakan
CC = gcc

# -I./scheme digunakan agar kompiler mengetahui tempat mencari berkas header (.h)
# -Wall digunakan untuk mengaktifkan peringatan standar dari kompiler
CFLAGS = -I./scheme -Wall

# Daftar semua berkas sumber (.c) beserta letak direktorinya
SRCS = src/main.c \
		src/action-handler/action.c \
		src/event-handler/event.c \
		src/inventory-management/inventory.c \
		src/player-handler/player.c

# Mengubah daftar berkas .c menjadi berkas objek .o
OBJS = $(SRCS:.c=.o)

# Aturan utama yang akan dijalankan pertama kali
all: $(TARGET)

# Proses menghubungkan semua berkas objek menjadi satu program
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Proses mengompilasi setiap berkas .c menjadi berkas .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Perintah untuk menghapus semua berkas hasil kompilasi agar bersih kembali
clean:
	rm -f $(OBJS) $(TARGET)