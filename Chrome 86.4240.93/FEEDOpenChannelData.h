//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GPBMessage.h>

@class DCHChannel, FEEDToken, NSString;

@interface FEEDOpenChannelData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) DCHChannel *channel; // @dynamic channel;
@property(readonly, nonatomic) int channelRequestMakerOneOfCase; // @dynamic channelRequestMakerOneOfCase;
@property(retain, nonatomic) FEEDToken *channelToken; // @dynamic channelToken;
@property(nonatomic) _Bool hasUiType; // @dynamic hasUiType;
@property(nonatomic) _Bool hasUseMainFeedClearcutEvents; // @dynamic hasUseMainFeedClearcutEvents;
@property(nonatomic) int uiType; // @dynamic uiType;
@property(nonatomic) _Bool useMainFeedClearcutEvents; // @dynamic useMainFeedClearcutEvents;
@property(copy, nonatomic) NSString *webviewURL; // @dynamic webviewURL;

@end
