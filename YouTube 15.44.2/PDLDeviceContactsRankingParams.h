//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GPBInt32ObjectDictionary;

@interface PDLDeviceContactsRankingParams : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBInt32ObjectDictionary *boolFeatures; // @dynamic boolFeatures;
@property(readonly, nonatomic) unsigned long long boolFeatures_Count; // @dynamic boolFeatures_Count;
@property(retain, nonatomic) GPBInt32ObjectDictionary *intFeatures; // @dynamic intFeatures;
@property(readonly, nonatomic) unsigned long long intFeatures_Count; // @dynamic intFeatures_Count;

@end

