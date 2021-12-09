//Library Management//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct library
{
    char book[40];
    char author[30];
    char publisher[30];
    char genre[25];
    int pages;
    float price;
}lib[100];

void main()
{
    struct library lib[100];
    //case variables
    char pb[30],ar[30], bk[40],ge[25],str[40];
    int i,j,count,m,n;
    i=j=count=0;
    float t;

    printf("\n *** Welcome to e- Library***\n");

    while(j <=10){
        printf("\n\t1.  Add book information\n");
        printf("\t2.  View details of a book\n");
        printf("\t3.  Display all books available in Library\n");
        printf("\t4.  Count of books in library\n");
        printf("\t5.  All books of a given genre\n");
        printf("\t6.  All books of a given author\n");
        printf("\t7.  List of publishers\n");
        printf("\t8.  Highest price of book\n");
        printf("\t9.  Lowest price of book\n");
        printf("\t10. Exit\n");

        printf("\n\nEnter one number from above list: ");
        scanf("%d",&j);

        switch(j)
        {
        case 1: /*Adding book information*/
            printf("\nCaution: Use \"Underscore(_)\" for \"space( )\"");
            printf("\nEnter the following details:-\n");
            printf("\n Book name: ");
            scanf("%s", lib[i].book);
            printf("\n Name of Author: ");
            scanf("%s", lib[i].author);
            printf("\n Published by : ");
            scanf("%s", lib[i].publisher);
            printf("\n Genre : ");
            scanf("%s", lib[i].genre);
            printf("\n Number of pages = ");
            scanf("%d", &lib[i].pages);
            printf("\n Price of book in Rupees = ");
            scanf("%f", &lib[i].price);
            count++;
            i++;
            break;

        case 2: /*Details of a book*/
            printf("\nCaution:  Use \"Underscore(_)\" for \"space( )\"\n");
            printf("Enter book name:");
            scanf("%s",bk);
            m = 0;
            for (i=0;i<count;i++){
                if(strcmp(bk,lib[i].book)== 0){
                    printf("Book:%s,  Author:%s,  Publisher:%s,  Genre:%s,  Pages:%d,  Price:%f\n",
                           lib[i].book, lib[i].author, lib[i].publisher, lib[i].genre,lib[i].pages,lib[i].price);
                    m = 1;
                    }
            }
            if(m == 0){
                printf("Book not Found\a");
            }
            break;


        case 3: /*Display all books available in Library*/
            printf(" Book name, Author, Publisher, Genre, Pages, Price:\n");
            for(int i=0; i <count; i++){
                printf("\n%d, %s, %s, %s, %s, %d, %f\n",
                       i,lib[i].book,lib[i].author,lib[i].publisher,lib[i].genre,lib[i].pages,lib[i].price);
            }
            break;

        case 4: /*Count of books in library*/
            printf("\n Number of books in Library = %d\n",count);
            break;


        case 5:/*All books of a given genre*/
            printf("\nCaution:  Use \"Underscore(_)\" for \"space( )\"\n");
            printf(" Enter Genre: ");
            scanf("%s",ge);
            printf("\nAvailable %s Books are:\n", ge);
            m = 0;
            for (int i=0;i<count;i++){
                if(strcmp(ge,lib[i].genre)== 0){
                    printf("Book:%s,  Author:%s,  Publisher:%s,  Genre:%s,  Pages:%d,  Price:%f\n",
                           lib[i].book,lib[i].author,lib[i].publisher,lib[i].genre,lib[i].pages,lib[i].price);
                           m = 1;}
            }
            if(m == 0){
                printf("Book not Found\a");
            }
            break;

        case 6: /*All books of a given author*/
            printf("\nCaution:  Use \"Underscore(_)\" for \"space( )\"\n");
            printf(" Enter Author name: ");
            scanf("%s",ar);
            printf("\nBooks of %s here are:\n", ar);
            m = 0;
            for (int i=0;i<count;i++){
                if(strcmp(ar,lib[i].author)== 0){
                    printf("Book:%s,  Author:%s,  Publisher:%s,  Genre:%s,  Pages:%d,  Price:%f\n",
                           lib[i].book,lib[i].author,lib[i].publisher,lib[i].genre,lib[i].pages,lib[i].price);
                           m = 1;}
            }
            if(m == 0){
                printf(" Book not Found\a");
            }
            break;

        case 7:/*List of publishers*/
            for(int i=0;i<count;i++){
                printf("\n%s",lib[i].publisher);
            }
            break;

        case 8: /*Highest price of book*/
            t = 0;
            m = 0;
            for(int i=0;i<count;i++){
                if(t < lib[i].price)
                    t = lib[i].price;
                    m = i;
            }
            printf(" Name of Highest price Book: %s\n", lib[m].book);
            printf(" Highest price of book = %f\n",t);
            break;

        case 9: /*Lowest price of book*/
            t = 10000;
            n = 0;
            for(int i=0;i<count;i++){
                if(t > lib[i].price)
                    t = lib[i].price;
                    n = i;
                }
            printf(" Name of Lowest price Book: %s\n", lib[n].book);
            printf(" Lowest price of book = %f\n",t);
            break;

        case 10: //Exit
            exit(0);
            break;

        default:
            printf("\n\"Invalid Input\": Please enter a number from the given list!\n");
        }
    }
}
