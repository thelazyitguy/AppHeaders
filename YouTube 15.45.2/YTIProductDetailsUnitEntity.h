//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GPBEnumArray, NSData, NSString;

@interface YTIProductDetailsUnitEntity : GPBMessage
{
}

+ (id)descriptor;
+ (Class)entityClass;
- (id)entityWithStore:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool hasKey; // @dynamic hasKey;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(copy, nonatomic) NSString *key; // @dynamic key;
@property(retain, nonatomic) GPBEnumArray *primaryPurchaseButtonTraitsArray; // @dynamic primaryPurchaseButtonTraitsArray;
@property(readonly, nonatomic) unsigned long long primaryPurchaseButtonTraitsArray_Count; // @dynamic primaryPurchaseButtonTraitsArray_Count;
@property(retain, nonatomic) GPBEnumArray *secondaryPurchaseButtonTraitsArray; // @dynamic secondaryPurchaseButtonTraitsArray;
@property(readonly, nonatomic) unsigned long long secondaryPurchaseButtonTraitsArray_Count; // @dynamic secondaryPurchaseButtonTraitsArray_Count;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

