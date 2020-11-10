//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTEditEffectsGraphDelegate-Protocol.h>
#import <Module_Framework/YTSystemNotificationsObserver-Protocol.h>

@class GIMMe, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString, YTEditEffectsGraph, YTEditEffectsGraphSettings;
@protocol YTEditEffectThumbnailSourceDelegate;

@interface YTEditEffectThumbnailSource : NSObject <YTEditEffectsGraphDelegate, YTSystemNotificationsObserver>
{
    NSMutableDictionary *_effectIDToThumbnailDict;
    YTEditEffectsGraph *_effectsGraph;
    _Bool _isProcessingThumbnail;
    _Bool _effectsGraphRunning;
    struct __CVBuffer *_thumbnailBuffer;
    struct CGSize _thumbnailSize;
    long long _thumbnailMode;
    NSMutableOrderedSet *_queuedEffectIDs;
    NSMutableSet *_expectedEffectIDs;
    GIMMe *_gimme;
    id <YTEditEffectThumbnailSourceDelegate> _delegate;
    YTEditEffectsGraphSettings *_graphSettings;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTEditEffectsGraphSettings *graphSettings; // @synthesize graphSettings=_graphSettings;
@property(nonatomic) __weak id <YTEditEffectThumbnailSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)appMemoryPressureLevelDidChange:(unsigned long long)arg1;
- (void)effectsGraphDidStartProcessing;
- (void)effectsGraphWillStopProcessing;
- (void)effectsGraph:(id)arg1 didLoadSettings:(id)arg2;
- (void)effectsGraph:(id)arg1 didOutputVideoFrame:(struct __CVBuffer *)arg2 forEffectID:(id)arg3 timestamp:(double)arg4;
- (struct __CVBuffer *)createDummyPixelBuffer;
- (_Bool)canQueueEffectForGeneration:(id)arg1;
- (void)didGenerateThumbnail:(id)arg1 forEffectID:(id)arg2;
- (void)maybeProcessNextThumbnail;
- (void)setThumbnailImage:(id)arg1;
- (id)thumbnailForEffectID:(id)arg1;
- (void)queueThumbnailGenerationForEffectID:(id)arg1;
- (void)dealloc;
- (id)initWithThumbnailSize:(struct CGSize)arg1 thumbnailMode:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

