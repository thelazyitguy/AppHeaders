//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIInvalidationId, YTIInvalidationPayloadSupportedRenderers;

@interface YTIInvalidation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasInvalidationId; // @dynamic hasInvalidationId;
@property(nonatomic) _Bool hasInvalidationPayloadSupportedRenderers; // @dynamic hasInvalidationPayloadSupportedRenderers;
@property(retain, nonatomic) YTIInvalidationId *invalidationId; // @dynamic invalidationId;
@property(retain, nonatomic) YTIInvalidationPayloadSupportedRenderers *invalidationPayloadSupportedRenderers; // @dynamic invalidationPayloadSupportedRenderers;

@end

