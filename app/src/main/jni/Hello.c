#include<stdio.h>
#include<jni.h>
jstring Java_com_example_myapp_MainActivity_helloFromC(JNIEnv* env,jobject obj){
  return (*(*env)).NewStringUTF(env,"Hello from c!");
}