#include <stdio.h>

int main() {
    int score = 0; // Baþlangýçta puan sýfýrdýr.
    
    char firstName[50], lastName[50];

    printf("Yarisanin Adini Soyadini Girin: ");
    scanf("%s %s", &firstName, &lastName);
    
    FILE *file = fopen("yarisanlar.txt", "a");
    
    if (file == NULL) {
        printf("Dosya acilamadi!\n");
        return 1;
    }

    fprintf(file, "%s %s: ", firstName, lastName);


    printf("1. Hangi gezegen Gunes Sistemi'ndeki en buyuk gezegendir?\n");
    printf("a) Jupiter\nb) Neptun\nc) Venus\nd) Saturn\n");
    char answer1;
    scanf(" %c", &answer1);
    if (answer1 == 'a') {
        score++;
    }

    // Ayný þablonu diðer sorular için de kullanabilirsiniz.

    printf("2. Asagidaki ikililerden hangileri ayni bolgededir?\n");
    printf("a) Manisa-Balikesir\nb) Corum-Amasya\nc) Osmaniye-Konya\nd) Antalya-Aydin\n");
    char answer2;
    scanf(" %c", &answer2);
    if (answer2 == 'b') {
        score++;
    }
    
    printf("3. Asagidakilerden hangisi On Iki Hayvanli Turk Takviminde yer almaz?\n");
    printf("a) Yilan\nb) Kurt\nc) At\nd) Tavsan\n");
    char answer3;
    scanf(" %c", &answer3);
    if (answer3 == 'b') {
        score++;
    }
    
    printf("4. Asagidakilerden hangisi G7'ye uye ulkelerden biri degildir?\n");
    printf("a) Ingiltere\nb) Fransa\nc) ABD\nd) Cin\n");
    char answer4;
    scanf(" %c", &answer4);
    if (answer4 == 'd') {
        score++;
    }
    
    printf("5. Hangi ulkenin milli marsinda soz bulunmaz?\n");
    printf("a) Ispanya\nb) Uganda\nc) Rusya\nd) Suriye\n");
    char answer5;
    scanf(" %c", &answer5);
    if (answer5 == 'a') {
        score++;
    }
    
    printf("6. Osmanli Devleti'nin ilk resmi gazetesi nedir?\n");
    printf("a) Ceride-i Havadis\nb) Takvim-i Vekayi\nc) Tercuman-i Ahval\nd) Tasvir-i Efkar\n");
    char answer6;
    scanf(" %c", &answer6);
    if (answer6 == 'b') {
        score++;
    }
    
    printf("7. Daktilo kullanilarak yazilan ilk kitap hangisidir?\n");
    printf("a) Martin Eden\nb) Gizemli Yabanci\nc) Tom Sawyer'in Maceralari\nd) Hazreti Suleyman'in Hazineleri\n");
    char answer7;
    scanf(" %c", &answer7);
    if (answer7 == 'c') {
        score++;
    }
    
    printf("8. Asagidakilerden hangisi daha yuksek mertebededir?\n");
    printf("a) Orgeneral\nb) Korgeneral\nc) Tumgeneral\nd) Tuggeneral\n");
    char answer8;
    scanf(" %c", &answer8);
    if (answer8 == 'a') {
        score++;
    }
    
    printf("9. Turk sinemasinda 'sultan' lakabiyla anilan aktris kimdir?\n");
    printf("a) Fatma Girik\nb) Hulya Kocyigit\nc) Gulsen Bubikoglu\nd) Turkan Soray\n");
    char answer9;
    scanf(" %c", &answer9);
    if (answer9 == 'd') {
        score++;
    }
    
    printf("10. 3 Farkli takimla Super Lig sampiyonlugu yasayan tek futbolcu kimdir?\n");
    printf("a) Sergen Yalcin\nb) Burak Yilmaz\nc) Mehmet Topal\nd) Caner Erkin\n");
    char answer10;
    scanf(" %c", &answer10);
    if (answer10 == 'c') {
        score++;
    }
    
    

    // Puaný ekrana yazdýrma
    fprintf(file, "Toplam Puan: %d\n", score * 10);
    printf("Toplam Puan: %d\n", score*10);

    return 0;
}
