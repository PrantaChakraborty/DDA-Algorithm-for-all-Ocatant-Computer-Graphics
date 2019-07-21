#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>

float Color1=1.0, Color2=1.0, Color3=1.0;
int r,p,q;

int Round(float a)			//any x i.e 1>=x>=0.5 is rounded to 1
{
    if(a-int(a)>=0.5)
        return int(a)+1;
    else
        return int(a);
}
void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 27:             // ESCAPE key
        exit (0);
        break;

    case 'r':
        Color1=1.0, Color2=0.0, Color3=0.0;
        break;
    case 'g':
        Color1=0.0, Color2=1.0, Color3=0.0;
        break;
    case 'b':
        Color1=0.0, Color2=0.0, Color3=1.0;
        break;
    }
    glutPostRedisplay();

}
void FirstOctant()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPointSize(1);
    glColor3f(Color1,Color2, Color3);
    int x1=20,x2=50,y1=15, y2=30,i;
    double dx,dy;
    dx=x2-x1;
    dy=y2-y1;
    int x;
    double y=y1;

    double m=(dy/dx);
    glBegin(GL_POINTS);
    for( i=-320; i<=320; i++)
    glVertex2f(i,0);
    //y axis
    for( i=-240; i<=240; i++)
        glVertex2f(0,i);
    for (i=0;i<400;i++)
    {
        glVertex2f(i,i);
        glVertex2f(-i,i);
        glVertex2f(-i,-i);
        glVertex2f(i,-i);
    }
    glEnd();
    glBegin(GL_POINTS);
    for(x=x1; x<=x2;x++)
    {
        glVertex2f(x,Round(y));
        y+=m;
    }
    glEnd();
    glFlush();
}
void SecondOctant()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPointSize(1);
    glColor3f(Color1,Color2, Color3);
    int x1=10,y1=20,x2=30, y2=100,i;
    double dx,dy;
    dx=x2-x1;
    dy=y2-y1;
    int y;
    double x=x1;

    double m=(dy/dx);
    glBegin(GL_POINTS);
    for( i=-320; i<=320; i++)
    glVertex2f(i,0);
    //y axis
    for( i=-240; i<=240; i++)
        glVertex2f(0,i);
    for (i=0;i<400;i++)
    {
        glVertex2f(i,i);
        glVertex2f(-i,i);
        glVertex2f(-i,-i);
        glVertex2f(i,-i);
    }
    glEnd();
    glBegin(GL_POINTS);
    for(y=y1; y<=y2;y++)
    {
        glVertex2f(Round(x),y);
        x+=(1/m);
    }
    glEnd();
    glFlush();
}
void ThirdOctant()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPointSize(1);
    glColor3f(Color1,Color2, Color3);
    int x1=-10,y1=20,x2=-30, y2=100,i;
    double dx,dy;
    dx=x2-x1;
    dy=y2-y1;
    int y;
    double x=x1;

    double m=(dy/dx);
    glBegin(GL_POINTS);
    for( i=-320; i<=320; i++)
    glVertex2f(i,0);
    //y axis
    for( i=-240; i<=240; i++)
        glVertex2f(0,i);
    for (i=0;i<400;i++)
    {
        glVertex2f(i,i);
        glVertex2f(-i,i);
        glVertex2f(-i,-i);
        glVertex2f(i,-i);
    }
    glEnd();
    glBegin(GL_POINTS);
    for(y=y1; y<=y2;y++)
    {
        glVertex2f(Round(x),y);
        x+=(1/m);
    }
    glEnd();
    glFlush();
}
void FourthOctant()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPointSize(1);
    glColor3f(Color1,Color2, Color3);
    int x1=-30,y1=15,x2=-120, y2=100,i;
    double dx,dy;
    dx=x2-x1;
    dy=y2-y1;
    int x;
    double y=y1;

    double m=(dy/dx);
    glBegin(GL_POINTS);
    for( i=-320; i<=320; i++)
    glVertex2f(i,0);
    //y axis
    for( i=-240; i<=240; i++)
        glVertex2f(0,i);
    for (i=0;i<400;i++)
    {
        glVertex2f(i,i);
        glVertex2f(-i,i);
        glVertex2f(-i,-i);
        glVertex2f(i,-i);
    }
    glEnd();
    glBegin(GL_POINTS);
    for(x=x1; x>=x2;x--)
    {
        glVertex2f(x,Round(y));
        y-=m;
    }
    glEnd();
    glFlush();
}
void FifthOctant()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPointSize(1);
    glColor3f(Color1,Color2, Color3);
    int x1=-30,y1=-15,x2=-120, y2=-100,i;
    double dx,dy;
    dx=x2-x1;
    dy=y2-y1;
    int x;
    double y=y1;

    double m=(dy/dx);
    glBegin(GL_POINTS);
    for( i=-320; i<=320; i++)
    glVertex2f(i,0);
    //y axis
    for( i=-240; i<=240; i++)
        glVertex2f(0,i);
    for (i=0;i<400;i++)
    {
        glVertex2f(i,i);
        glVertex2f(-i,i);
        glVertex2f(-i,-i);
        glVertex2f(i,-i);
    }
    glEnd();
    glBegin(GL_POINTS);
    for(x=x1; x>=x2;x--)
    {
        glVertex2f(x,Round(y));
        y-=m;
    }
    glEnd();
    glFlush();
}
void SixthOctant()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPointSize(1);
    glColor3f(Color1,Color2, Color3);
    int x1=-10,y1=-20,x2=-30, y2=-100,i;
    double dx,dy;
    dx=x2-x1;
    dy=y2-y1;
    int y;
    double x=x1;

    double m=(dy/dx);
    glBegin(GL_POINTS);
    for( i=-320; i<=320; i++)
    glVertex2f(i,0);
    //y axis
    for( i=-240; i<=240; i++)
        glVertex2f(0,i);
    for (i=0;i<400;i++)
    {
        glVertex2f(i,i);
        glVertex2f(-i,i);
        glVertex2f(-i,-i);
        glVertex2f(i,-i);
    }
    glEnd();
    glBegin(GL_POINTS);
    for(y=y1; y>=y2;y--)
    {
        glVertex2f(Round(x),y);
        x-=(1/m);
    }
    glEnd();
    glFlush();
}
void SeventhOctant()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPointSize(1);
    glColor3f(Color1,Color2, Color3);
    int x1=10,y1=-20,x2=30, y2=-100,i;
    double dx,dy;
    dx=x2-x1;
    dy=y2-y1;
    int y;
    double x=x1;

    double m=(dy/dx);
    glBegin(GL_POINTS);
    for( i=-320; i<=320; i++)
    glVertex2f(i,0);
    //y axis
    for( i=-240; i<=240; i++)
        glVertex2f(0,i);
    for (i=0;i<400;i++)
    {
        glVertex2f(i,i);
        glVertex2f(-i,i);
        glVertex2f(-i,-i);
        glVertex2f(i,-i);
    }
    glEnd();
    glBegin(GL_POINTS);
    for(y=y1; y>=y2;y--)
    {
        glVertex2f(Round(x),y);
        x-=(1/m);
    }
    glEnd();
    glFlush();
}
void EightOctant()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPointSize(1);
    glColor3f(Color1,Color2, Color3);
    int x1=40,y1=-20,x2=100, y2=-60,i;
    double dx,dy;
    dx=x2-x1;
    dy=y2-y1;
    int x;
    double y=y1;

    double m=(dy/dx);
    glBegin(GL_POINTS);
    for( i=-320; i<=320; i++)
    glVertex2f(i,0);
    //y axis
    for( i=-240; i<=240; i++)
        glVertex2f(0,i);
    for (i=0;i<400;i++)
    {
        glVertex2f(i,i);
        glVertex2f(-i,i);
        glVertex2f(-i,-i);
        glVertex2f(i,-i);
    }
    glEnd();
    glBegin(GL_POINTS);
    for(x=x1; x<=x2;x++)
    {
        glVertex2f(x,Round(y));
        y+=m;
    }
    glEnd();
    glFlush();
}


void Init(int w, int h)
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glViewport(0,0, (GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D( (GLdouble)w/-2,(GLdouble)w/2, (GLdouble)h/-2, (GLdouble)h/2);

}



int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB);

    glutCreateWindow("Polygon drawing");

    Init(640, 480);

    int x1,y1,x2,y2;
    double m,dx,dy;
    printf("Enter value of x1:");
    scanf("%d",&x1);
    printf("Enter value of y1:");
    scanf("%d",&y1);
    printf("Enter value of x2:");
    scanf("%d",&x2);
    printf("Enter value of y2:");
    scanf("%d",&y2);
    dx=x2-x1;
    dy=y2-y1;
    m=(dy/dx);
    //printf("%lf",m);

    if(m>0)
    {
        if(x1>0 && y1>0)
        {
            if(m<1)
            {
                //first octant
                glutDisplayFunc(FirstOctant);
            }
            else
            {
                //second octant
                glutDisplayFunc(SecondOctant);
            }
        }
        else if(x1<0 && y1<0)
        {
            if(m<1)
            {
                //fifth octant
                glutDisplayFunc(FifthOctant);
            }
            else
            {
                //sixth octant
                glutDisplayFunc(SixthOctant);

            }
        }

    }
    else
    {
        if(x1<0 && y1>0)
        {
            if(m<-1)
            {
                //third octant
                glutDisplayFunc(ThirdOctant);
            }
            else
            {
                //forth
                glutDisplayFunc(FourthOctant);
            }
        }
        else
        {
            if(m<-1)
            {
                //seventh
                glutDisplayFunc(SeventhOctant);
            }
            else
            {
                //eigth
                glutDisplayFunc(EightOctant);
            }
        }

    }


     glutKeyboardFunc(keyboard);
//    glutDisplayFunc(display);


    glutMainLoop();

    return 0;
}



