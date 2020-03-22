#include<stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char ip[4] = {250,0,255,255};
    unsigned char mr[4] = {0,0,0,0};
    unsigned char b[4] = {0,0,0,0};
    
    printf("\nIP: %d.%d.%d.%d",ip[0],ip[1],ip[2],ip[3]);
    
    if(ip[0] & 128)
    {
        if(ip[0] & 64)
        {
            if(ip[0] & 32 )
            {
                if(ip[0] & 16)
                    printf("\n\nClase E");
                else
                    printf("\n\nClase D");
            }
            else
            {
                printf("\n\nClase C");
                mr[0] = 255;
                mr[1] = 255;
                mr[2] = 255;
                
                b[0]=~mr[0];
                b[1]=~mr[1];
                b[2]=~mr[2];
                b[3]=~mr[3];
                
                printf("\n\tMR = %u . %u. %u . %u ",mr[0],mr[1],mr[2],mr[3]);
				if( ip[3]==255)
                    printf("\n\nTipo: Broadcast");
                else if( ip[3]==0)
                    printf("\n\nTipo: Red");
                else
                    printf("\n\nTipo: Host");
                
                printf("\n\nMascara de red 255.255.255.0");
                printf("\n\nDir de red: %d.%d.%d.0",(ip[0] & mr[0]),(ip[1] & mr[1]),(ip[2] & mr[2]));
                printf("\n\nDir de Broadcast: %d.%d.%d.%d",(ip[0] & mr[0]),(ip[1] & mr[1]),(ip[2] & mr[2]),(ip[3]|(b[3])));
                printf("\n\nRango de host: %d.%d.%d.%d - %d.%d.%d.%d",(ip[0] & mr[0]),(ip[1] & mr[1]),(ip[2] & mr[2]),(mr[3]+1),(ip[0] & mr[0]),(ip[1] & mr[1]),(ip[2] & mr[2]),(mr[0]-1));
                
        
            if(ip[3] == 0)
                printf("\n\nEs de tipo Red.");
            else
            {
                if(ip[3] == 255)
                    printf("\n\nEs de tipo Broadcast.");
            
                else if( ip[3] != 0 || ip[3] != 255)
                    printf("\n\nEs de tipo Host");
            }

            
            
        }
                
        }
        else
        {
            printf("\n\nClase B");
            mr[0] = 255;
            mr[1] = 255;
            
            b[0]=~mr[0];
            b[1]=~mr[1];
            b[2]=~mr[2];
            b[3]=~mr[3];
            
            if(ip[2]==255 && ip[3]==255)
                printf("\n\nTipo: Broadcast");
            else if(ip[2]==0 && ip[3]==0)
                printf("\n\nTipo: Red");
            else
                printf("\n\nTipo: Host");
            
            printf("\n\nMascara de red %d.%d.%d.%d",mr[0],mr[1],mr[2],mr[3]);
            printf("\n\nDir de red: %d.%d.%d.%d",(ip[0] & mr[0]),(ip[1] & mr[1]),mr[2],mr[3]);
            printf("\n\nDir de Broadcast: %d.%d.%d.%d",(ip[0] & mr[0]),(ip[1] & mr[1]),(ip[2] | (b[2])),(ip[3]|b[3]));
            printf("\n\nRango de host: %d.%d.%d.%d - %d.%d.%d.%d",(ip[0] & mr[0]),(ip[1] & mr[1]),mr[2],(mr[3]+1),(ip[0] & mr[0]),(ip[1] & mr[1]),mr[0],(mr[0]-1));        
            
        }
            
    }
    else
    {
        printf("\n\nClase A");
        mr[0] = 255;
        
        b[0]=~mr[0];
        b[1]=~mr[1];
        b[2]=~mr[2];
        b[3]=~mr[3];
        
        if(ip[1]==255 && ip[2]==255 && ip[3]==255)
		  printf("\n\nTipo: Broadcast");
		else if(ip[1]==0 && ip[2]==0 && ip[3]==0)
		  printf("\n\nTipo: Red");
		else
		  printf("\n\nTipo: Host");
        
        printf("\n\nMascara de red %d.%d.%d.%d",mr[0],mr[1],mr[2],mr[3]);
        printf("\n\nDir de red: %d.%d.%d.%d",(ip[0] & mr[0]),mr[1],mr[2],mr[3]);
        printf("\n\nDir de Broadcast: %d.%d.%d.%d",(ip[0] & mr[0]),(ip[1]|(b[1])),(ip[2]|(b[2])),(ip[3]|(b[3])));
        printf("\n\nRango de host: %d.%d.%d.%d - %d.%d.%d.%d",(ip[0] & mr[0]),mr[1],mr[2],(mr[3]+1),(ip[0] & mr[0]),mr[0],mr[0],(mr[0]-1));
        
    }
    
    printf("\n\n");
}
