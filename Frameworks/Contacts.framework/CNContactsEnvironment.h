/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNContactsEnvironment : NSObject {
    NSURL * _baseURL;
    SGSuggestionsService * _suggestionsService;
}

@property (nonatomic, copy) NSURL *baseURL;
@property (nonatomic, retain) SGSuggestionsService *suggestionsService;
@property (nonatomic, readonly) bool useInMemoryStores;

+ (id)baseURLWithDataLocationName:(id)arg1;
+ (id)currentEnvironment;
+ (id)inMemoryURL;
+ (bool)supportsSecureCoding;
+ (id)unitTestingEnvironment;
+ (id)unitTestingEnvironmentWithDataLocationName:(id)arg1;

- (id)baseURL;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setSuggestionsService:(id)arg1;
- (id)suggestionsService;
- (bool)useInMemoryStores;

@end