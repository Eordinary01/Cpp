#include <GL/freeglut.h>
#include <iostream>

double xm=-0.5, ym=-0.5, xM=0.5, yM=0.5;
double xa=-0.9, ya=-0.8, xb=0.8, yb=0.7;  

enum { I=0, L=1, R=2, B=4, T=8 };

int c(double x, double y) {
    int r=I;
    if(x<xm)r|=L;else if(x>xM)r|=R;
    if(y<ym)r|=B;else if(y>yM)r|=T;
    return r;
}

bool clip(double& x1, double& y1, double& x2, double& y2) {
    int c1=c(x1,y1),c2=c(x2,y2);
    while(true){
        if(!(c1|c2))return 1;
        if(c1&c2)return 0;
        int m=c1?c1:c2;
        double dx=x2-x1,dy=y2-y1,x,y;
        if(m&T){x=x1+dx*(yM-y1)/dy;y=yM;}
        else if(m&B){x=x1+dx*(ym-y1)/dy;y=ym;}
        else if(m&R){y=y1+dy*(xM-x1)/dx;x=xM;}
        else{y=y1+dy*(xm-x1)/dx;x=xm;}
        if(m==c1){x1=x;y1=y;c1=c(x1,y1);}
        else{x2=x;y2=y;c2=c(x2,y2);}
    }
}

void d() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1,1,1);
    glBegin(GL_LINE_LOOP);
    glVertex2d(xm,ym);glVertex2d(xM,ym);
    glVertex2d(xM,yM);glVertex2d(xm,yM);
    glEnd();
    glColor3f(0.6,0.6,0.6);
    glBegin(GL_LINES);
    glVertex2d(xa,ya);glVertex2d(xb,yb);
    glEnd();
    double cx1=xa,cy1=ya,cx2=xb,cy2=yb;
    if(clip(cx1,cy1,cx2,cy2)){
        glColor3f(0,1,0);
        glBegin(GL_LINES);
        glVertex2d(cx1,cy1);glVertex2d(cx2,cy2);
        glEnd();
        std::cout<<"Clipped: "<<cx1<<","<<cy1<<" to "<<cx2<<","<<cy2<<"\n";
    }
    glutSwapBuffers();
}

int main(int a,char**v) {
    glutInit(&a,v);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA);
    glutInitWindowSize(500,500);
    glutCreateWindow("Cohen-Sutherland");
    glClearColor(0,0,0,1);
    gluOrtho2D(-1,1,-1,1);
    glutDisplayFunc(d);
    glutMainLoop();
}