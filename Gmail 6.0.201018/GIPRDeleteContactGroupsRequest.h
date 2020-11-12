//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GIPRPeopleContext, NSMutableArray, SGAPContactDeletionContext;

@interface GIPRDeleteContactGroupsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GIPRPeopleContext *context; // @dynamic context;
@property(nonatomic) _Bool deleteContacts; // @dynamic deleteContacts;
@property(retain, nonatomic) SGAPContactDeletionContext *deletionContext; // @dynamic deletionContext;
@property(retain, nonatomic) NSMutableArray *groupIdArray; // @dynamic groupIdArray;
@property(readonly, nonatomic) unsigned long long groupIdArray_Count; // @dynamic groupIdArray_Count;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasDeletionContext; // @dynamic hasDeletionContext;

@end
