//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AsyncDisplayKit/ASDataControllerDelegate-Protocol.h>

@class NSHashTable, NSSet, NSString;
@protocol ASLayoutController, ASRangeControllerDataSource, ASRangeControllerDelegate;

@interface ASRangeController : NSObject <ASDataControllerDelegate>
{
    id <ASLayoutController> _layoutController;
    id <ASRangeControllerDataSource> _dataSource;
    id <ASRangeControllerDelegate> _delegate;
    _Bool _rangeIsValid;
    _Bool _needsRangeUpdate;
    NSSet *_allPreviousIndexPaths;
    NSHashTable *_visibleNodes;
    BOOL _currentRangeMode;
    _Bool _contentHasBeenScrolled;
    _Bool _preserveCurrentRangeMode;
    _Bool _didRegisterForNodeDisplayNotifications;
    double _pendingDisplayNodesTimestamp;
    unsigned char _previousScrollDirection;
}

+ (void)willEnterForeground:(id)arg1;
+ (void)didEnterBackground:(id)arg1;
+ (void)didReceiveMemoryWarning:(id)arg1;
+ (void)setRangeModeForMemoryWarnings:(BOOL)arg1;
+ (void)registerSharedApplicationNotifications;
+ (id)allRangeControllersWeakSet;
+ (BOOL)rangeModeForInterfaceState:(unsigned char)arg1 currentRangeMode:(BOOL)arg2;
+ (_Bool)isFirstRangeUpdateForRangeMode:(BOOL)arg1;
+ (void)layoutDebugOverlayIfNeeded;
- (void).cxx_destruct;
@property(nonatomic) _Bool contentHasBeenScrolled; // @synthesize contentHasBeenScrolled=_contentHasBeenScrolled;
@property(nonatomic) __weak id <ASRangeControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <ASRangeControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) id <ASLayoutController> layoutController; // @synthesize layoutController=_layoutController;
@property(readonly, copy) NSString *description;
- (id)descriptionWithIndexPaths:(id)arg1;
- (void)clearPreloadedData;
- (void)clearContents;
- (void)dataController:(id)arg1 updateWithChangeSet:(id)arg2 updates:(CDUnknownBlockType)arg3;
- (CDStruct_c3b9c2ee)tuningParametersForRangeMode:(BOOL)arg1 rangeType:(long long)arg2;
- (void)setTuningParameters:(CDStruct_c3b9c2ee)arg1 forRangeMode:(BOOL)arg2 rangeType:(long long)arg3;
- (void)configureContentView:(id)arg1 forCellNode:(id)arg2;
- (void)scheduledNodesDidDisplay:(id)arg1;
- (void)registerForNodeDisplayNotificationsForInterfaceStateIfNeeded:(unsigned char)arg1;
- (void)_updateVisibleNodeIndexPaths;
- (void)_setVisibleNodes:(id)arg1;
- (void)updateCurrentRangeWithMode:(BOOL)arg1;
- (void)updateRanges;
- (void)updateIfNeeded;
- (void)setNeedsUpdate;
- (unsigned char)interfaceState;
- (void)dealloc;
- (id)init;
- (void)updateRangeController:(id)arg1 withScrollableDirections:(unsigned char)arg2 scrollDirection:(unsigned char)arg3 rangeMode:(BOOL)arg4 displayTuningParameters:(CDStruct_c3b9c2ee)arg5 preloadTuningParameters:(CDStruct_c3b9c2ee)arg6 interfaceState:(unsigned char)arg7;
- (void)addRangeControllerToRangeDebugOverlay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

