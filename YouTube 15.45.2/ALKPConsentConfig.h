//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSMutableDictionary;

@interface ALKPConsentConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableDictionary *capabilityScopesMap; // @dynamic capabilityScopesMap;
@property(readonly, nonatomic) unsigned long long capabilityScopesMap_Count; // @dynamic capabilityScopesMap_Count;
@property(retain, nonatomic) NSMutableArray *defaultCapabilityIdsArray; // @dynamic defaultCapabilityIdsArray;
@property(readonly, nonatomic) unsigned long long defaultCapabilityIdsArray_Count; // @dynamic defaultCapabilityIdsArray_Count;

@end

