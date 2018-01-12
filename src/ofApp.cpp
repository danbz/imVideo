#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    
    ofDisableAlphaBlending();
    ofEnableDepthTest();
    light.enable();
    light.setPosition(ofVec3f(100,100,200));
    light.lookAt(ofVec3f(0,0,-10));
    
    ofDisableArbTex();
    //ofLoadImage(movTex,"360colour.jpg");
    sphere.setResolution(70);
    sphere.rotate(-90, 1, 0, 0);
    ofLoadImage(mapTex,"wanchai-map.png");
    video.load( "360movie.mp4" ); //Load the video file
    video.play(); //Start the video
    ofBackground(0);
    ofSetHexColor(0xffffff);
    glPointSize(10);
    //cout << "sphere radius" << sphere.getRadius();
    map.setPosition(0, 0, -19);
    map.rotate(180, 1, 0, 0);
    map.setWidth(map.getWidth()*4);
    map.setHeight(map.getHeight()*4);
    
    
    walkPath.curveTo(350, 100, 1);
    walkPath.curveTo(350, 100, 1);
    walkPath.curveTo(400, 150, 10);
    walkPath.curveTo(450, 100, 20);
    walkPath.curveTo(500, 150, 30);
    walkPath.curveTo(550, 100, 40);
    walkPath.curveTo(550, 100, 40);
    pathPct=1;
  
}

//--------------------------------------------------------------
void ofApp::update(){
    //update video
    video.update();
    if(video.isFrameNew()){
        movTex.loadData(video.getPixels());
    }
    
    pathPct++;
    if (pathPct > 100) {
        pathPct = 1;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    cam.begin();
//    mapTex.bind();
//    map.draw();
//    mapTex.unbind();
    
    movTex.bind();
    // sphere.setMode(OF_PRIMITIVE_POINTS);
    // sphere.draw();
    // glPointSize(8);
    
    ofVec3f pt = walkPath.getPointAtPercent(pathPct / 100.0);
    sphere.setPosition(pt);
    //cout << pt << endl;
    sphere.drawVertices();
    sphere.drawWireframe();
    movTex.unbind();
    cam.end();
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch (key) {
        case 'f':
            ofToggleFullscreen();
            break;
            
        default:
            break;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
