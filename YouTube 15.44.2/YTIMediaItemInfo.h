//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTICommand;

@interface YTIMediaItemInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int browseInfoOneOfCase; // @dynamic browseInfoOneOfCase;
@property(retain, nonatomic) YTICommand *command; // @dynamic command;
@property(nonatomic) int containerType; // @dynamic containerType;
@property(nonatomic) _Bool hasCommand; // @dynamic hasCommand;
@property(nonatomic) _Bool hasContainerType; // @dynamic hasContainerType;
@property(nonatomic) int localContainerType; // @dynamic localContainerType;
@property(copy, nonatomic) NSString *serverId; // @dynamic serverId;

@end

