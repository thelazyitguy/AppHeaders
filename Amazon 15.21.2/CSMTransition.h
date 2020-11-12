//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSMMetadataStorage, CSMMetricPublisher, CSMTimings;
@protocol CSMAppContextProvider;

@interface CSMTransition : NSObject
{
    CSMTimings *_timings;
    CSMMetadataStorage *_metadata;
    CSMMetricPublisher *_publisher;
    id <CSMAppContextProvider> _contextProvider;
}

@property(retain) id <CSMAppContextProvider> contextProvider; // @synthesize contextProvider=_contextProvider;
@property(retain) CSMMetricPublisher *publisher; // @synthesize publisher=_publisher;
@property(retain) CSMMetadataStorage *metadata; // @synthesize metadata=_metadata;
@property(retain) CSMTimings *timings; // @synthesize timings=_timings;
- (void).cxx_destruct;
- (unsigned long long)currentTime;
- (id)sanitizePublishingInfo:(id)arg1;
- (void)stopTransition:(id)arg1;
- (void)stopTransition;
- (id)tags;
- (void)addTag:(id)arg1;
- (id)attributes;
- (id)addAttribute:(id)arg1 withValue:(id)arg2 ifNotDefined:(_Bool)arg3;
- (id)addAttribute:(id)arg1 withValue:(id)arg2;
- (id)markers;
- (unsigned long long)mark:(id)arg1 withTime:(unsigned long long)arg2 ifNotDefined:(_Bool)arg3;
- (unsigned long long)mark:(id)arg1 withTime:(unsigned long long)arg2;
- (unsigned long long)mark:(id)arg1 ifNotDefined:(_Bool)arg2;
- (unsigned long long)mark:(id)arg1;
- (id)initWithPublisher:(id)arg1 andContextProvider:(id)arg2;
- (id)init;

@end
