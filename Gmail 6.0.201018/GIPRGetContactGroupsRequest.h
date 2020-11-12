//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GIPRGroupExtensionSet, GPBEnumArray, GPBFieldMask, NSMutableArray;

@interface GIPRGetContactGroupsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GIPRGroupExtensionSet *groupExtensionSet; // @dynamic groupExtensionSet;
@property(retain, nonatomic) NSMutableArray *groupIdArray; // @dynamic groupIdArray;
@property(readonly, nonatomic) unsigned long long groupIdArray_Count; // @dynamic groupIdArray_Count;
@property(nonatomic) _Bool hasGroupExtensionSet; // @dynamic hasGroupExtensionSet;
@property(nonatomic) _Bool hasRequestMask; // @dynamic hasRequestMask;
@property(nonatomic) int maxContacts; // @dynamic maxContacts;
@property(retain, nonatomic) GPBEnumArray *optionsArray; // @dynamic optionsArray;
@property(readonly, nonatomic) unsigned long long optionsArray_Count; // @dynamic optionsArray_Count;
@property(retain, nonatomic) GPBFieldMask *requestMask; // @dynamic requestMask;

@end
