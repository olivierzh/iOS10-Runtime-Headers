/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@class NSArray;

@interface AVAudioUnitEQ : AVAudioUnitEffect  {
}

@property(readonly) NSArray * bands;
@property float globalGain;


- (void)setGlobalGain:(float)arg1;
- (float)globalGain;
- (id)bands;
- (id)initWithNumberOfBands:(unsigned long long)arg1;
- (id)init;

@end