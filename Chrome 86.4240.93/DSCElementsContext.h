//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/XUIElementsContext.h>

#import <ChromeInternal/DSCVideoContainerTracking-Protocol.h>
#import <ChromeInternal/DSCViewTracking-Protocol.h>
#import <ChromeInternal/XUIExtensionRegistrarDelegate-Protocol.h>

@class DSCCardListModel, DSCExtensionManager, NSHashTable, NSMutableSet, NSString, UIView, UIViewController;
@protocol DSCViewActionDelegate;

@interface DSCElementsContext : XUIElementsContext <XUIExtensionRegistrarDelegate, DSCViewTracking, DSCVideoContainerTracking>
{
    NSMutableSet *_visibleVideoContainers;
    UIViewController<DSCViewActionDelegate> *_viewController;
    DSCCardListModel *_model;
    long long _interactedCardIndex;
    UIView *_interactedCardView;
    NSMutableSet *_visibleViews;
    DSCExtensionManager *_extensionManager;
    NSMutableSet *_listeners;
    NSHashTable *_viewTrackingObservers;
}

+ (id)persistentStoreForAccount:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *viewTrackingObservers; // @synthesize viewTrackingObservers=_viewTrackingObservers;
@property(retain, nonatomic) NSMutableSet *listeners; // @synthesize listeners=_listeners;
@property(retain, nonatomic) DSCExtensionManager *extensionManager; // @synthesize extensionManager=_extensionManager;
@property(retain, nonatomic) NSMutableSet *visibleViews; // @synthesize visibleViews=_visibleViews;
@property(retain, nonatomic) UIView *interactedCardView; // @synthesize interactedCardView=_interactedCardView;
@property(nonatomic) long long interactedCardIndex; // @synthesize interactedCardIndex=_interactedCardIndex;
@property(nonatomic) __weak DSCCardListModel *model; // @synthesize model=_model;
@property(nonatomic) __weak UIViewController<DSCViewActionDelegate> *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) NSMutableSet *visibleVideoContainers; // @synthesize visibleVideoContainers=_visibleVideoContainers;
- (void)notifyVisibleViewsDidChange;
- (void)handlePropertiesExtensionNumber:(int)arg1 properties:(id)arg2 controller:(id)arg3 context:(id)arg4;
- (void)handleCommandNumber:(int)arg1 command:(id)arg2 sender:(id)arg3 context:(id)arg4 controller:(id)arg5 gesture:(id)arg6 handler:(CDUnknownBlockType)arg7;
- (_Bool)canHandlePropertiesExtensionNumber:(int)arg1;
- (_Bool)canHandleCommandNumber:(int)arg1;
- (id)themePicker;
- (id)fontLoader;
- (id)clientResourceLoader;
- (void)videoContainerDidExitVisibleState:(id)arg1;
- (void)videoContainerDidEnterVisibleState:(id)arg1;
- (void)removeVideoNodeListener:(id)arg1;
- (void)addVideoNodeListener:(id)arg1;
- (id)currentlyVisibleViews;
- (void)stopTrackingAllViews;
- (void)viewDidExitVisibleState:(id)arg1;
- (void)viewDidEnterVisibleState:(id)arg1;
- (void)removeViewTrackingObserver:(id)arg1;
- (void)addViewTrackingObserver:(id)arg1;
- (void)processElementsOutputs:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
