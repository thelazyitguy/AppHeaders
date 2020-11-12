//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, YTIInnerTubeContext, YTILocationMetadata, YTIUploadDisclaimerBannerExtras, YTIVideoEffectsContext;

@interface YTIGetUploadVideoFormRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *clientExtrasArray; // @dynamic clientExtrasArray;
@property(readonly, nonatomic) unsigned long long clientExtrasArray_Count; // @dynamic clientExtrasArray_Count;
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(retain, nonatomic) YTIVideoEffectsContext *effectsContext; // @dynamic effectsContext;
@property(nonatomic) _Bool effectsSettingsOnly; // @dynamic effectsSettingsOnly;
@property(nonatomic) _Bool forceShortsMde; // @dynamic forceShortsMde;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasEffectsContext; // @dynamic hasEffectsContext;
@property(nonatomic) _Bool hasEffectsSettingsOnly; // @dynamic hasEffectsSettingsOnly;
@property(nonatomic) _Bool hasForceShortsMde; // @dynamic hasForceShortsMde;
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(nonatomic) _Bool hasPresetAudience; // @dynamic hasPresetAudience;
@property(nonatomic) _Bool hasPresetPrivacy; // @dynamic hasPresetPrivacy;
@property(nonatomic) _Bool hasUploadDisclaimerBannerExtras; // @dynamic hasUploadDisclaimerBannerExtras;
@property(nonatomic) _Bool hasUploadVideoType; // @dynamic hasUploadVideoType;
@property(retain, nonatomic) YTILocationMetadata *location; // @dynamic location;
@property(nonatomic) int presetAudience; // @dynamic presetAudience;
@property(nonatomic) int presetPrivacy; // @dynamic presetPrivacy;
@property(retain, nonatomic) YTIUploadDisclaimerBannerExtras *uploadDisclaimerBannerExtras; // @dynamic uploadDisclaimerBannerExtras;
@property(nonatomic) int uploadVideoType; // @dynamic uploadVideoType;

@end
