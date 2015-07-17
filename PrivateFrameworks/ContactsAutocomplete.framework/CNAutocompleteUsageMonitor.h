/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteUsageMonitor : NSObject {
    <CNAutocompleteProbeProvider> * _probeProvider;
}

@property (nonatomic, readonly) <CNAutocompleteProbeProvider> *probeProvider;

+ (void)userIgnoredResultsForRequest:(id)arg1 afterDelay:(double)arg2;
+ (void)userSelectedResult:(id)arg1 atSortedIndex:(unsigned int)arg2 forRequest:(id)arg3;

- (void).cxx_destruct;
- (id)init;
- (id)initWithProbeProvider:(id)arg1;
- (id)probeProvider;
- (void)userIgnoredResultsOfBatch:(unsigned int)arg1 forRequest:(id)arg2 afterDelay:(double)arg3;
- (void)userSawResultsOfBatch:(unsigned int)arg1 forRequest:(id)arg2;
- (void)userSelectedResult:(id)arg1 atSortedIndex:(unsigned int)arg2 forRequest:(id)arg3;

@end