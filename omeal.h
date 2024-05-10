/* Kelompok 13
   Kelas : 1B
   Nama  : - Indah Ratu Pramudita (231511050)
           - Nazla Kayla (231511057)
   Tugas Besar SDA-Praktikum Program Pemesanan Makanan O-Meal */

#include <stdio.h>
#include <stdlib.h>

#ifndef omeal_h 
#define omeal_h

// Struktur data untuk admin
typedef struct User { 
    char username[50]; 
    char password[50]; 
    int isAdmin;      
} User; 

// Struktur data untuk menu
typedef struct MenuItem { 
    int id;
    char category; 
    char name[100]; 
    char description; 
    float price;
} MenuItem; 

// Struktur data untuk simpul BST menu 
typedef struct MenuNode { 
    MenuItem data; 
    struct MenuNode *left; 
    struct MenuNode *right; 
} MenuNode; 

// Struktur data untuk item dalam keranjang 
typedef struct CartItem { 
    MenuItem menuItem; 
    int quantity; 
    struct CartItem *next;  
} CartItem; 

// Struktur data untuk keranjang belanja 
typedef struct ShoppingCart { 
    CartItem *head;  
    int itemCount; 
} ShoppingCart; 

// Struktur data untuk item dalam pemesanan 
typedef struct OrderItem { 
    MenuItem menuItem; 
    int quantity; 
} OrderItem; 

// Struktur data untuk pemesanan 
typedef struct Order { 
    int orderId; 
    int NoMeja; 
    OrderItem items[100];  
    int itemCount; 
    float totalAmount; 
} Order; 

// Fungsi Login Admin
User* createAdmin(char *username, char *password)
/* is : Tidak ada admin yang tersedia dalam sistem
   fs : admin telah dibuat dan ditambahkan dalam daftar pengguna*/

User* login(User *users, char *username, char *password)
/* is : admin belum melakukan login ke dalam sistem
   fs : jika kredensial cocok, login berhasil. jika tidak cocok akan tetap dalam kondisi belum login */

// Fungsi Binary Search Tree
MenuNode* createNode(MenuItem data)
/* is : Tidak ada node yang dibuat
   fs : Node baru telah dibuat dengan data yang sesuai */

MenuNode* insertNode(MenuNode* root, MenuItem data)
/* is : BST mungkin kosong atau memiliki beberapa node
   fs : Node baru telah dimasukkan kedalam BST sesuai dengan urutan yang benar berdasarkan ID menu */

MenuNode* searchBST(MenuNode* root, int id)
/* is : BST mungkin kosong atau memiliki beberapa node
   fs : pengguna mendapatkan hasil pencarian berupa node dengan kata kunci yang sesuai atau NULL jika tidak ditemukan */

void inorderTraversal(MenuNode* root)
/* is : BST mungkin kosong atau memiliki beberapa node
   fs : Semua node dalam BST telah dicetak secara inorder */

MenuNode* deleteItem(MenuNode* root, int id)
/* is : BST mungkin kosong atau memiliki beberapa node
   fs : Node dengan ID yang sesuai telah dihapus dari BST */

void deleteTree(MenuNode* root)
/* is : BST mungkin kosong atau memiliki beberapa node
   fs : Semua node dalam BST telah dihapus dan BST menjadi kosong */

// Fungsi Menu
void insertMenu(MenuNode** root, MenuItem data)
/* is : BST mungkin kosong atau memiliki beberapa node
   fs : Node baru dengan menu yang sesuai telah dimasukkan ke dalam BST. */

MenuNode* searchMenu(MenuNode* root, int id)
/* is : BST mungkin kosong atau memiliki beberapa node
   fs : Pengguna mendapatkan hasil pencarian berupa simpul dengan ID yang sesuai atau NULL jika tidak ditemukan. */

void displayMenu(MenuNode* root)
/* is : BST mungkin kosong atau memiliki beberapa node
   fs : Semua menu dalam BST telah ditampilkan secara terurut */

// Fungsi Keranjang Belanja
void addToCart(ShoppingCart *cart, MenuItem item, int quantity)
/* is : Keranjang belanja mungkin kosong atau memiliki beberapa item
   fs : Item baru telah ditambahkan ke dalam keranjang belanja dengan jumlah yang sesuai */
 
void removeFromCart(ShoppingCart *cart, int index)
/* is : Keranjang belanja mungkin kosong atau memiliki beberapa item
   fs : Item yang dipilih telah dihapus dari keranjang belanja */

void displayCart(ShoppingCart *cart)
/* is : Keranjang belanja mungkin kosong atau memiliki beberapa item
   fs : Semua item dalam keranjang belanja telah ditampilkan */

// Fungsi Checkout
Order checkout(ShoppingCart *cart)
/* is : Keranjang belanja mungkin kosong atau memiliki beberapa item
   fs : Pemesanan telah dibuat berdasarkan item dalam keranjang belanja */

void makePayment(Order order)
/* is : Pengguna harus memiliki pesanan yang telah dibuat dan siap untuk pembayaran
   fs : Pembayaran telah berhasil dilakukan untuk pesanan yang telah dipilih */

void displayOrderHistory(OrderHistory *orderHistory)
/* is : Riwayat pesanan pengguna mungkin kosong atau memiliki beberapa pesanan
   fs : Semua riwayat pesanan pengguna telah ditampilkan */
