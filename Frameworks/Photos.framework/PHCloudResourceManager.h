/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHCloudResourceManager : NSObject {
    int  _currentRequestID;
    int  _notifyToken;
    NSOperationQueue * _operationQueue;
    NSMutableDictionary * _requestsById;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

+ (id)defaultManager;

- (void).cxx_destruct;
- (void)_synchronized:(id /* block */)arg1;
- (void)_updateCloudResourceDownloadStatesForConnectionLost:(BOOL)arg1;
- (void)_updateCloudResourceDownloadStatesOnConnectionLostNotification:(id)arg1;
- (void)_updateCloudResourceDownloadStatesOnStatusDidChangeNotification;
- (void)cancelRequest:(int)arg1;
- (void)dealloc;
- (id)init;
- (int)requestCloudResourceType:(unsigned int)arg1 forAssetWithObjectID:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;

@end