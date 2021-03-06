//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMAdsConfig, IMRootConfig, IMSignalsConfig, IMTelemetryConfigs;

@interface IMConfigGroup : NSObject
{
    IMRootConfig *_rootConfig;
    IMTelemetryConfigs *_telemetryConfig;
    IMAdsConfig *_adsConfig;
    IMSignalsConfig *_signalsConfig;
}

@property(retain) IMSignalsConfig *signalsConfig; // @synthesize signalsConfig=_signalsConfig;
@property(retain) IMAdsConfig *adsConfig; // @synthesize adsConfig=_adsConfig;
@property(retain) IMTelemetryConfigs *telemetryConfig; // @synthesize telemetryConfig=_telemetryConfig;
@property(retain) IMRootConfig *rootConfig; // @synthesize rootConfig=_rootConfig;
- (void).cxx_destruct;
- (id)init;

@end

