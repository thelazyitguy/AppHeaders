//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, YTIRenderer, YTIResponseContext;

@interface YTILiveChatVerifyMessageResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *chatDetails; // @dynamic chatDetails;
@property(retain, nonatomic) YTIRenderer *errorMessage; // @dynamic errorMessage;
@property(nonatomic) _Bool hasChatDetails; // @dynamic hasChatDetails;
@property(nonatomic) _Bool hasErrorMessage; // @dynamic hasErrorMessage;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(nonatomic) _Bool hasSerializedTransactionFlowLoggingParams; // @dynamic hasSerializedTransactionFlowLoggingParams;
@property(nonatomic) _Bool hasVerified; // @dynamic hasVerified;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;
@property(copy, nonatomic) NSData *serializedTransactionFlowLoggingParams; // @dynamic serializedTransactionFlowLoggingParams;
@property(nonatomic) _Bool verified; // @dynamic verified;

@end

