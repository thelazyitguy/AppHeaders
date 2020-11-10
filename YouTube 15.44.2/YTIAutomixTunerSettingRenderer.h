//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, YTIAutomixTunerSettingSupportedContinuations, YTIFormattedString;

@interface YTIAutomixTunerSettingRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAutomixTunerSettingSupportedContinuations *continuation; // @dynamic continuation;
@property(nonatomic) _Bool hasContinuation; // @dynamic hasContinuation;
@property(nonatomic) _Bool hasSettingLabel; // @dynamic hasSettingLabel;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIFormattedString *settingLabel; // @dynamic settingLabel;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) NSMutableArray *tunerImagesArray; // @dynamic tunerImagesArray;
@property(readonly, nonatomic) unsigned long long tunerImagesArray_Count; // @dynamic tunerImagesArray_Count;

@end

