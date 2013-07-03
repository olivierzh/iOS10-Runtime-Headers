/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VGLContext, NSMutableArray;

@interface VGLTexturePool : NSObject  {
    struct CGSize { 
        float width; 
        float height; 
    } _contentSize;
    struct CGSize { 
        float width; 
        float height; 
    } _textureSize;
    VGLContext *_context;
    NSMutableArray *_textureResources;
}


- (void)allocateTextureResource;
- (void)pushTextureResource:(id)arg1;
- (id)checkoutTexture;
- (id)initWithCapacity:(int)arg1 textureSize:(struct CGSize { float x1; float x2; })arg2 scale:(int)arg3 context:(id)arg4;
- (void)purge;
- (void)dealloc;
- (id).cxx_construct;

@end