struct nodeClass
{
	int classID;
	double classMidtermAverage;
	struct nodeClass *next;
	struct nodeStudent *studentPtr;
};

struct nodeStudent
{
	int studentID;
	int midterm;
	struct nodeStudent *next;
};



// Bu labda kullanılacak tüm fonksiyon tanımlarını bu dosyaya yazmalısınız.
// Verilen fonksiyonlardan çağrılabilecek başka fonksiyonlar yazabilirsiniz.
// main.c dosyasında herhangi bir değişiklik yapılmayacaktır.
// function.h dosyasını StudentNumber.h olarak sisteme yükleyiniz. 



