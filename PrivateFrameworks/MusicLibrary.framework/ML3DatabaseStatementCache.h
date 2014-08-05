/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSMutableDictionary, ML3StatementCacheList;

@interface ML3DatabaseStatementCache : NSObject  {
    NSMutableDictionary *_statementsDictionary;
    ML3StatementCacheList *_nodeList;
    unsigned long long _cacheSize;
}

@property(readonly) unsigned long long cacheSize;


- (unsigned long long)cacheSize;
- (void)cacheStatement:(id)arg1;
- (id)allStatements;
- (id)cachedStatementForSQL:(id)arg1;
- (id)initWithCacheSize:(unsigned long long)arg1;
- (void)clearCache;
- (void)dealloc;
- (void).cxx_destruct;

@end