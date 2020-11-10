//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class DrishtiCalculatorGraphConfig, NSString, XNOAssetRegistryProto, XNOGraphInputConfigProto;

@interface XNOEffectProto : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) XNOAssetRegistryProto *assets; // @dynamic assets;
@property(retain, nonatomic) DrishtiCalculatorGraphConfig *graph; // @dynamic graph;
@property(nonatomic) _Bool hasAssets; // @dynamic hasAssets;
@property(nonatomic) _Bool hasGraph; // @dynamic hasGraph;
@property(nonatomic) _Bool hasInputFrameStreamName; // @dynamic hasInputFrameStreamName;
@property(nonatomic) _Bool hasInputs; // @dynamic hasInputs;
@property(nonatomic) _Bool hasMaxFramesInFlight; // @dynamic hasMaxFramesInFlight;
@property(nonatomic) _Bool hasOutputFrameStreamName; // @dynamic hasOutputFrameStreamName;
@property(copy, nonatomic) NSString *inputFrameStreamName; // @dynamic inputFrameStreamName;
@property(retain, nonatomic) XNOGraphInputConfigProto *inputs; // @dynamic inputs;
@property(nonatomic) int maxFramesInFlight; // @dynamic maxFramesInFlight;
@property(copy, nonatomic) NSString *outputFrameStreamName; // @dynamic outputFrameStreamName;

@end

