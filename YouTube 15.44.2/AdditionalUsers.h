//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray;

@interface AdditionalUsers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasAdditionalUsers; // @dynamic hasAdditionalUsers;
@property(nonatomic) _Bool hasDasherUser; // @dynamic hasDasherUser;
@property(retain, nonatomic) NSMutableArray *signedInUserIdArray; // @dynamic signedInUserIdArray;
@property(readonly, nonatomic) unsigned long long signedInUserIdArray_Count; // @dynamic signedInUserIdArray_Count;

@end

