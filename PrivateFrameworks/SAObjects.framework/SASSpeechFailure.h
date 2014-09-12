/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SASSpeechFailure : SABaseClientBoundCommand  {
}

@property long long errorCode;
@property int reason;
@property(copy) NSString * reasonDescription;

+ (id)speechFailureWithDictionary:(id)arg1 context:(id)arg2;
+ (id)speechFailure;

- (void)setReasonDescription:(id)arg1;
- (bool)requiresResponse;
- (id)encodedClassName;
- (id)reasonDescription;
- (void)setErrorCode:(long long)arg1;
- (long long)errorCode;
- (void)setReason:(int)arg1;
- (int)reason;
- (id)groupIdentifier;

@end