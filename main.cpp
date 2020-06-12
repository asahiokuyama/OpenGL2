//
//  main.cpp
//  ex2_0516
//
//  Created by Asahi Okuyama on 2020/05/16.
//  Copyright © 2020 Asahi okuyama. All rights reserved.
//

#include <iostream>
#include <chrono>
#include <thread>
#include <unistd.h>
#include <OpenGL/OpenGL.h>
#include <GLUT/GLUT.h>


void display(){
    
    float j,k,j2,k2;
    j = 1.0;
    j2 = -1.0;
    
    k = -0.9;
    k2 = 0.9;
    
    glClearColor(0, 0, 0, 1.0);       //set backgroundcolor
    glClear(GL_COLOR_BUFFER_BIT);           //setup background
                   
    //left side
    for(float i = 1.0;i > -1.0;i = i-0.05){
        glBegin(GL_POLYGON);
        
        glColor3f(i, 0, 0);
        glVertex2f(-1.0, j);
        glVertex2f(-1.0, -1.0);
        glVertex2f(k, -1.0);
        
        j = j - 0.1;
        k = k + 0.1;
        
        glEnd();
        
        glFlush();
    }

    //right side
    for(float i = 1.0;i > -1.0;i = i-0.05){
        glBegin(GL_POLYGON);
        
        glColor3f(i, 0, 0);
        glVertex2f(1.0, j2);
        glVertex2f(1.0, 1.0);
        glVertex2f(k2, 1.0);
        
        j2 = j2 + 0.1;
        k2 = k2 - 0.1;
        
        glEnd();
        glFlush();

    }

    
}



int main(int argc, char ** argv) {
   
    glutInit(&argc, argv);             //Initialize glut
    glutInitDisplayMode(GLUT_SINGLE);  //single buffer
    glutInitWindowSize(500, 500);      //set window and height
    glutCreateWindow("Hello Open GL");
    glutDisplayFunc(display);
    glutMainLoop();
    
    return 0;
}
