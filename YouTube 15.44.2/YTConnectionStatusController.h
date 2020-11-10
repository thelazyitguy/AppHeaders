//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTReachabilityObserver-Protocol.h"
#import "YTResponder-Protocol.h"

@class GIMMe, NSHashTable, NSString, YTIMealbarPromoRenderer, YTTimedAction;
@protocol YTConnectionStatusControllerDelegate, YTReachabilityController, YTResponder;

@interface YTConnectionStatusController : NSObject <YTReachabilityObserver, YTResponder>
{
    id <YTReachabilityController> _reachabilityController;
    YTIMealbarPromoRenderer *_mealBarPromoRenderer;
    NSHashTable *_observers;
    _Bool _didShowLibraryTabForInitialStart;
    _Bool _isConnected;
    GIMMe *_gimme;
    id <YTConnectionStatusControllerDelegate> _delegate;
    YTTimedAction *_connectionTimer;
}

+ (id)mealbarWithTitle:(id)arg1 message:(id)arg2 VEType:(int)arg3 actionButtonText:(id)arg4 actionButtonVEType:(int)arg5 dismissButtonText:(id)arg6 dismissButtonVEType:(int)arg7;
+ (id)downloadsOnlyMealbar;
+ (id)recommendationsOnlyMealbar;
+ (id)recommendationsAndDownloadsMealbar;
- (void).cxx_destruct;
@property(retain, nonatomic) YTTimedAction *connectionTimer; // @synthesize connectionTimer=_connectionTimer;
@property(readonly, nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(nonatomic) __weak id <YTConnectionStatusControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (id)downloadsPageNavigationResponderEvent;
- (id)libraryTabNavigationResponderEvent;
- (_Bool)isVisibleViewControllerLibraryTab;
- (void)updateConnectionStatus;
- (void)showMealbar:(id)arg1;
- (void)showDownloadsAvailableMealbarIfNeeded;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void)removeConnectionStatusObserver:(id)arg1;
- (void)addConnectionStatusObserver:(id)arg1;
- (void)reachabilityDidChange;
- (void)shutdown;
- (void)showLibraryTabForInitialStartWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)isBrowseIdentifierAutoRefreshable:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

