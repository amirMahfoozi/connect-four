#include <stdio.h>
struct position
{
    char y0[6];
    char y1[6];
    char y2[6];
    char y3[6];
    char y4[6];
    char y5[6];
    char y6[6];
};
void printboard(struct position board)
{
    for(int i = 5;i>=0;i--)
    {
        printf("%c ",board.y0[i]);
        printf("%c ",board.y1[i]);
        printf("%c ",board.y2[i]);
        printf("%c ",board.y3[i]);
        printf("%c ",board.y4[i]);
        printf("%c ",board.y5[i]);
        printf("%c ",board.y6[i]);
        printf("\n");
    }
}
int isvalidmove(int index,struct position currentposition)
{
    if(index == 0)
    {
        if(currentposition.y0[5] == 'O')
            return 1;
    }
    else if(index == 1)
    {
        if(currentposition.y1[5] == 'O')
            return 1;
    }
    else if(index == 2)
    {
        if(currentposition.y2[5] == 'O')
            return 1;
    }
    else if(index == 3)
    {
        if(currentposition.y3[5] == 'O')
            return 1;
    }
    else if(index == 4)
    {
        if(currentposition.y4[5] == 'O')
            return 1;
    }
    else if(index == 5)
    {
        if(currentposition.y5[5] == 'O')
            return 1;
    }
    else if(index == 6)
    {
        if(currentposition.y6[5] == 'O')
            return 1;
    }
    return 0;
}
struct position domove(int index,struct position currentPosition,char rorb)
{
    if(index == 0)
    {
        for(int i = 0;i<6;i++)
        {
            if(currentPosition.y0[i] == 'O')
            {
                currentPosition.y0[i] = rorb;
                return currentPosition;
            }
        }
    }
    else if(index == 1)
    {
        for(int i = 0;i<6;i++)
        {
            if(currentPosition.y1[i] == 'O')
            {
                currentPosition.y1[i] = rorb;
                return currentPosition;
            }
        }
    }
    else if(index == 2)
    {
        for(int i = 0;i<6;i++)
        {
            if(currentPosition.y2[i] == 'O')
            {
                currentPosition.y2[i] = rorb;
                return currentPosition;
            }
        }
    }
    else if(index == 3)
    {
        for(int i = 0;i<6;i++)
        {
            if(currentPosition.y3[i] == 'O')
            {
                currentPosition.y3[i] = rorb;
                return currentPosition;
            }
        }
    }
    else if(index == 4)
    {
       for(int i = 0;i<6;i++)
        {
            if(currentPosition.y4[i] == 'O')
            {
                currentPosition.y4[i] = rorb;
                return currentPosition;
            }
        }
    }
    else if(index == 5)
    {
        for(int i = 0;i<6;i++)
        {
            if(currentPosition.y5[i] == 'O')
            {
                currentPosition.y5[i] = rorb;
                return currentPosition;
            }
        }
    }
    else if(index == 6)
    {
        for(int i = 0;i<6;i++)
        {
            if(currentPosition.y6[i] == 'O')
            {
                currentPosition.y6[i] = rorb;
                return currentPosition;
            }
        }
    }
}
int evaluation(struct position currentposition)
{
    int ans = 0;
    // CHECK SOTON
    for(int i = 0;i<=2;i++)
    {
        // black wins in soton
        if(currentposition.y0[i] == 'b' && currentposition.y0[i+1] == 'b' && currentposition.y0[i+2] == 'b' && currentposition.y0[i+3] == 'b')
            ans+= -2000;
        if(currentposition.y1[i] == 'b' && currentposition.y1[i+1] == 'b' && currentposition.y1[i+2] == 'b' && currentposition.y1[i+3] == 'b')
            ans+= -2000;
        if(currentposition.y2[i] == 'b' && currentposition.y2[i+1] == 'b' && currentposition.y2[i+2] == 'b' && currentposition.y2[i+3] == 'b')
            ans+= -2000;
        if(currentposition.y3[i] == 'b' && currentposition.y3[i+1] == 'b' && currentposition.y3[i+2] == 'b' && currentposition.y3[i+3] == 'b')
            ans+= -2000;
        if(currentposition.y4[i] == 'b' && currentposition.y4[i+1] == 'b' && currentposition.y4[i+2] == 'b' && currentposition.y4[i+3] == 'b')
            ans+= -2000;
        if(currentposition.y5[i] == 'b' && currentposition.y5[i+1] == 'b' && currentposition.y5[i+2] == 'b' && currentposition.y5[i+3] == 'b')
            ans+= -2000;
        if(currentposition.y6[i] == 'b' && currentposition.y6[i+1] == 'b' && currentposition.y6[i+2] == 'b' && currentposition.y6[i+3] == 'b')
            ans+= -2000;
        // red wins in soton
        if(currentposition.y0[i] == 'r' && currentposition.y0[i+1] == 'r' && currentposition.y0[i+2] == 'r' && currentposition.y0[i+3] == 'r')
            ans+= 1000;
        if(currentposition.y1[i] == 'r' && currentposition.y1[i+1] == 'r' && currentposition.y1[i+2] == 'r' && currentposition.y1[i+3] == 'r')
            ans+= 1000;
        if(currentposition.y2[i] == 'r' && currentposition.y2[i+1] == 'r' && currentposition.y2[i+2] == 'r' && currentposition.y2[i+3] == 'r')
            ans+= 1000;
        if(currentposition.y3[i] == 'r' && currentposition.y3[i+1] == 'r' && currentposition.y3[i+2] == 'r' && currentposition.y3[i+3] == 'r')
            ans+= 1000;
        if(currentposition.y4[i] == 'r' && currentposition.y4[i+1] == 'r' && currentposition.y4[i+2] == 'r' && currentposition.y4[i+3] == 'r')
            ans+= 1000;
        if(currentposition.y5[i] == 'r' && currentposition.y5[i+1] == 'r' && currentposition.y5[i+2] == 'r' && currentposition.y5[i+3] == 'r')
            ans+= 1000;
        if(currentposition.y6[i] == 'r' && currentposition.y6[i+1] == 'r' && currentposition.y6[i+2] == 'r' && currentposition.y6[i+3] == 'r')
            ans+= 1000;
    }
    // no one wins but have 3 in a soton
    for(int i = 0;i<=3;i++)
    {
        // black gets 3 in soton
        if(currentposition.y0[i] == 'b' && currentposition.y0[i+1] == 'b' && currentposition.y0[i+2] == 'b')
            ans+= -300;
        if(currentposition.y1[i] == 'b' && currentposition.y1[i+1] == 'b' && currentposition.y1[i+2] == 'b')
            ans+= -300;
        if(currentposition.y2[i] == 'b' && currentposition.y2[i+1] == 'b' && currentposition.y2[i+2] == 'b')
            ans+= -300;
        if(currentposition.y3[i] == 'b' && currentposition.y3[i+1] == 'b' && currentposition.y3[i+2] == 'b')
            ans+= -300;
        if(currentposition.y4[i] == 'b' && currentposition.y4[i+1] == 'b' && currentposition.y4[i+2] == 'b')
            ans+= -300;
        if(currentposition.y5[i] == 'b' && currentposition.y5[i+1] == 'b' && currentposition.y5[i+2] == 'b')
            ans+= -300;
        if(currentposition.y6[i] == 'b' && currentposition.y6[i+1] == 'b' && currentposition.y6[i+2] == 'b')
            ans+= -300;
        // red gets 3 in soton
        if(currentposition.y0[i] == 'r' && currentposition.y0[i+1] == 'r' && currentposition.y0[i+2] == 'r')
            ans+= 300;
        if(currentposition.y1[i] == 'r' && currentposition.y1[i+1] == 'r' && currentposition.y1[i+2] == 'r')
            ans+= 300;
        if(currentposition.y2[i] == 'r' && currentposition.y2[i+1] == 'r' && currentposition.y2[i+2] == 'r')
            ans+= 300;
        if(currentposition.y3[i] == 'r' && currentposition.y3[i+1] == 'r' && currentposition.y3[i+2] == 'r')
            ans+= 300;
        if(currentposition.y4[i] == 'r' && currentposition.y4[i+1] == 'r' && currentposition.y4[i+2] == 'r')
            ans+= 300;
        if(currentposition.y5[i] == 'r' && currentposition.y5[i+1] == 'r' && currentposition.y5[i+2] == 'r')
            ans+= 300;
        if(currentposition.y6[i] == 'r' && currentposition.y6[i+1] == 'r' && currentposition.y6[i+2] == 'r')
            ans+= 300;
    }
    // no one has a 3 but has 2 in a soton
    for(int i = 0;i<=4;i++)
    {
        // black has 2 in soton
        if(currentposition.y0[i] == 'b' && currentposition.y0[i+1] == 'b')
            ans+= -20;
        if(currentposition.y1[i] == 'b' && currentposition.y1[i+1] == 'b')
            ans+= -20;
        if(currentposition.y2[i] == 'b' && currentposition.y2[i+1] == 'b')
            ans+= -20;
        if(currentposition.y3[i] == 'b' && currentposition.y3[i+1] == 'b')
            ans+= -20;
        if(currentposition.y4[i] == 'b' && currentposition.y4[i+1] == 'b')
            ans+= -20;
        if(currentposition.y5[i] == 'b' && currentposition.y5[i+1] == 'b')
            ans+= -20;
        if(currentposition.y6[i] == 'b' && currentposition.y6[i+1] == 'b')
            ans+= -20;
        // red has 2 in soton
        if(currentposition.y0[i] == 'r' && currentposition.y0[i+1] == 'r')
            ans+= 20;
        if(currentposition.y1[i] == 'r' && currentposition.y1[i+1] == 'r')
            ans+= 20;
        if(currentposition.y2[i] == 'r' && currentposition.y2[i+1] == 'r')
            ans+= 20;
        if(currentposition.y3[i] == 'r' && currentposition.y3[i+1] == 'r')
            ans+= 20;
        if(currentposition.y4[i] == 'r' && currentposition.y4[i+1] == 'r')
            ans+= 20;
        if(currentposition.y5[i] == 'r' && currentposition.y5[i+1] == 'r')
            ans+= 20;
        if(currentposition.y6[i] == 'r' && currentposition.y6[i+1] == 'r')
            ans+= 20;
    }
    // 1 in soton
    for(int i = 0;i<=5;i++)
    {
        // black has 1 in soton
        if(currentposition.y0[i] == 'b')
            ans+= -1;
        if(currentposition.y1[i] == 'b')
            ans+= -1;
        if(currentposition.y2[i] == 'b')
            ans+= -1;
        if(currentposition.y3[i] == 'b')
            ans+= -1;
        if(currentposition.y4[i] == 'b')
            ans+= -1;
        if(currentposition.y5[i] == 'b')
            ans+= -1;
        if(currentposition.y6[i] == 'b')
            ans+= -1;
        // red has 1 in soton
        if(currentposition.y0[i] == 'r')
            ans+= 1;
        if(currentposition.y1[i] == 'r')
            ans+= 1;
        if(currentposition.y2[i] == 'r')
            ans+= 1;
        if(currentposition.y3[i] == 'r')
            ans+= 1;
        if(currentposition.y4[i] == 'r')
            ans+= 1;
        if(currentposition.y5[i] == 'r')
            ans+= 1;
        if(currentposition.y6[i] == 'r')
            ans+= 1;
    }
    //END SOTON
    // SATR
    for(int i = 0;i<6;i++)
    {
        // black wins in a row
        if(currentposition.y0[i] == 'b' && currentposition.y1[i] == 'b' && currentposition.y2[i] == 'b' && currentposition.y3[i] == 'b')
            ans += -2000;
        if(currentposition.y1[i] == 'b' && currentposition.y2[i] == 'b' && currentposition.y3[i] == 'b' && currentposition.y4[i] == 'b')
            ans += -2000;
        if(currentposition.y2[i] == 'b' && currentposition.y3[i] == 'b' && currentposition.y4[i] == 'b' && currentposition.y5[i] == 'b')
            ans += -2000;
        if(currentposition.y3[i] == 'b' && currentposition.y4[i] == 'b' && currentposition.y5[i] == 'b' && currentposition.y6[i] == 'b')
            ans += -2000;
        // red wins in a row
        if(currentposition.y0[i] == 'r' && currentposition.y1[i] == 'r' && currentposition.y2[i] == 'r' && currentposition.y3[i] == 'r')
            ans += 1000;
        if(currentposition.y1[i] == 'r' && currentposition.y2[i] == 'r' && currentposition.y3[i] == 'r' && currentposition.y4[i] == 'r')
            ans += 1000;
        if(currentposition.y2[i] == 'r' && currentposition.y3[i] == 'r' && currentposition.y4[i] == 'r' && currentposition.y5[i] == 'r')
            ans += 1000;
        if(currentposition.y3[i] == 'r' && currentposition.y4[i] == 'r' && currentposition.y5[i] == 'r' && currentposition.y6[i] == 'r')
            ans += 1000;
        // no one wins but 3 in a row
        // black get 3 in a row
        if(currentposition.y0[i] == 'b' && currentposition.y1[i] == 'b' && currentposition.y2[i] == 'b')
            ans += -300;
        if(currentposition.y1[i] == 'b' && currentposition.y2[i] == 'b' && currentposition.y3[i] == 'b')
            ans += -300;
        if(currentposition.y2[i] == 'b' && currentposition.y3[i] == 'b' && currentposition.y4[i] == 'b')
            ans += -300;
        if(currentposition.y3[i] == 'b' && currentposition.y4[i] == 'b' && currentposition.y5[i] == 'b')
            ans += -300;
        if(currentposition.y4[i] == 'b' && currentposition.y5[i] == 'b' && currentposition.y6[i] == 'b')
            ans += -300;
        // red get 3 in a row
        if(currentposition.y0[i] == 'r' && currentposition.y1[i] == 'r' && currentposition.y2[i] == 'r')
            ans += 300;
        if(currentposition.y1[i] == 'r' && currentposition.y2[i] == 'r' && currentposition.y3[i] == 'r')
            ans += 300;
        if(currentposition.y2[i] == 'r' && currentposition.y3[i] == 'r' && currentposition.y4[i] == 'r')
            ans += 300;
        if(currentposition.y3[i] == 'r' && currentposition.y4[i] == 'r' && currentposition.y5[i] == 'r')
            ans += 300;
        if(currentposition.y4[i] == 'r' && currentposition.y5[i] == 'r' && currentposition.y6[i] == 'r')
            ans += 300;
        // 2 in a row
        // black has 2 in a row
        if(currentposition.y0[i] == 'b' && currentposition.y1[i] == 'b')
            ans += -20;
        if(currentposition.y1[i] == 'b' && currentposition.y2[i] == 'b')
            ans += -20;
        if(currentposition.y2[i] == 'b' && currentposition.y3[i] == 'b')
            ans += -20;
        if(currentposition.y3[i] == 'b' && currentposition.y4[i] == 'b')
            ans += -20;
        if(currentposition.y4[i] == 'b' && currentposition.y5[i] == 'b')
            ans += -20;
        if(currentposition.y5[i] == 'b' && currentposition.y6[i] == 'b')
            ans += -20;
        // red has 3 in a row
        if(currentposition.y0[i] == 'r' && currentposition.y1[i] == 'r')
            ans += 20;
        if(currentposition.y1[i] == 'r' && currentposition.y2[i] == 'r')
            ans += 20;
        if(currentposition.y2[i] == 'r' && currentposition.y3[i] == 'r')
            ans += 20;
        if(currentposition.y3[i] == 'r' && currentposition.y4[i] == 'r')
            ans += 20;
        if(currentposition.y4[i] == 'r' && currentposition.y5[i] == 'r')
            ans += 20;
        if(currentposition.y5[i] == 'r' && currentposition.y6[i] == 'r')
            ans += 20;
        // 1 in a row
        // black
        if(currentposition.y0[i] == 'b')
            ans += -1;
        if(currentposition.y1[i] == 'b')
            ans += -1;
        if(currentposition.y2[i] == 'b')
            ans += -1;
        if(currentposition.y3[i] == 'b')
            ans += -1;
        if(currentposition.y4[i] == 'b')
            ans += -1;
        if(currentposition.y5[i] == 'b')
            ans += -1;
        if(currentposition.y5[i] == 'b')
            ans += -1;
        // red
        if(currentposition.y0[i] == 'r')
            ans += 1;
        if(currentposition.y1[i] == 'r')
            ans += 1;
        if(currentposition.y2[i] == 'r')
            ans += 1;
        if(currentposition.y3[i] == 'r')
            ans += 1;
        if(currentposition.y4[i] == 'r')
            ans += 1;
        if(currentposition.y5[i] == 'r')
            ans += 1;
        if(currentposition.y5[i] == 'r')
            ans += 1;
    }
    // End SATR
    //GHOTRI
    for(int i = 5;i>=3;i--)
    {
        // black wins ghotri
        if(currentposition.y0[i] == 'b' && currentposition.y1[i-1] == 'b' && currentposition.y2[i-2] == 'b' && currentposition.y3[i-3] == 'b')
            ans+= -2000;
        if(currentposition.y1[i] == 'b' && currentposition.y2[i-1] == 'b' && currentposition.y3[i-2] == 'b' && currentposition.y4[i-3] == 'b')
            ans+= -2000;
        if(currentposition.y2[i] == 'b' && currentposition.y3[i-1] == 'b' && currentposition.y4[i-2] == 'b' && currentposition.y5[i-3] == 'b')
            ans+= -2000;
        if(currentposition.y3[i] == 'b' && currentposition.y4[i-1] == 'b' && currentposition.y5[i-2] == 'b' && currentposition.y6[i-3] == 'b')
            ans+= -2000;
        // red wins ghotri
        if(currentposition.y0[i] == 'r' && currentposition.y1[i-1] == 'r' && currentposition.y2[i-2] == 'r' && currentposition.y3[i-3] == 'r')
            ans+= 1000;
        if(currentposition.y1[i] == 'r' && currentposition.y2[i-1] == 'r' && currentposition.y3[i-2] == 'r' && currentposition.y4[i-3] == 'r')
            ans+= 1000;
        if(currentposition.y2[i] == 'r' && currentposition.y3[i-1] == 'r' && currentposition.y4[i-2] == 'r' && currentposition.y5[i-3] == 'r')
            ans+= 1000;
        if(currentposition.y3[i] == 'r' && currentposition.y4[i-1] == 'r' && currentposition.y5[i-2] == 'r' && currentposition.y6[i-3] == 'r')
            ans+= 1000;
    }
    for(int i = 0;i<3;i++)
    {
        // black wins ghotri onvari
        if(currentposition.y0[i] == 'b' && currentposition.y1[i+1] == 'b' && currentposition.y2[i+2] == 'b' && currentposition.y3[i+3] == 'b')
            ans+= -2000;
        if(currentposition.y1[i] == 'b' && currentposition.y2[i+1] == 'b' && currentposition.y3[i+2] == 'b' && currentposition.y4[i+3] == 'b')
            ans+= -2000;
        if(currentposition.y2[i] == 'b' && currentposition.y3[i+1] == 'b' && currentposition.y4[i+2] == 'b' && currentposition.y5[i+3] == 'b')
            ans+= -2000;
        if(currentposition.y3[i] == 'b' && currentposition.y4[i+1] == 'b' && currentposition.y5[i+2] == 'b' && currentposition.y6[i+3] == 'b')
            ans+= -2000;
        // red wins ghotri onvari
        if(currentposition.y0[i] == 'r' && currentposition.y1[i+1] == 'r' && currentposition.y2[i+2] == 'r' && currentposition.y3[i+3] == 'r')
            ans+= 1000;
        if(currentposition.y1[i] == 'r' && currentposition.y2[i+1] == 'r' && currentposition.y3[i+2] == 'r' && currentposition.y4[i+3] == 'r')
            ans+= 1000;
        if(currentposition.y2[i] == 'r' && currentposition.y3[i+1] == 'r' && currentposition.y4[i+2] == 'r' && currentposition.y5[i+3] == 'r')
            ans+= 1000;
        if(currentposition.y3[i] == 'r' && currentposition.y4[i+1] == 'r' && currentposition.y5[i+2] == 'r' && currentposition.y6[i+3] == 'r')
            ans+= 1000;
    }
    // no one wins in ghotri but has 3 in a ghotr
    for(int i = 5;i>=2;i--)
    {
        // black has 3 in a ghotr
        if(currentposition.y0[i] == 'b' && currentposition.y1[i-1] == 'b' && currentposition.y2[i-2] == 'b')
            ans+= -300;
        if(currentposition.y1[i] == 'b' && currentposition.y2[i-1] == 'b' && currentposition.y3[i-2] == 'b')
            ans+= -300;
        if(currentposition.y2[i] == 'b' && currentposition.y3[i-1] == 'b' && currentposition.y4[i-2] == 'b')
            ans+= -300;
        if(currentposition.y3[i] == 'b' && currentposition.y4[i-1] == 'b' && currentposition.y5[i-2] == 'b')
            ans+= -300;
        if(currentposition.y4[i] == 'b' && currentposition.y5[i-1] == 'b' && currentposition.y6[i-2] == 'b')
            ans+= -300;
        // red has 3 in a ghotr
        if(currentposition.y0[i] == 'r' && currentposition.y1[i-1] == 'r' && currentposition.y2[i-2] == 'r')
            ans+= 300;
        if(currentposition.y1[i] == 'r' && currentposition.y2[i-1] == 'r' && currentposition.y3[i-2] == 'r')
            ans+= 300;
        if(currentposition.y2[i] == 'r' && currentposition.y3[i-1] == 'r' && currentposition.y4[i-2] == 'r')
            ans+= 300;
        if(currentposition.y3[i] == 'r' && currentposition.y4[i-1] == 'r' && currentposition.y5[i-2] == 'r')
            ans+= 300;
        if(currentposition.y4[i] == 'r' && currentposition.y5[i-1] == 'r' && currentposition.y6[i-2] == 'r')
            ans+= 300;
    }

    // ghotr onvari
    for(int i = 0;i<=3;i++)
    {
        // black has 3 in a ghotr onvari
        if(currentposition.y0[i] == 'b' && currentposition.y1[i+1] == 'b' && currentposition.y2[i+2] == 'b')
            ans+= -300;
        if(currentposition.y1[i] == 'b' && currentposition.y2[i+1] == 'b' && currentposition.y3[i+2] == 'b')
            ans+= -300;
        if(currentposition.y2[i] == 'b' && currentposition.y3[i+1] == 'b' && currentposition.y4[i+2] == 'b')
            ans+= -300;
        if(currentposition.y3[i] == 'b' && currentposition.y4[i+1] == 'b' && currentposition.y5[i+2] == 'b')
            ans+= -300;
        if(currentposition.y4[i] == 'b' && currentposition.y5[i+1] == 'b' && currentposition.y6[i+2] == 'b')
            ans+= -300;
        // red has 3 in a ghotr onvari
        if(currentposition.y0[i] == 'r' && currentposition.y1[i+1] == 'r' && currentposition.y2[i+2] == 'r')
            ans+= 300;
        if(currentposition.y1[i] == 'r' && currentposition.y2[i+1] == 'r' && currentposition.y3[i+2] == 'r')
            ans+= 300;
        if(currentposition.y2[i] == 'r' && currentposition.y3[i+1] == 'r' && currentposition.y4[i+2] == 'r')
            ans+= 300;
        if(currentposition.y3[i] == 'r' && currentposition.y4[i+1] == 'r' && currentposition.y5[i+2] == 'r')
            ans+= 300;
        if(currentposition.y4[i] == 'r' && currentposition.y5[i+1] == 'r' && currentposition.y6[i+2] == 'r')
            ans+= 300;
    }
    // has 2 in ghotri

    for(int i = 5;i>=1;i--)
    {
        // black has 2 ghotri onvari
        if(currentposition.y0[i] == 'b' && currentposition.y1[i-1] == 'b')
            ans+= -20;
        if(currentposition.y1[i] == 'b' && currentposition.y2[i-1] == 'b')
            ans+= -20;
        if(currentposition.y2[i] == 'b' && currentposition.y3[i-1] == 'b')
            ans+= -20;
        if(currentposition.y3[i] == 'b' && currentposition.y4[i-1] == 'b')
            ans+= -20;
        if(currentposition.y4[i] == 'b' && currentposition.y5[i-1] == 'b')
            ans+= -20;
        if(currentposition.y5[i] == 'b' && currentposition.y6[i-1] == 'b')
            ans+= -20;
        // red has 2 ghotri onvari
        if(currentposition.y0[i] == 'r' && currentposition.y1[i-1] == 'r')
            ans+= 20;
        if(currentposition.y1[i] == 'r' && currentposition.y2[i-1] == 'r')
            ans+= 20;
        if(currentposition.y2[i] == 'r' && currentposition.y3[i-1] == 'r')
            ans+= 20;
        if(currentposition.y3[i] == 'r' && currentposition.y4[i-1] == 'r')
            ans+= 20;
        if(currentposition.y4[i] == 'r' && currentposition.y5[i-1] == 'r')
            ans+= 20;
        if(currentposition.y5[i] == 'r' && currentposition.y6[i-1] == 'r')
            ans+= 20;
    }
    // has 2 in ghotr onvari
    for(int i = 0;i<=4;i++)
    {
        // black has 2 ghotri onvari
        if(currentposition.y0[i] == 'b' && currentposition.y1[i+1] == 'b')
            ans+= -20;
        if(currentposition.y1[i] == 'b' && currentposition.y2[i+1] == 'b')
            ans+= -20;
        if(currentposition.y2[i] == 'b' && currentposition.y3[i+1] == 'b')
            ans+= -20;
        if(currentposition.y3[i] == 'b' && currentposition.y4[i+1] == 'b')
            ans+= -20;
        if(currentposition.y4[i] == 'b' && currentposition.y5[i+1] == 'b')
            ans+= -20;
        if(currentposition.y5[i] == 'b' && currentposition.y6[i+1] == 'b')
            ans+= -20;
        // red has 2 ghotri onvari
        if(currentposition.y0[i] == 'r' && currentposition.y1[i+1] == 'r')
            ans+= 20;
        if(currentposition.y1[i] == 'r' && currentposition.y2[i+1] == 'r')
            ans+= 20;
        if(currentposition.y2[i] == 'r' && currentposition.y3[i+1] == 'r')
            ans+= 20;
        if(currentposition.y3[i] == 'r' && currentposition.y4[i+1] == 'r')
            ans+= 20;
        if(currentposition.y4[i] == 'r' && currentposition.y5[i+1] == 'r')
            ans+= 20;
        if(currentposition.y5[i] == 'r' && currentposition.y6[i+1] == 'r')
            ans+= 20;
    }

    return ans;
}

int evaluation2(struct position currentposition)
{
    int ans = 0;
    // CHECK SOTON
    for(int i = 0;i<=2;i++)
    {
        // black wins in soton
        if(currentposition.y0[i] == 'r' && currentposition.y0[i+1] == 'r' && currentposition.y0[i+2] == 'r' && currentposition.y0[i+3] == 'r')
            ans+= -2000;
        if(currentposition.y1[i] == 'r' && currentposition.y1[i+1] == 'r' && currentposition.y1[i+2] == 'r' && currentposition.y1[i+3] == 'r')
            ans+= -2000;
        if(currentposition.y2[i] == 'r' && currentposition.y2[i+1] == 'r' && currentposition.y2[i+2] == 'r' && currentposition.y2[i+3] == 'r')
            ans+= -2000;
        if(currentposition.y3[i] == 'r' && currentposition.y3[i+1] == 'r' && currentposition.y3[i+2] == 'r' && currentposition.y3[i+3] == 'r')
            ans+= -2000;
        if(currentposition.y4[i] == 'r' && currentposition.y4[i+1] == 'r' && currentposition.y4[i+2] == 'r' && currentposition.y4[i+3] == 'r')
            ans+= -2000;
        if(currentposition.y5[i] == 'r' && currentposition.y5[i+1] == 'r' && currentposition.y5[i+2] == 'r' && currentposition.y5[i+3] == 'r')
            ans+= -2000;
        if(currentposition.y6[i] == 'r' && currentposition.y6[i+1] == 'r' && currentposition.y6[i+2] == 'r' && currentposition.y6[i+3] == 'r')
            ans+= -2000;
        // red wins in soton
        if(currentposition.y0[i] == 'b' && currentposition.y0[i+1] == 'b' && currentposition.y0[i+2] == 'b' && currentposition.y0[i+3] == 'b')
            ans+= 1000;
        if(currentposition.y1[i] == 'b' && currentposition.y1[i+1] == 'b' && currentposition.y1[i+2] == 'b' && currentposition.y1[i+3] == 'b')
            ans+= 1000;
        if(currentposition.y2[i] == 'b' && currentposition.y2[i+1] == 'b' && currentposition.y2[i+2] == 'b' && currentposition.y2[i+3] == 'b')
            ans+= 1000;
        if(currentposition.y3[i] == 'b' && currentposition.y3[i+1] == 'b' && currentposition.y3[i+2] == 'b' && currentposition.y3[i+3] == 'b')
            ans+= 1000;
        if(currentposition.y4[i] == 'b' && currentposition.y4[i+1] == 'b' && currentposition.y4[i+2] == 'b' && currentposition.y4[i+3] == 'b')
            ans+= 1000;
        if(currentposition.y5[i] == 'b' && currentposition.y5[i+1] == 'b' && currentposition.y5[i+2] == 'b' && currentposition.y5[i+3] == 'b')
            ans+= 1000;
        if(currentposition.y6[i] == 'b' && currentposition.y6[i+1] == 'b' && currentposition.y6[i+2] == 'b' && currentposition.y6[i+3] == 'b')
            ans+= 1000;
    }
    // no one wins but have 3 in a soton
    for(int i = 0;i<=3;i++)
    {
        // black gets 3 in soton
        if(currentposition.y0[i] == 'r' && currentposition.y0[i+1] == 'r' && currentposition.y0[i+2] == 'r')
            ans+= -300;
        if(currentposition.y1[i] == 'r' && currentposition.y1[i+1] == 'r' && currentposition.y1[i+2] == 'r')
            ans+= -300;
        if(currentposition.y2[i] == 'r' && currentposition.y2[i+1] == 'r' && currentposition.y2[i+2] == 'r')
            ans+= -300;
        if(currentposition.y3[i] == 'r' && currentposition.y3[i+1] == 'r' && currentposition.y3[i+2] == 'r')
            ans+= -300;
        if(currentposition.y4[i] == 'r' && currentposition.y4[i+1] == 'r' && currentposition.y4[i+2] == 'r')
            ans+= -300;
        if(currentposition.y5[i] == 'r' && currentposition.y5[i+1] == 'r' && currentposition.y5[i+2] == 'r')
            ans+= -300;
        if(currentposition.y6[i] == 'r' && currentposition.y6[i+1] == 'r' && currentposition.y6[i+2] == 'r')
            ans+= -300;
        // red gets 3 in soton
        if(currentposition.y0[i] == 'b' && currentposition.y0[i+1] == 'b' && currentposition.y0[i+2] == 'b')
            ans+= 300;
        if(currentposition.y1[i] == 'b' && currentposition.y1[i+1] == 'b' && currentposition.y1[i+2] == 'b')
            ans+= 300;
        if(currentposition.y2[i] == 'b' && currentposition.y2[i+1] == 'b' && currentposition.y2[i+2] == 'b')
            ans+= 300;
        if(currentposition.y3[i] == 'b' && currentposition.y3[i+1] == 'b' && currentposition.y3[i+2] == 'b')
            ans+= 300;
        if(currentposition.y4[i] == 'b' && currentposition.y4[i+1] == 'b' && currentposition.y4[i+2] == 'b')
            ans+= 300;
        if(currentposition.y5[i] == 'b' && currentposition.y5[i+1] == 'b' && currentposition.y5[i+2] == 'b')
            ans+= 300;
        if(currentposition.y6[i] == 'b' && currentposition.y6[i+1] == 'b' && currentposition.y6[i+2] == 'b')
            ans+= 300;
    }
    // no one has a 3 but has 2 in a soton
    for(int i = 0;i<=4;i++)
    {
        // black has 2 in soton
        if(currentposition.y0[i] == 'r' && currentposition.y0[i+1] == 'r')
            ans+= -20;
        if(currentposition.y1[i] == 'r' && currentposition.y1[i+1] == 'r')
            ans+= -20;
        if(currentposition.y2[i] == 'r' && currentposition.y2[i+1] == 'r')
            ans+= -20;
        if(currentposition.y3[i] == 'r' && currentposition.y3[i+1] == 'r')
            ans+= -20;
        if(currentposition.y4[i] == 'r' && currentposition.y4[i+1] == 'r')
            ans+= -20;
        if(currentposition.y5[i] == 'r' && currentposition.y5[i+1] == 'r')
            ans+= -20;
        if(currentposition.y6[i] == 'r' && currentposition.y6[i+1] == 'r')
            ans+= -20;
        // red has 2 in soton
        if(currentposition.y0[i] == 'b' && currentposition.y0[i+1] == 'b')
            ans+= 20;
        if(currentposition.y1[i] == 'b' && currentposition.y1[i+1] == 'b')
            ans+= 20;
        if(currentposition.y2[i] == 'b' && currentposition.y2[i+1] == 'b')
            ans+= 20;
        if(currentposition.y3[i] == 'b' && currentposition.y3[i+1] == 'b')
            ans+= 20;
        if(currentposition.y4[i] == 'b' && currentposition.y4[i+1] == 'b')
            ans+= 20;
        if(currentposition.y5[i] == 'b' && currentposition.y5[i+1] == 'b')
            ans+= 20;
        if(currentposition.y6[i] == 'b' && currentposition.y6[i+1] == 'b')
            ans+= 20;
    }
    // 1 in soton
    for(int i = 0;i<=5;i++)
    {
        // black has 1 in soton
        if(currentposition.y0[i] == 'r')
            ans+= -1;
        if(currentposition.y1[i] == 'r')
            ans+= -1;
        if(currentposition.y2[i] == 'r')
            ans+= -1;
        if(currentposition.y3[i] == 'r')
            ans+= -1;
        if(currentposition.y4[i] == 'r')
            ans+= -1;
        if(currentposition.y5[i] == 'r')
            ans+= -1;
        if(currentposition.y6[i] == 'r')
            ans+= -1;
        // red has 1 in soton
        if(currentposition.y0[i] == 'b')
            ans+= 1;
        if(currentposition.y1[i] == 'b')
            ans+= 1;
        if(currentposition.y2[i] == 'b')
            ans+= 1;
        if(currentposition.y3[i] == 'b')
            ans+= 1;
        if(currentposition.y4[i] == 'b')
            ans+= 1;
        if(currentposition.y5[i] == 'b')
            ans+= 1;
        if(currentposition.y6[i] == 'b')
            ans+= 1;
    }
    //END SOTON
    // SATR
    for(int i = 0;i<6;i++)
    {
        // black wins in a row
        if(currentposition.y0[i] == 'r' && currentposition.y1[i] == 'r' && currentposition.y2[i] == 'r' && currentposition.y3[i] == 'r')
            ans += -2000;
        if(currentposition.y1[i] == 'r' && currentposition.y2[i] == 'r' && currentposition.y3[i] == 'r' && currentposition.y4[i] == 'r')
            ans += -2000;
        if(currentposition.y2[i] == 'r' && currentposition.y3[i] == 'r' && currentposition.y4[i] == 'r' && currentposition.y5[i] == 'r')
            ans += -2000;
        if(currentposition.y3[i] == 'r' && currentposition.y4[i] == 'r' && currentposition.y5[i] == 'r' && currentposition.y6[i] == 'r')
            ans += -2000;
        // red wins in a row
        if(currentposition.y0[i] == 'b' && currentposition.y1[i] == 'b' && currentposition.y2[i] == 'b' && currentposition.y3[i] == 'b')
            ans += 1000;
        if(currentposition.y1[i] == 'b' && currentposition.y2[i] == 'b' && currentposition.y3[i] == 'b' && currentposition.y4[i] == 'b')
            ans += 1000;
        if(currentposition.y2[i] == 'b' && currentposition.y3[i] == 'b' && currentposition.y4[i] == 'b' && currentposition.y5[i] == 'b')
            ans += 1000;
        if(currentposition.y3[i] == 'b' && currentposition.y4[i] == 'b' && currentposition.y5[i] == 'b' && currentposition.y6[i] == 'b')
            ans += 1000;
        // no one wins but 3 in a row
        // black get 3 in a row
        if(currentposition.y0[i] == 'r' && currentposition.y1[i] == 'r' && currentposition.y2[i] == 'r')
            ans += -300;
        if(currentposition.y1[i] == 'r' && currentposition.y2[i] == 'r' && currentposition.y3[i] == 'r')
            ans += -300;
        if(currentposition.y2[i] == 'r' && currentposition.y3[i] == 'r' && currentposition.y4[i] == 'r')
            ans += -300;
        if(currentposition.y3[i] == 'r' && currentposition.y4[i] == 'r' && currentposition.y5[i] == 'r')
            ans += -300;
        if(currentposition.y4[i] == 'r' && currentposition.y5[i] == 'r' && currentposition.y6[i] == 'r')
            ans += -300;
        // red get 3 in a row
        if(currentposition.y0[i] == 'b' && currentposition.y1[i] == 'b' && currentposition.y2[i] == 'b')
            ans += 300;
        if(currentposition.y1[i] == 'b' && currentposition.y2[i] == 'b' && currentposition.y3[i] == 'b')
            ans += 300;
        if(currentposition.y2[i] == 'b' && currentposition.y3[i] == 'b' && currentposition.y4[i] == 'b')
            ans += 300;
        if(currentposition.y3[i] == 'b' && currentposition.y4[i] == 'b' && currentposition.y5[i] == 'b')
            ans += 300;
        if(currentposition.y4[i] == 'b' && currentposition.y5[i] == 'b' && currentposition.y6[i] == 'b')
            ans += 300;
        // 2 in a row
        // black has 2 in a row
        if(currentposition.y0[i] == 'r' && currentposition.y1[i] == 'r')
            ans += -20;
        if(currentposition.y1[i] == 'r' && currentposition.y2[i] == 'r')
            ans += -20;
        if(currentposition.y2[i] == 'r' && currentposition.y3[i] == 'r')
            ans += -20;
        if(currentposition.y3[i] == 'r' && currentposition.y4[i] == 'r')
            ans += -20;
        if(currentposition.y4[i] == 'r' && currentposition.y5[i] == 'r')
            ans += -20;
        if(currentposition.y5[i] == 'r' && currentposition.y6[i] == 'r')
            ans += -20;
        // red has 3 in a row
        if(currentposition.y0[i] == 'b' && currentposition.y1[i] == 'b')
            ans += 20;
        if(currentposition.y1[i] == 'b' && currentposition.y2[i] == 'b')
            ans += 20;
        if(currentposition.y2[i] == 'b' && currentposition.y3[i] == 'b')
            ans += 20;
        if(currentposition.y3[i] == 'b' && currentposition.y4[i] == 'b')
            ans += 20;
        if(currentposition.y4[i] == 'b' && currentposition.y5[i] == 'b')
            ans += 20;
        if(currentposition.y5[i] == 'b' && currentposition.y6[i] == 'b')
            ans += 20;
        // 1 in a row
        // black
        if(currentposition.y0[i] == 'r')
            ans += -1;
        if(currentposition.y1[i] == 'r')
            ans += -1;
        if(currentposition.y2[i] == 'r')
            ans += -1;
        if(currentposition.y3[i] == 'r')
            ans += -1;
        if(currentposition.y4[i] == 'r')
            ans += -1;
        if(currentposition.y5[i] == 'r')
            ans += -1;
        if(currentposition.y5[i] == 'r')
            ans += -1;
        // red
        if(currentposition.y0[i] == 'b')
            ans += 1;
        if(currentposition.y1[i] == 'b')
            ans += 1;
        if(currentposition.y2[i] == 'b')
            ans += 1;
        if(currentposition.y3[i] == 'b')
            ans += 1;
        if(currentposition.y4[i] == 'b')
            ans += 1;
        if(currentposition.y5[i] == 'b')
            ans += 1;
        if(currentposition.y5[i] == 'b')
            ans += 1;
    }
    // End SATR
    //GHOTRI
    for(int i = 5;i>=3;i--)
    {
        // black wins ghotri
        if(currentposition.y0[i] == 'r' && currentposition.y1[i-1] == 'r' && currentposition.y2[i-2] == 'r' && currentposition.y3[i-3] == 'r')
            ans+= -2000;
        if(currentposition.y1[i] == 'r' && currentposition.y2[i-1] == 'r' && currentposition.y3[i-2] == 'r' && currentposition.y4[i-3] == 'r')
            ans+= -2000;
        if(currentposition.y2[i] == 'r' && currentposition.y3[i-1] == 'r' && currentposition.y4[i-2] == 'r' && currentposition.y5[i-3] == 'r')
            ans+= -2000;
        if(currentposition.y3[i] == 'r' && currentposition.y4[i-1] == 'r' && currentposition.y5[i-2] == 'r' && currentposition.y6[i-3] == 'r')
            ans+= -2000;
        // red wins ghotri
        if(currentposition.y0[i] == 'b' && currentposition.y1[i-1] == 'b' && currentposition.y2[i-2] == 'b' && currentposition.y3[i-3] == 'b')
            ans+= 1000;
        if(currentposition.y1[i] == 'b' && currentposition.y2[i-1] == 'b' && currentposition.y3[i-2] == 'b' && currentposition.y4[i-3] == 'b')
            ans+= 1000;
        if(currentposition.y2[i] == 'b' && currentposition.y3[i-1] == 'b' && currentposition.y4[i-2] == 'b' && currentposition.y5[i-3] == 'b')
            ans+= 1000;
        if(currentposition.y3[i] == 'b' && currentposition.y4[i-1] == 'b' && currentposition.y5[i-2] == 'b' && currentposition.y6[i-3] == 'b')
            ans+= 1000;
    }
    for(int i = 0;i<3;i++)
    {
        // black wins ghotri onvari
        if(currentposition.y0[i] == 'r' && currentposition.y1[i+1] == 'r' && currentposition.y2[i+2] == 'r' && currentposition.y3[i+3] == 'r')
            ans+= -2000;
        if(currentposition.y1[i] == 'r' && currentposition.y2[i+1] == 'r' && currentposition.y3[i+2] == 'r' && currentposition.y4[i+3] == 'r')
            ans+= -2000;
        if(currentposition.y2[i] == 'r' && currentposition.y3[i+1] == 'r' && currentposition.y4[i+2] == 'r' && currentposition.y5[i+3] == 'r')
            ans+= -2000;
        if(currentposition.y3[i] == 'r' && currentposition.y4[i+1] == 'r' && currentposition.y5[i+2] == 'r' && currentposition.y6[i+3] == 'r')
            ans+= -2000;
        // red wins ghotri onvari
        if(currentposition.y0[i] == 'b' && currentposition.y1[i+1] == 'b' && currentposition.y2[i+2] == 'b' && currentposition.y3[i+3] == 'b')
            ans+= 1000;
        if(currentposition.y1[i] == 'b' && currentposition.y2[i+1] == 'b' && currentposition.y3[i+2] == 'b' && currentposition.y4[i+3] == 'b')
            ans+= 1000;
        if(currentposition.y2[i] == 'b' && currentposition.y3[i+1] == 'b' && currentposition.y4[i+2] == 'b' && currentposition.y5[i+3] == 'b')
            ans+= 1000;
        if(currentposition.y3[i] == 'b' && currentposition.y4[i+1] == 'b' && currentposition.y5[i+2] == 'b' && currentposition.y6[i+3] == 'b')
            ans+= 1000;
    }
    // no one wins in ghotri but has 3 in a ghotr
    for(int i = 5;i>=2;i--)
    {
        // black has 3 in a ghotr
        if(currentposition.y0[i] == 'r' && currentposition.y1[i-1] == 'r' && currentposition.y2[i-2] == 'r')
            ans+= -300;
        if(currentposition.y1[i] == 'r' && currentposition.y2[i-1] == 'r' && currentposition.y3[i-2] == 'r')
            ans+= -300;
        if(currentposition.y2[i] == 'r' && currentposition.y3[i-1] == 'r' && currentposition.y4[i-2] == 'r')
            ans+= -300;
        if(currentposition.y3[i] == 'r' && currentposition.y4[i-1] == 'r' && currentposition.y5[i-2] == 'r')
            ans+= -300;
        if(currentposition.y4[i] == 'r' && currentposition.y5[i-1] == 'r' && currentposition.y6[i-2] == 'r')
            ans+= -300;
        // red has 3 in a ghotr
        if(currentposition.y0[i] == 'b' && currentposition.y1[i-1] == 'b' && currentposition.y2[i-2] == 'b')
            ans+= 300;
        if(currentposition.y1[i] == 'b' && currentposition.y2[i-1] == 'b' && currentposition.y3[i-2] == 'b')
            ans+= 300;
        if(currentposition.y2[i] == 'b' && currentposition.y3[i-1] == 'b' && currentposition.y4[i-2] == 'b')
            ans+= 300;
        if(currentposition.y3[i] == 'b' && currentposition.y4[i-1] == 'b' && currentposition.y5[i-2] == 'b')
            ans+= 300;
        if(currentposition.y4[i] == 'b' && currentposition.y5[i-1] == 'b' && currentposition.y6[i-2] == 'b')
            ans+= 300;
    }

    // ghotr onvari
    for(int i = 0;i<=3;i++)
    {
        // black has 3 in a ghotr onvari
        if(currentposition.y0[i] == 'r' && currentposition.y1[i+1] == 'r' && currentposition.y2[i+2] == 'r')
            ans+= -300;
        if(currentposition.y1[i] == 'r' && currentposition.y2[i+1] == 'r' && currentposition.y3[i+2] == 'r')
            ans+= -300;
        if(currentposition.y2[i] == 'r' && currentposition.y3[i+1] == 'r' && currentposition.y4[i+2] == 'r')
            ans+= -300;
        if(currentposition.y3[i] == 'r' && currentposition.y4[i+1] == 'r' && currentposition.y5[i+2] == 'r')
            ans+= -300;
        if(currentposition.y4[i] == 'r' && currentposition.y5[i+1] == 'r' && currentposition.y6[i+2] == 'r')
            ans+= -300;
        // red has 3 in a ghotr onvari
        if(currentposition.y0[i] == 'b' && currentposition.y1[i+1] == 'b' && currentposition.y2[i+2] == 'b')
            ans+= 300;
        if(currentposition.y1[i] == 'b' && currentposition.y2[i+1] == 'b' && currentposition.y3[i+2] == 'b')
            ans+= 300;
        if(currentposition.y2[i] == 'b' && currentposition.y3[i+1] == 'b' && currentposition.y4[i+2] == 'b')
            ans+= 300;
        if(currentposition.y3[i] == 'b' && currentposition.y4[i+1] == 'b' && currentposition.y5[i+2] == 'b')
            ans+= 300;
        if(currentposition.y4[i] == 'b' && currentposition.y5[i+1] == 'b' && currentposition.y6[i+2] == 'b')
            ans+= 300;
    }
    // has 2 in ghotri

    for(int i = 5;i>=1;i--)
    {
        // black has 2 ghotri onvari
        if(currentposition.y0[i] == 'r' && currentposition.y1[i-1] == 'r')
            ans+= -20;
        if(currentposition.y1[i] == 'r' && currentposition.y2[i-1] == 'r')
            ans+= -20;
        if(currentposition.y2[i] == 'r' && currentposition.y3[i-1] == 'r')
            ans+= -20;
        if(currentposition.y3[i] == 'r' && currentposition.y4[i-1] == 'r')
            ans+= -20;
        if(currentposition.y4[i] == 'r' && currentposition.y5[i-1] == 'r')
            ans+= -20;
        if(currentposition.y5[i] == 'r' && currentposition.y6[i-1] == 'r')
            ans+= -20;
        // red has 2 ghotri onvari
        if(currentposition.y0[i] == 'b' && currentposition.y1[i-1] == 'b')
            ans+= 20;
        if(currentposition.y1[i] == 'b' && currentposition.y2[i-1] == 'b')
            ans+= 20;
        if(currentposition.y2[i] == 'b' && currentposition.y3[i-1] == 'b')
            ans+= 20;
        if(currentposition.y3[i] == 'b' && currentposition.y4[i-1] == 'b')
            ans+= 20;
        if(currentposition.y4[i] == 'b' && currentposition.y5[i-1] == 'b')
            ans+= 20;
        if(currentposition.y5[i] == 'b' && currentposition.y6[i-1] == 'b')
            ans+= 20;
    }
    // has 2 in ghotr onvari
    for(int i = 0;i<=4;i++)
    {
        // black has 2 ghotri onvari
        if(currentposition.y0[i] == 'r' && currentposition.y1[i+1] == 'r')
            ans+= -20;
        if(currentposition.y1[i] == 'r' && currentposition.y2[i+1] == 'r')
            ans+= -20;
        if(currentposition.y2[i] == 'r' && currentposition.y3[i+1] == 'r')
            ans+= -20;
        if(currentposition.y3[i] == 'r' && currentposition.y4[i+1] == 'r')
            ans+= -20;
        if(currentposition.y4[i] == 'r' && currentposition.y5[i+1] == 'r')
            ans+= -20;
        if(currentposition.y5[i] == 'r' && currentposition.y6[i+1] == 'r')
            ans+= -20;
        // red has 2 ghotri onvari
        if(currentposition.y0[i] == 'b' && currentposition.y1[i+1] == 'b')
            ans+= 20;
        if(currentposition.y1[i] == 'b' && currentposition.y2[i+1] == 'b')
            ans+= 20;
        if(currentposition.y2[i] == 'b' && currentposition.y3[i+1] == 'b')
            ans+= 20;
        if(currentposition.y3[i] == 'b' && currentposition.y4[i+1] == 'b')
            ans+= 20;
        if(currentposition.y4[i] == 'b' && currentposition.y5[i+1] == 'b')
            ans+= 20;
        if(currentposition.y5[i] == 'b' && currentposition.y6[i+1] == 'b')
            ans+= 20;
    }

    return ans;
}


int minimax(struct position currentposition,int depth,int alpha,int beta,int maximizingplayer,char firstorsecond)
{
    if(depth == 0 && firstorsecond == 'r')
    {
        return evaluation(currentposition);
    }
    if(depth == 0 && firstorsecond == 'b')
    {
        return evaluation2(currentposition);
    }
    if(maximizingplayer)
    {
        int maxeval = -99999,eval;
        for(int i = 0;i<=6;i++)
        {
            if(isvalidmove(i,currentposition) == 0)
                continue;
            struct position child = domove(i,currentposition,firstorsecond);
            eval = minimax(child,depth-1,alpha,beta,0,firstorsecond);
            if(eval > maxeval)
                maxeval = eval;
            if(eval > alpha)
                alpha = eval;
            if(beta <= alpha)
                break;

        }
        return maxeval;
    }
    else
    {
        int mineval = +99999,eval;
        for(int i = 0;i<=6;i++)
        {
            if(isvalidmove(i,currentposition) == 0)
                continue;
            if(firstorsecond == 'r')
            {
                struct position child = domove(i,currentposition,'b');
                 eval = minimax(child,depth-1,alpha,beta,1,firstorsecond);
            if(eval < mineval)
                mineval = eval;
            if(eval < beta)
                beta = eval;
            if(beta <= alpha)
                break;
            }

            else
            {
                struct position child = domove(i,currentposition,'r');
                 eval = minimax(child,depth-1,alpha,beta,1,firstorsecond);
            if(eval < mineval)
                mineval = eval;
            if(eval < beta)
                beta = eval;
            if(beta <= alpha)
                break;
            }


        }
        return mineval;
    }
}
int findbestmove(struct position board,char firstorsecond)
{

    int bestmove = 0;
    int bestscore = -99999;
    int score;
    for(int i = 0;i<=6;i++)
    {
        if(isvalidmove(i,board) == 0)
                continue;
        struct position newboard = domove(i,board,firstorsecond);
        score = minimax(newboard,7,-99999,99999,0,firstorsecond);
        //printf("   %d   ",score);
        if(score > bestscore)
        {
            bestscore = score;
            bestmove = i;
        }
    }
    return bestmove;
}
int main()
{
    printf("bot che rangi bashe : ");
    char start;
    scanf("%c",&start);
    if(start == 'r')
    {
        struct position board;
        for(int i = 0;i<=6;i++)
        {
            board.y0[i] = 'O';
            board.y1[i] = 'O';
            board.y2[i] = 'O';
            board.y3[i] = 'O';
            board.y4[i] = 'O';
            board.y5[i] = 'O';
            board.y6[i] = 'O';
        }
        printboard(board);
        while(1)
        {
            int harekatharif;
            scanf("%d",&harekatharif);
            board = domove(harekatharif,board,'b');
            printboard(board);
            int harekatma = findbestmove(board,'r');
            printf("%d ",harekatma);
            printf("\n");
            board = domove(harekatma,board,'r');
            printboard(board);
        }
    }
    if(start == 'b')
    {
        struct position board;
        for(int i = 0;i<=6;i++)
        {
            board.y0[i] = 'O';
            board.y1[i] = 'O';
            board.y2[i] = 'O';
            board.y3[i] = 'O';
            board.y4[i] = 'O';
            board.y5[i] = 'O';
            board.y6[i] = 'O';
        }
        printboard(board);
        while(1)
        {
            int harektma = findbestmove(board,'b');
            printf("%d ",harektma);
            printf("\n");
            board = domove(harektma,board,'b');
            printboard(board);
            int harekatharif;
            scanf("%d",&harekatharif);
            board = domove(harekatharif,board,'r');
            printboard(board);
        }
    }
    return 0;
}
