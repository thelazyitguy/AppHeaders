//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTIInnerTubeContext, YTIVideoEffectsContext;

@interface YTIReelCameraRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(retain, nonatomic) YTIVideoEffectsContext *effectsContext; // @dynamic effectsContext;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasEffectsContext; // @dynamic hasEffectsContext;
@property(nonatomic) _Bool hasParams; // @dynamic hasParams;
@property(copy, nonatomic) NSString *params; // @dynamic params;

@end

