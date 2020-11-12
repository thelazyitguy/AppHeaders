//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VVJSONSchemaValidation/VVJSONSchemaValidator-Protocol.h>

@class NSRegularExpression, NSString;

@interface VVJSONSchemaStringValidator : NSObject <VVJSONSchemaValidator>
{
    unsigned long long _maximumLength;
    unsigned long long _minimumLength;
    NSRegularExpression *_regularExpression;
}

+ (_Bool)validateSchemaFormat:(id)arg1;
+ (id)validatorWithDictionary:(id)arg1 schemaFactory:(id)arg2 error:(id *)arg3;
+ (id)assignedKeywords;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSRegularExpression *regularExpression; // @synthesize regularExpression=_regularExpression;
@property(readonly, nonatomic) unsigned long long minimumLength; // @synthesize minimumLength=_minimumLength;
@property(readonly, nonatomic) unsigned long long maximumLength; // @synthesize maximumLength=_maximumLength;
- (_Bool)validateInstance:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
- (id)subschemas;
@property(readonly, copy) NSString *description;
- (id)initWithMaximumLength:(unsigned long long)arg1 minimumLength:(unsigned long long)arg2 regularExpression:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
