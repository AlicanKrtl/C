struct nodeFB
{
	int id;
	int age;
	struct nodeFB *next;
};

struct nodeGS
{
	int id;
	struct nodeGS *next;
};

struct newNodeFB
{
	int id;
	int age;
	struct newNodeGS *next;
};

struct newNodeGS
{
	int id;
	struct newNodeFB *next;
};

// Bu lab kapsaminda kullanilacak butun fonksiyon tanimlarini bu dosyanin icine yazmaniz gerekmektedir.
// Tanimlanmasi zorunlu fonksiyonlar icerisinden kendi tanimayacaginiz baska fonksiyonlari cagirabilirsiniz.
// main.c dosyasinda bir degisiklik yapmayiniz.
// Sisteme function.h dosyasinin ismini OgrenciNumarasi.h olarak yukleyiniz.


