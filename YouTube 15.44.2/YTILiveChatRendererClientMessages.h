//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIFormattedString;

@interface YTILiveChatRendererClientMessages : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *fatalError; // @dynamic fatalError;
@property(retain, nonatomic) YTIFormattedString *genericError; // @dynamic genericError;
@property(nonatomic) _Bool hasFatalError; // @dynamic hasFatalError;
@property(nonatomic) _Bool hasGenericError; // @dynamic hasGenericError;
@property(nonatomic) _Bool hasReconnectMessage; // @dynamic hasReconnectMessage;
@property(nonatomic) _Bool hasReconnectedMessage; // @dynamic hasReconnectedMessage;
@property(nonatomic) _Bool hasUnableToReconnectMessage; // @dynamic hasUnableToReconnectMessage;
@property(retain, nonatomic) YTIFormattedString *reconnectMessage; // @dynamic reconnectMessage;
@property(retain, nonatomic) YTIFormattedString *reconnectedMessage; // @dynamic reconnectedMessage;
@property(retain, nonatomic) YTIFormattedString *unableToReconnectMessage; // @dynamic unableToReconnectMessage;

@end

