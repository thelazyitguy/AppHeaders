//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTEditDrishtiGraphDelegate-Protocol.h>
#import <Module_Framework/YTEditEffectsGraphSettingsObserver-Protocol.h>
#import <Module_Framework/YTSystemNotificationsObserver-Protocol.h>

@class GIMMe, NSMutableArray, NSMutableDictionary, NSSet, NSString, YTEditDrishtiGraph, YTEditEffectsGraphSettings, YTVideoFormatConverter;
@protocol OS_dispatch_queue, YTEditEffectsGraphDelegate;

@interface YTEditEffectsGraph : NSObject <YTEditDrishtiGraphDelegate, YTSystemNotificationsObserver, YTEditEffectsGraphSettingsObserver>
{
    _Bool _passThrough;
    struct CGSize _defaultOutputSize;
    _Bool _inputYUVColorSpace;
    NSObject<OS_dispatch_queue> *_processingQueue;
    _Bool _didLoadSettings;
    NSSet *_availableAssetIDs;
    YTEditEffectsGraphSettings *_queuedGraphSettings;
    YTEditEffectsGraphSettings *_currentGraphSettings;
    NSMutableDictionary *_userControlEntries;
    YTVideoFormatConverter *_pixelBufferConverter;
    NSMutableArray *_stickerModels;
    _Bool _processingEnabled;
    GIMMe *_gimme;
    NSString *_selectedEffectID;
    id <YTEditEffectsGraphDelegate> _delegate;
    YTEditDrishtiGraph *_drishtiGraph;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTEditDrishtiGraph *drishtiGraph; // @synthesize drishtiGraph=_drishtiGraph;
@property(nonatomic) __weak id <YTEditEffectsGraphDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isProcessingEnabled) _Bool processingEnabled; // @synthesize processingEnabled=_processingEnabled;
@property(copy, nonatomic) NSString *selectedEffectID; // @synthesize selectedEffectID=_selectedEffectID;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (_Bool)processVideoFrame:(struct __CVBuffer *)arg1 timestamp:(double)arg2;
- (_Bool)processVideoFrame:(struct __CVBuffer *)arg1 rotation:(long long)arg2;
- (id)popStickerModels;
- (void)insertStickerModels:(id)arg1 atIndex:(long long)arg2;
- (id)popUserControlEntries;
- (void)addUserControlEntries:(id)arg1;
- (id)popAvailableAssetIDs;
- (void)addAvailableAssetIDs:(id)arg1;
- (void)notifyDelegateDidProcessFrame:(struct __CVBuffer *)arg1 effectID:(id)arg2 timestamp:(double)arg3;
- (void)notifyDelegateDidDropFrame:(struct __CVBuffer *)arg1 processed:(_Bool)arg2;
- (void)swapToDrishtiGraph:(id)arg1 withSettings:(id)arg2;
- (void)queueGraphSettings:(id)arg1;
- (void)constructDrishtiGraphWithSettings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)appDidBecomeActive:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)drishtiGraph:(id)arg1 didOutputVideoFrame:(struct __CVBuffer *)arg2 forEffectID:(id)arg3 timestamp:(double)arg4;
- (void)setGraphSettings:(id)arg1;
- (void)addStickerModels:(id)arg1;
- (void)updateUserControlValue:(id)arg1 forUserControlID:(id)arg2;
- (void)notifyNewAvailableAssetIDs:(id)arg1;
- (void)updateFromGraphProvider:(id)arg1;
- (void)waitUntilIdle;
- (void)stopProcessingNewFrames;
- (void)loadInitialGraphWithOutputSize:(struct CGSize)arg1;
- (void)loadInitialGraphWithDefaultOutputSize;
- (void)startProcessing;
- (_Bool)syncedProcessVideoFrame:(struct __CVBuffer *)arg1 rotation:(long long)arg2 timestamp:(double)arg3;
- (_Bool)processVideoFrame:(struct __CVBuffer *)arg1 rotation:(long long)arg2 timestamp:(double)arg3;
- (id)initWithDefaultOutputSize:(struct CGSize)arg1 passThrough:(_Bool)arg2 inputYUVColorSpace:(_Bool)arg3;
- (id)initWithPassThrough:(_Bool)arg1 inputYUVColorSpace:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

