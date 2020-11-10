//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTICommand, YTISkAdNetworkYTParameters;

@interface YTIShowAppStorePanelCommand : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *appId; // @dynamic appId;
@property(nonatomic) _Bool enableAutoClose; // @dynamic enableAutoClose;
@property(nonatomic) _Bool hasAppId; // @dynamic hasAppId;
@property(nonatomic) _Bool hasEnableAutoClose; // @dynamic hasEnableAutoClose;
@property(nonatomic) _Bool hasPlayStoreURL; // @dynamic hasPlayStoreURL;
@property(nonatomic) _Bool hasSkAdParameters; // @dynamic hasSkAdParameters;
@property(nonatomic) _Bool hasTerminationCommand; // @dynamic hasTerminationCommand;
@property(copy, nonatomic) NSString *playStoreURL; // @dynamic playStoreURL;
@property(retain, nonatomic) YTISkAdNetworkYTParameters *skAdParameters; // @dynamic skAdParameters;
@property(retain, nonatomic) YTICommand *terminationCommand; // @dynamic terminationCommand;

@end

