#ifndef USER_INPUTS_H
#define USER_INPUTS_H

//******************************************************************************
// Includes
#include "global.hpp"
//#include "lbph.hpp"
//******************************************************************************

//******************************************************************************
//Functions
void user_predict (Mat&);
void user_train ( int, vector<Mat>&, vector<int>&, int);

//******************************************************************************

//******************************************************************************
//Globals

extern Ptr<FaceRecognizer> model_eigen;
extern CascadeClassifier face_cascade;
extern CascadeClassifier eye_cascade;
//******************************************************************************
#endif
