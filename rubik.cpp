#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void giraverticalarribax(int cara[6][3][3],int c)
{	
	
	int aux[3][3];
	int arr[8];

	aux[0][0]=cara[4][0][c];
	aux[0][1]=cara[4][1][c];
	aux[0][2]=cara[4][2][c];


	cara[4][0][c]=cara[5][2][c];
	cara[4][1][c]=cara[5][1][c];
	cara[4][2][c]=cara[5][0][c];

	aux[1][0]=cara[2][0][c];
	aux[1][1]=cara[2][1][c];
	aux[1][2]=cara[2][2][c];

	

	cara[2][0][c]=aux[0][0];
	cara[2][1][c]=aux[0][1];
	cara[2][2][c]=aux[0][2];


	aux[0][0]=cara[0][0][c];
	aux[0][1]=cara[0][1][c];
	aux[0][2]=cara[0][2][c];


	cara[0][0][c]=aux[1][0];
	cara[0][1][c]=aux[1][1];
	cara[0][2][c]=aux[1][2];

	cara[5][2][c]=aux[0][0];
	cara[5][1][c]=aux[0][1];
	cara[5][0][c]=aux[0][2];

	if(c!=1)
	{

		if(c==0)
		{

			arr[0]=cara[1][0][0];
			arr[1]=cara[1][0][1];
			arr[2]=cara[1][0][2];
			arr[3]=cara[1][1][0];
			arr[4]=cara[1][1][2];
			arr[5]=cara[1][2][0];
			arr[6]=cara[1][2][1];
			arr[7]=cara[1][2][2];


			cara[1][0][0] = arr[2];
			cara[1][0][1] = arr[4];
			cara[1][0][2] = arr[7];
			cara[1][1][0] = arr[1];
			cara[1][1][2] = arr[6];
			cara[1][2][0] = arr[0];
			cara[1][2][1] = arr[3];
			cara[1][2][2] = arr[5];


		}
		if(c==2)
		{

			arr[0]=cara[3][0][0];
			arr[1]=cara[3][0][1];
			arr[2]=cara[3][0][2];
			arr[3]=cara[3][1][0];
			arr[4]=cara[3][1][2];
			arr[5]=cara[3][2][0];
			arr[6]=cara[3][2][1];
			arr[7]=cara[3][2][2];


			cara[3][0][0] = arr[5];
			cara[3][0][1] = arr[3];
			cara[3][0][2] = arr[0];
			cara[3][1][0] = arr[6];
			cara[3][1][2] = arr[1];
			cara[3][2][0] = arr[7];
			cara[3][2][1] = arr[4];
			cara[3][2][2] = arr[2];


		}		








	}



}

void girarhorizontalderx(int cara[6][3][3], int c)
{

	int aux[2][3];
	int arr[8];

	aux[0][0]=cara[1][c][0];
	aux[0][1]=cara[1][c][1];
	aux[0][2]=cara[1][c][2];

	cara[1][c][0]=cara[5][c][2];
	cara[1][c][1]=cara[5][c][1];
	cara[1][c][2]=cara[5][c][0];

    aux[1][0]=cara[2][c][0];
	aux[1][1]=cara[2][c][1];
    aux[1][2]=cara[2][c][2];

    cara[2][c][0]=aux[0][0];
    cara[2][c][1]=aux[0][1];
    cara[2][c][2]=aux[0][2];

    aux[0][0]=cara[3][c][0];
    aux[0][1]=cara[3][c][1];
    aux[0][2]=cara[3][c][2];

	cara[3][c][0]=aux[1][0];
    cara[3][c][1]=aux[1][1];
	cara[3][c][2]=aux[1][2];


	cara[5][c][0] = aux[0][2];
	cara[5][c][1] = aux[0][1];
	cara[5][c][2] = aux[0][0];


	if(c==0)
	{

		arr[0] = cara[0][0][0];
		arr[1] = cara[0][0][1];
		arr[2] = cara[0][0][2];
		arr[3] = cara[0][1][0];
		arr[4] = cara[0][1][2];
		arr[5] = cara[0][2][0];
		arr[6] = cara[0][2][1];
		arr[7] = cara[0][2][2];
		
		cara[0][0][0]=arr[2];
		cara[0][0][1]=arr[4];
		cara[0][0][2]=arr[7];
		cara[0][1][0]=arr[1];
		cara[0][1][2]=arr[6];
		cara[0][2][0]=arr[0];
		cara[0][2][1]=arr[3];
		cara[0][2][2]=arr[5];
		
	}
	if(c==2)
	{


			arr[0]=cara[4][0][0];
			arr[1]=cara[4][0][1];
			arr[2]=cara[4][0][2];
			arr[3]=cara[4][1][0];
			arr[4]=cara[4][1][2];
			arr[5]=cara[4][2][0];
			arr[6]=cara[4][2][1];
			arr[7]=cara[4][2][2];


			cara[4][0][0] = arr[5];
			cara[4][0][1] = arr[3];
			cara[4][0][2] = arr[0];
			cara[4][1][0] = arr[6];
			cara[4][1][2] = arr[1];
			cara[4][2][0] = arr[7];
			cara[4][2][1] = arr[4];
			cara[4][2][2] = arr[2];




	}
	

}
		


















void girarprofundidadderx(int cara[6][3][3],int c)
{


	int arr[8];
	int com=1;
	int aux[2][3];

	if(c==0)
		com=2;
	if(c==2)
		com=0;
	aux[0][0]=cara[0][com][0];
	aux[0][1]=cara[0][com][1];
	aux[0][2]=cara[0][com][2];

	cara[0][com][0]=cara[1][2][com];
	cara[0][com][1]=cara[1][1][com];
	cara[0][com][2]=cara[1][0][com];

	aux[1][0]=cara[4][c][0];
	aux[1][1]=cara[4][c][1];
	aux[1][2]=cara[4][c][2];

	cara[1][0][com]=cara[4][c][0];
	cara[1][1][com]=cara[4][c][1];
	cara[1][2][com]=cara[4][c][2];

	cara[4][c][0]=cara[3][2][c];
	cara[4][c][1]=cara[3][1][c];
	cara[4][c][2]=cara[3][0][c];

	cara[3][0][c]=aux[0][0];
	cara[3][1][c]=aux[0][1];
	cara[3][2][c]=aux[0][2];


	if(c == 0)
	{

		arr[0]=cara[2][0][0];
		arr[1]=cara[2][0][1];
		arr[2]=cara[2][0][2];
		arr[3]=cara[2][1][0];
		arr[4]=cara[2][1][2];
		arr[5]=cara[2][2][0];
		arr[6]=cara[2][2][1];
		arr[7]=cara[2][2][2];

		cara[2][0][0]=arr[5];
		cara[2][0][1]=arr[3];
		cara[2][0][2]=arr[0];
		cara[2][1][2]=arr[1];
		cara[2][2][2]=arr[2];
		cara[2][2][1]=arr[4];
		cara[2][2][0]=arr[7];
		cara[2][1][0]=arr[6];
	
	}
	if(c == 2)
	{

		arr[0]=cara[5][0][0];
		arr[1]=cara[5][0][1];
		arr[2]=cara[5][0][2];
		arr[3]=cara[5][1][0];
		arr[4]=cara[5][1][2];
		arr[5]=cara[5][2][0];
		arr[6]=cara[5][2][1];
		arr[7]=cara[5][2][2];

		cara[5][0][0]=arr[5];
		cara[5][0][1]=arr[3];
		cara[5][0][2]=arr[0];
		cara[5][1][2]=arr[1];
		cara[5][2][2]=arr[2];
		cara[5][2][1]=arr[4];
		cara[5][2][0]=arr[7];
		cara[5][1][0]=arr[6];

	}



}


void imprimecubo(int cara[6][3][3])
{	

	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

	bool ban=false;
	for(int i=0;i<6;i++)
	{
		
		int cont=0;
			for(int j=0;j<3;j++)
			{
				
				if(i==1 )
				{
						printf("%d ",cara[i][j][0]);
						printf("%d ",cara[i][j][1]);printf("%d ",cara[i][j][2]);
						cont=1;
						ban=true;
					
				}
				else
				{
						printf("      ");
				}
				
				for(int k=0;k<3;k++)
				{
					printf(" %d",cara[i+cont][j][k]);	
				}
				
				if(ban==true)
				{
					printf(" ");
					for(int k=0;k<3;k++)
					{
					printf(" %d",cara[i+2][j][k]);
					}
				
				}
			printf("\n");
			
			}		

	if(ban==true)
	{
		
		i=+3;
		ban=false;
		
	}
	printf("\n");
	
	}

}

void shuffle(int cara[6][3][3])
{

	int ver=0;
	for(int k=0;k<10;k++)
	{

		ver=rand()%3;
		giraverticalarribax(cara,ver);
	
		ver=rand()%3;
		girarhorizontalderx(cara,ver);
	
		ver=rand()%3;
		girarprofundidadderx(cara,ver);
	}



}


bool comprobarcubo(int cara[6][3][3],int c,int contador)
{
	bool completo;
	int a;

	
	if(cara[c][0][0]==cara[c][0][1] && cara[c][0][0]==cara[c][0][2] &&cara[c][0][0]==cara[c][1][0] &&cara[c][0][0]==cara[c][1][1] &&
	   cara[c][0][0]==cara[c][1][2] && cara[c][0][0]==cara[c][2][0] &&cara[c][0][0]==cara[c][2][1] &&cara[c][0][0]==cara[c][2][2] )
	{

		printf("}}}}} primera cara armada {{{{{{{{{{ %d vueltas\n",contador);
		//scanf("%d",&a);
		imprimecubo(cara);
		scanf("%d",&a);
		completo = true;
	}

	return completo;
}

int main()
{
	
	
	
	
	int cara[6][3][3]={1,1,1,1,1,1,1,1,1,
						2,2,2,2,2,2,2,2,2,
						3,3,3,3,3,3,3,3,3,
						4,4,4,4,4,4,4,4,4,
						5,5,5,5,5,5,5,5,5,
						6,6,6,6,6,6,6,6,6};
	
					
	

	int u=0,d=0,t=0,c=0,ci=0,s=0;
	srand(time(NULL));

	
	int ver;
	bool band=false;
	int cont=0;

	
	int sa=0;
	

	printf("este es el cubo : \n");
	int res;
	imprimecubo(cara);
	scanf("%d",&res);
				
	printf("Este es el cubo desarmado\n");
	shuffle(cara);
	imprimecubo(cara);
	scanf("%d",&res);

	
	

	int moderador=0;
	int vue=0;
	


	while(moderador<1)
	{

		for(int k=0;k<3;k++)
		{
			
				
			
			girarprofundidadderx(cara,k);
			vue++;
			printf("%d\n",vue);
			
			for(int j=0;j<6;j++)
			{

				comprobarcubo(cara,j,vue);

			}

			imprimecubo(cara);


			//while (k==1 || k== 3)
			//	k=0+rand()%3;
			
			girarhorizontalderx(cara,k);
			vue++;
			printf("%d\n",vue);
			for(int j=0;j<6;j++)
			{

				comprobarcubo(cara,j,vue);

			}
			imprimecubo(cara);


			//while (k==1 || k== 3)
			//	k=0+rand()%3;
			
			giraverticalarribax(cara,k);
			vue++;
			printf("%d\n",vue);
			for(int j=0;j<6;j++)
			{

				comprobarcubo(cara,j,vue);

			}
			imprimecubo(cara);
		}
		


	}


	

	








}//fin main






/*
int moderador=0;
	int vue=0;
	while(moderador<1)
	{

		for(int k=0;k<3;k++)
		{

			girarprofundidadderx(cara,k);
			vue++;
			printf("%d\n",vue);
			for(int j=0;j<6;j++)
			{

				comprobarcubo(cara,j,vue);

			}
			imprimecubo(cara);


			girarhorizontalderx(cara,k);
			vue++;
			printf("%d\n",vue);
			for(int j=0;j<6;j++)
			{

				comprobarcubo(cara,j,vue);

			}
			imprimecubo(cara);



			giraverticalarribax(cara,k);
			vue++;
			printf("%d\n",vue);
			for(int j=0;j<6;j++)
			{

				comprobarcubo(cara,j,vue);

			}
			imprimecubo(cara);
		}
		


	}



*/






























/* random


/*
	for(int i=0;i<6;i++)
	{
		
		for(int j=0;j<3;j++)
		{
			
			for(int k=0;k<3;k++)
			{
				
				do
				{

					ver=1+rand()%6;

					
					
					switch (ver)
					{

						case 1:
								
								band=false;
								u++;
								if(u>9)
									band=true;
						break;
						
					
						case 2:
								
								band=false;
								d++;
								if(d>9)
									band=true;
						break;
						
						case 3:
								
								band=false;
								t++;
								if(t>9)
									band=true;
						break;

						case 4:
								
								band=false;
								c++;
								if(c>9)
									band=true;
						break;

						case 5:
								
								band=false;
								ci++;
								if(ci>9)
									band=true;
						break;

						case 6:
								
								band=false;
								s++;
								if(s>9)
									band=true;
						break;
							


						
												
					}


				}while(band==true);
				cara[i][j][k]=ver;
			
			}//fin for
		

		}



	}						
*/










