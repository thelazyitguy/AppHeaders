//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GPBInt64Array, NSString;

@interface YTIUnpluggedInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIsPrefetchedResponse; // @dynamic hasIsPrefetchedResponse;
@property(nonatomic) _Bool hasQuery; // @dynamic hasQuery;
@property(nonatomic) _Bool hasUpgChipIdsString; // @dynamic hasUpgChipIdsString;
@property(nonatomic) _Bool hasUpgVoiceActionString; // @dynamic hasUpgVoiceActionString;
@property(nonatomic) _Bool hasVideoStreamType; // @dynamic hasVideoStreamType;
@property(nonatomic) _Bool isPrefetchedResponse; // @dynamic isPrefetchedResponse;
@property(copy, nonatomic) NSString *query; // @dynamic query;
@property(retain, nonatomic) GPBInt64Array *upgChipIdsArray; // @dynamic upgChipIdsArray;
@property(readonly, nonatomic) unsigned long long upgChipIdsArray_Count; // @dynamic upgChipIdsArray_Count;
@property(copy, nonatomic) NSString *upgChipIdsString; // @dynamic upgChipIdsString;
@property(copy, nonatomic) NSString *upgVoiceActionString; // @dynamic upgVoiceActionString;
@property(nonatomic) int videoStreamType; // @dynamic videoStreamType;

@end

