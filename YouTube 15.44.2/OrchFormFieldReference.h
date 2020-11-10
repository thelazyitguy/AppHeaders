//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString;

@interface OrchFormFieldReference : GPBMessage
{
}

+ (id)descriptor;
+ (id)messageWithFormId:(id)arg1 fieldId:(int)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

// Remaining properties
@property(nonatomic) int fieldId; // @dynamic fieldId;
@property(copy, nonatomic) NSString *formId; // @dynamic formId;
@property(nonatomic) _Bool hasFieldId; // @dynamic hasFieldId;
@property(nonatomic) _Bool hasFormId; // @dynamic hasFormId;
@property(nonatomic) _Bool hasRepeatedFieldIndex; // @dynamic hasRepeatedFieldIndex;
@property(nonatomic) int repeatedFieldIndex; // @dynamic repeatedFieldIndex;

@end

