/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGRecordId : NSObject <NSCopying, NSSecureCoding> {
    long long  _internalEntityId;
}

+ (id)recordIdWithInternalEntityId:(long long)arg1;
+ (id)recordIdWithNumericValue:(long long)arg1;
+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalEntityId:(long long)arg1;
- (long long)internalEntityId;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToRecordId:(id)arg1;
- (long long)numericValue;

@end