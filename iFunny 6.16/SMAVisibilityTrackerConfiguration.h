//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/NSCopying-Protocol.h>

@interface SMAVisibilityTrackerConfiguration : NSObject <NSCopying>
{
    _Bool _useAccumulativeTimer;
    _Bool _trackApplicationState;
    double _minVisibleAdArea;
    double _minDisplayTime;
    unsigned long long _viewHierarchySamplingFrequency;
}

+ (void)_resetToDefaults;
+ (void)_setTrackApplicationState:(_Bool)arg1;
+ (void)_setUseAccumulativeTimer:(_Bool)arg1;
+ (void)_setViewHierarchySamplingFrequency:(unsigned long long)arg1;
+ (void)_setMinVisibleAdArea:(double)arg1;
+ (void)_setMinDisplayTime:(double)arg1;
+ (id)defaultConfiguration;
@property(nonatomic) _Bool trackApplicationState; // @synthesize trackApplicationState=_trackApplicationState;
@property(nonatomic) _Bool useAccumulativeTimer; // @synthesize useAccumulativeTimer=_useAccumulativeTimer;
@property(nonatomic) unsigned long long viewHierarchySamplingFrequency; // @synthesize viewHierarchySamplingFrequency=_viewHierarchySamplingFrequency;
@property(nonatomic) double minDisplayTime; // @synthesize minDisplayTime=_minDisplayTime;
@property(nonatomic) double minVisibleAdArea; // @synthesize minVisibleAdArea=_minVisibleAdArea;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToConfiguration:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

