//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, NSString, YTIFormattedString;

@interface YTIUnpluggedBillingDetailsRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *additionalInfo; // @dynamic additionalInfo;
@property(copy, nonatomic) NSString *billId; // @dynamic billId;
@property(nonatomic) _Bool hasAdditionalInfo; // @dynamic hasAdditionalInfo;
@property(nonatomic) _Bool hasBillId; // @dynamic hasBillId;
@property(nonatomic) _Bool hasTaxLabel; // @dynamic hasTaxLabel;
@property(nonatomic) _Bool hasTaxValue; // @dynamic hasTaxValue;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTotalLabel; // @dynamic hasTotalLabel;
@property(nonatomic) _Bool hasTotalValue; // @dynamic hasTotalValue;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) NSMutableArray *itemsArray; // @dynamic itemsArray;
@property(readonly, nonatomic) unsigned long long itemsArray_Count; // @dynamic itemsArray_Count;
@property(retain, nonatomic) NSMutableArray *taxItemsArray; // @dynamic taxItemsArray;
@property(readonly, nonatomic) unsigned long long taxItemsArray_Count; // @dynamic taxItemsArray_Count;
@property(retain, nonatomic) YTIFormattedString *taxLabel; // @dynamic taxLabel;
@property(retain, nonatomic) YTIFormattedString *taxValue; // @dynamic taxValue;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(retain, nonatomic) YTIFormattedString *totalLabel; // @dynamic totalLabel;
@property(retain, nonatomic) YTIFormattedString *totalValue; // @dynamic totalValue;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end
