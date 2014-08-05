/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPrefsSearchListSource : CFPrefsSource  {
    struct __CFString { } *_identifier;
    struct __CFArray { } *_sourceList;
    struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; } *_searchListLock;
    boolinitialized;
}

+ (void)withSuiteSearchListForIdentifier:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2 locked:(bool)arg3 perform:(id)arg4;
+ (void)withSearchListForIdentifier:(struct __CFString { }*)arg1 container:(struct __CFString { }*)arg2 perform:(id)arg3;
+ (void)withSnapshotSearchList:(id)arg1;

- (long long)generationCountFromListOfSources:(id*)arg1 count:(long long)arg2 allowFetching:(bool)arg3;
- (void)addCompatibilitySource;
- (void)addSuiteSourceForIdentifier:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2;
- (void)addSourceForIdentifier:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2 byHost:(bool)arg3 container:(struct __CFString { }*)arg4;
- (void)addNamedVolatileSourceForIdentifier:(struct __CFString { }*)arg1;
- (void)addManagedSourceForIdentifier:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2;
- (id)initWithIdentifier:(struct __CFString { }*)arg1;
- (void)replaceSource:(id)arg1 withSource:(id)arg2;
- (void)removeSource:(id)arg1;
- (void)freeze;
- (void)addSource:(id)arg1;
- (struct __CFString { }*)domainIdentifier;
- (long long)generationCount;
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 error:(bool*)arg4;
- (id)createRequestNewContentMessageForDaemon:(bool)arg1;
- (bool)synchronize;
- (bool)alreadylocked_requestNewData;
- (struct __CFDictionary { }*)alreadylocked_copyDictionary;
- (void*)alreadylocked_copyValueForKey:(struct __CFString { }*)arg1;
- (void)unlock;
- (void)lock;
- (struct __CFArray { }*)alreadylocked_copyKeyList;
- (void)alreadylocked_setValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (void)finalize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end