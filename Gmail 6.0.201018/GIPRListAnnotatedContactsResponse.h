//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GIPRPageSelection, NSMutableArray;

@interface GIPRListAnnotatedContactsResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPageSelection; // @dynamic hasPageSelection;
@property(retain, nonatomic) GIPRPageSelection *pageSelection; // @dynamic pageSelection;
@property(retain, nonatomic) NSMutableArray *personArray; // @dynamic personArray;
@property(readonly, nonatomic) unsigned long long personArray_Count; // @dynamic personArray_Count;

@end
