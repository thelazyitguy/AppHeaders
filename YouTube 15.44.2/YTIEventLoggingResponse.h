//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString, YTIResponseContext;

@interface YTIEventLoggingResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(nonatomic) _Bool hasSerializedEventId; // @dynamic hasSerializedEventId;
@property(retain, nonatomic) NSMutableArray *payloadOverridesArray; // @dynamic payloadOverridesArray;
@property(readonly, nonatomic) unsigned long long payloadOverridesArray_Count; // @dynamic payloadOverridesArray_Count;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;
@property(copy, nonatomic) NSString *serializedEventId; // @dynamic serializedEventId;

@end

