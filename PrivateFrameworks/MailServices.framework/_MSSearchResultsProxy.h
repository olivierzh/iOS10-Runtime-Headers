/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@class NSString, MFWeakReferenceHolder;

@interface _MSSearchResultsProxy : NSObject <MSDSearchResultsProtocol> {
    MFWeakReferenceHolder *_proxiedObject;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)searchResultsProxyForObject:(id)arg1;

- (void)foundResults:(id)arg1 error:(id)arg2;
- (void)dealloc;

@end