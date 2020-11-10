//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PINRemoteImageManagerConfiguration : NSObject
{
    _Bool _shouldBlurProgressive;
    _Bool _shouldUpgradeLowQualityImages;
    float _highQualityBPSThreshold;
    float _lowQualityBPSThreshold;
    unsigned long long _maxConcurrentOperations;
    unsigned long long _maxConcurrentDownloads;
    double _estimatedRemainingTimeThreshold;
    struct CGSize _maxProgressiveRenderSize;
}

@property(nonatomic) _Bool shouldUpgradeLowQualityImages; // @synthesize shouldUpgradeLowQualityImages=_shouldUpgradeLowQualityImages;
@property(nonatomic) float lowQualityBPSThreshold; // @synthesize lowQualityBPSThreshold=_lowQualityBPSThreshold;
@property(nonatomic) float highQualityBPSThreshold; // @synthesize highQualityBPSThreshold=_highQualityBPSThreshold;
@property(nonatomic) struct CGSize maxProgressiveRenderSize; // @synthesize maxProgressiveRenderSize=_maxProgressiveRenderSize;
@property(nonatomic) _Bool shouldBlurProgressive; // @synthesize shouldBlurProgressive=_shouldBlurProgressive;
@property(nonatomic) double estimatedRemainingTimeThreshold; // @synthesize estimatedRemainingTimeThreshold=_estimatedRemainingTimeThreshold;
@property(nonatomic) unsigned long long maxConcurrentDownloads; // @synthesize maxConcurrentDownloads=_maxConcurrentDownloads;
@property(nonatomic) unsigned long long maxConcurrentOperations; // @synthesize maxConcurrentOperations=_maxConcurrentOperations;
- (id)init;

@end

