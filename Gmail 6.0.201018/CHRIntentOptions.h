//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@interface CHRIntentOptions : NSObject <NSSecureCoding>
{
    int _addressAnnotations;
    int _dateAnnotations;
    int _phoneNumberAnnotations;
    int _transitAnnotations;
    int _musicAnnotations;
    int _reminderAnnotations;
}

+ (id)supportedPropertyDictionary;
+ (unsigned long long)numberOfSupportedTypes;
+ (id)allOptionsAvailable;
+ (id)allOptionsEnabled;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) int reminderAnnotations; // @synthesize reminderAnnotations=_reminderAnnotations;
@property(nonatomic) int musicAnnotations; // @synthesize musicAnnotations=_musicAnnotations;
@property(nonatomic) int transitAnnotations; // @synthesize transitAnnotations=_transitAnnotations;
@property(nonatomic) int phoneNumberAnnotations; // @synthesize phoneNumberAnnotations=_phoneNumberAnnotations;
@property(nonatomic) int dateAnnotations; // @synthesize dateAnnotations=_dateAnnotations;
@property(nonatomic) int addressAnnotations; // @synthesize addressAnnotations=_addressAnnotations;
- (void)mergeOptionPropertyWithName:(id)arg1 options:(id)arg2;
- (id)arrayWithTypesSatisfyingBlock:(CDUnknownBlockType)arg1;
- (void)mergeWithOptions:(id)arg1;
- (_Bool)isOptionAvailable:(int)arg1;
- (_Bool)isOptionEnabled:(int)arg1;
- (id)enabledTypesArray;
- (id)availableTypesArray;
- (unsigned long long)availableAnnotationTypes;
- (unsigned long long)enabledAnnotationTypes;
- (unsigned long long)numOptionsAvailable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
