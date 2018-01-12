#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    
    ofDisableAlphaBlending();
    ofEnableDepthTest();
    //light.enable();
    light.setPosition(ofVec3f(100,100,200));
    light.lookAt(ofVec3f(0,0,0));
    
    ofDisableArbTex();
    //ofLoadImage(mTex,"360colour.jpg");
    sphere.setResolution(70);
    
    video.load( "360movie.mp4" ); //Load the video file
    video.play(); //Start the video
    ofBackground(0);
    ofSetHexColor(0xffffff);
     glPointSize(10);


}

//--------------------------------------------------------------
void ofApp::update(){
    //update video
    video.update();
    if(video.isFrameNew()){
        mTex.loadData(video.getPixels());
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
      // video.draw(0, 0);
    cam.begin();
    mTex.bind();
    //sphere.setMode(OF_PRIMITIVE_POINTS);

   // sphere.draw();
    // glPointSize(8);
    sphere.drawVertices();
    sphere.drawWireframe();
    mTex.unbind();
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
