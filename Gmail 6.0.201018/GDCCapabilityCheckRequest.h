//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GDCItem, NSMutableArray, NSString;

@interface GDCCapabilityCheckRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GDCItem *destination; // @dynamic destination;
@property(nonatomic) _Bool hasDestination; // @dynamic hasDestination;
@property(nonatomic) _Bool hasIgnoreParents; // @dynamic hasIgnoreParents;
@property(nonatomic) _Bool hasItem; // @dynamic hasItem;
@property(nonatomic) _Bool hasMyDriveRootId; // @dynamic hasMyDriveRootId;
@property(nonatomic) _Bool ignoreParents; // @dynamic ignoreParents;
@property(retain, nonatomic) GDCItem *item; // @dynamic item;
@property(copy, nonatomic) NSString *myDriveRootId; // @dynamic myDriveRootId;
@property(retain, nonatomic) NSMutableArray *parentsArray; // @dynamic parentsArray;
@property(readonly, nonatomic) unsigned long long parentsArray_Count; // @dynamic parentsArray_Count;

@end
