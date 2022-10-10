
#include <stdio.h>
#include <stdlib.h>

char Cname[],Caddress[],Cstatus[],Oname[],Tname[],Iname[],Iid[],Iaddress[],Igname[],Igid[],d,Docname[];
int Cage,Cno,chanelingno=0,Tage,Ttype,d1,m,y,Iage,IPno,Icabinno,Igpno,IPNo,rtype,IPdays,rprice,TPno,TPtype,Camount,Docno;
int outpatientNo=0,Testno=0,Pno=0;
float OPchargers,OPchargers2,OPchargers3,OPtot,IPchargers1,IPchargers2,IPchargers3,IPtot,vat,TPchargers2,TPchargers1;
float TPchargers3,TPtot;




void chanelling()
{
    chanelingno++;
    printf("Patient number: %d\n",chanelingno);
    printf("Enter patients name :");
    scanf("%s",&Cname);
    printf("\n");
    printf("Enter patients age :");
    scanf("%d",&Cage);
    printf("\n");
    printf("Enter patients phone number :");
    scanf("%d",&Cno);
    printf("\n");
    printf("Enter patients address :");
    scanf("%s",&Caddress);
    printf("\n");
    printf("Select channelled doctor\n\n[1]-DR.Narada Jayasinghe(Cardiologists)\n\n[2]-DR.Hasitha Ekanayka(Colon and Rectal Surgeon)\n\n");
    printf("[3]-DR.Upul Kariyawasam(Dermatologists)\n\n[4]-DR.Dilki Apeksha(Endocrinologists)\n\n[5]-DR.Jayantha Weerakkodi(Gastroenterologists)\n\n");
    scanf("%d",&Docno);
    if(Docno==1)
    {
        Docname[]="DR.Narada Jayasinghe(Cardiologists)";
    }
    else if(Docno==2)
    {
        Docname[]="DR.Hasitha Ekanayka(Colon and Rectal Surgeon)";
    }
    else if(Docno==3)
    {
        Docname[]="DR.Upul Kariyawasam(Dermatologists)";
    }
    else if(Docno==4)
    {
        Docname[]="DR.Dilki Apeksha(Endocrinologists)";
    }
    else if(Docname==5)
    {
        Docname[]="DR.Jayantha Weerakkodi(Gastroenterologists)"
    }
    else
    {
        printf("Invalid Doctor's number");
    }
    printf("Enter payment status (paid or unpaid):");
    scanf("%s",&Cstatus);
    printf("\n");
    printf("Enter amount paid:");
    scanf("%d",&Camount);
    printf("\n");
    FILE *p1=fopen("C://Users//sudus//Documents//Codeblock programs//Project group file//C data//Chanellingdata.txt","a");
    fprintf(p1,"Chanelling number:%d \n\n Patient name:% s \n\n Patient age:%d \n\n Patient phone number:%d \n\n Patient address:% s \n\n Payment status:% s \n\n Paid amount:%d",chanelingno,Cname,Cage,Cno,Caddress,Cstatus,Camount);
}

void outpatient()
{
    outpatientNo++;
    printf("Outpatient number: %d\n\n",outpatientNo);
    printf("Enter patient name:");
    scanf("%s",&Oname);
    FILE *p2=fopen("C://Users//sudus//Documents//Codeblock programs//Project group file//Out patient data//Outpatientdata.txt","a");
    fprintf(p2,"Patient number:%d \n\n Patient name:% s",outpatientNo,Oname);
}

void tests()
{
    printf("Enter patient name");
    scanf("%s",&Tname);
    printf("Enter patients age");
    scanf("%d",&Tage);
    printf("Enter the test choose by patient\n(1)-Blood test\n(2)-Urine test\n(3)-PCR\n(4)-Other\n");
    scanf("%d",&Ttype);
    printf("Enter date");
    scanf("%d",&d1);
    printf("Enter month");
    scanf("%d",&m);
    printf("Enter year");
    scanf("%d",&y);
    Testno++;
    FILE *p3=fopen("C://Users//sudus//Documents//Codeblock programs//Project group file//Testing patient data//testingpatientdata.txt","a");
    fprintf(p3,"Patient number:%d \n\n Patient name:% s \n\n Patient age:%d \n\n Test type:%d Date:%d Month:%d Year:%d",Testno,Tname,Tage,Ttype,d1,m,y);
}

void inpatient()
{
    FILE *p4=fopen("C://Users//sudus//Documents//Codeblock programs//Project group file//Inpatient data//inpatientdata.txt","a");
    Pno++;
    printf("Enter patients name :");
    scanf("%s",&Iname);
    printf("Enter patients ID number :");
    scanf("%s",&Iid);
    printf("Enter patients age :");
    scanf("%d",&Iage);
    printf("Enter patients phone number :");
    scanf("%d",&IPno);
    printf("Enter patients address :");
    scanf("%s",&Iaddress);
    printf("Enter cabin number :");
    scanf("%d",&Icabinno);
    printf("Enter guardians name of the patient :");
    scanf("%s",&Igname);
    printf("Enter guardians ID number : ");
    scanf("%s",&Igid);
    printf("Enter guardians phone number :");
    scanf("%d",&Igpno);
    fprintf(p4,"Patient number:%d \n Patient name:% s \n Patient ID number:% s \n Patient age:%d \n Patient phone number:%d \n Patient address:% s \n Cabin number:%d \n Guardians name:% s \n Guardians ID number:% s \n Guardians phone number:%d",Pno,Iname,Iid,Iage,IPno,Iaddress,Icabinno,Igname,Igid,Igpno);
}

void outpatient_payment()
{
    printf("Enter doctor's chargers:");
    scanf("%f",&OPchargers);
    printf("Enter hospital chargers:");
    scanf("%f",&OPchargers2);
    printf("Enter medicine cost:");
    scanf("%f",&OPchargers3);
    OPtot=OPchargers+OPchargers2+OPchargers3;
    printf("Total payment is: %f",OPtot);
    FILE *p1=fopen("C://Users//sudus//Documents//Codeblock programs//Project group file//C data//Chanellingdata.txt","a");
    fprintf(p1,"Total payment:%f",OPtot);

}

void inpatient_payment() //payment function for inpatients
{
    printf("Enter patient number :");
    scanf("%d",&IPNo);
    printf("Enter hospital chargers :");
    scanf("%f",&IPchargers1);
    printf("Enter doctors chargers :");
    scanf("%f",&IPchargers2);
    printf("Enter service chargers :");
    scanf("%f",&IPchargers3);
    printf("Enter room type\n1-Premium\n2-Deluxe\n3-General\n");
    scanf("%d",&rtype);
    printf("Enter no of days stayed :");
    scanf("%d",&IPdays);
    if(rtype==1)
    {
        rprice=40000;
    }
    else if(rtype==2)
    {
        rprice=20000;
    }
    else if(rtype==3)
    {
        rprice=10000;
    }
    else
    {
        printf("Invalid room type");
    }
    IPtot=IPchargers1+IPchargers2+IPchargers3+(rprice*IPdays);
    vat=IPtot*5/100;
    IPtot=IPtot+vat;
}

void tests_payment()
{
    printf("Enter testing patient number");
    scanf("%d",&TPno);
    printf("Enter the test choose by patient\n(1)-Blood test\n(2)-Urine test\n(3)-PCR\n(4)-Other\n");
    scanf("%d",&TPtype);
    if(TPtype==1)
    {
        TPchargers1=1000;
    }
    else if(TPtype==2)
    {
        TPchargers1=800;
    }
    else if(TPtype==3)
    {
        TPchargers1=3000;
    }
    else
    {
        TPchargers1=2500;
    }
    printf("Enter laboratory fees:");
    scanf("%f",&TPchargers2);
    printf("Enter hospital fees:");
    scanf("%f",&TPchargers3);
    TPtot=TPchargers1+TPchargers2+TPchargers3;
}

void charline(int i)
{
    i=0;
    while(i<=167)
    {
        printf("*");
        i++;
    }
}

int main()
{
    system("color FC");
    printf("   \t\t\t\t\t\t\t\t*****\n   \t\t\t\t\t\t\t\t*****\n   \t\t\t\t\t\t\t\t*****\n");
    printf("       \t\t\t\t\t\t\t*********************  Medicare Hospitals PVT LTD\n       \t\t\t\t\t\t\t*********************  Patient Management System \n       \t\t\t\t\t\t\t*********************\n");
    printf("   \t\t\t\t\t\t\t\t*****\n   \t\t\t\t\t\t\t\t*****\n   \t\t\t\t\t\t\t\t*****\n\n");
    int type;
    int i=0;
    charline(1);
    label:
    for(int a=1;a>0;a++)
    {
    printf("\n\t[1]-To enter channeled patients data\n\n\t[2]-To enter data of patients coming for outpatient department\n\n\t[3]-To enter data of patients admitted to the inpatient department\n\n\t[4]-To enter data of patients coming for laboratory tests\n\n\t[5]-To calculate bill of outpatents\n\n\t[6]-To calculate bill of inpatients\n\n\t[7]-To calculate bill of patients coming for laboratory tests\n");
    scanf("%d",&type);
    if(type==1)
    {
    system("cls");
    chanelling();
    }
    else if(type==2)
    {
    system("cls");
    outpatient();
    }
    else if(type==3)
    {
    system("cls");
    inpatient();
    }
    else if(type==4)
    {
    system("cls");
    tests();
    }
    else if(type==5)
    {
    system("cls");
    outpatient_payment();
    }
    else if(type==6)
    {
    system("cls");
    inpatient_payment();
    }
    else if(type==7)
    {
    system("cls");
    tests_payment();
    }
    printf("Enter 'c' for continue or enter 'e' for end :");
    scanf(" %c",&d);
    if(d=='e')
    {
        break;
    }
    else
    {
     goto label;
    }
    }
    return 0;
}
