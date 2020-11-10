//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTStyledViewController.h>

#import "YTGraftingViewController-Protocol.h"
#import "YTPageStyleProvider-Protocol.h"
#import "YTResponder-Protocol.h"
#import "YTTopController-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, YTCollectionViewController, YTCommandResponderEvent, YTHotConfig, YTICommand;
@protocol YTResponder;

@interface YTSettingsMultiplePickersViewController : YTStyledViewController <YTPageStyleProvider, YTResponder, YTGraftingViewController, YTTopController>
{
    NSString *_navTitle;
    NSArray *_pickerSectionTitles;
    NSMutableArray *_selectedItemIndices;
    NSMutableArray *_itemsForAllPickers;
    NSMutableArray *_settingsControllers;
    YTCollectionViewController *_collectionViewController;
    YTHotConfig *_hotConfig;
    YTICommand *_navigationEndpoint;
    NSMutableDictionary *_mobileNetworkVisualElements;
    NSMutableDictionary *_wifiNetworksVisualElements;
}

- (void).cxx_destruct;
- (id)attachAndUpdateProxyButtonForWifiVideoQualitySetting:(int)arg1;
- (id)attachAndUpdateProxyButtonForMobileNetworkVideoQualitySetting:(int)arg1;
- (id)attachAndUpdateProxyButtonForSetting:(int)arg1 andValue:(id)arg2;
- (_Bool)disableUserInteractionForSetting:(int)arg1;
- (_Bool)collectionViewNeedsUpdateAfterChangeInSetting:(int)arg1;
- (void)maybeDisplayToastMessageForSetting:(int)arg1;
- (void)updateCollectionViewForSettings:(id)arg1;
- (void)dismiss;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (void)relogScreen;
- (id)navEndpoint;
@property(readonly, nonatomic) long long pageStyle;
@property(readonly, nonatomic) NSArray *items;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)showSectionForSettings:(id)arg1 navTitle:(id)arg2 sectionTitles:(id)arg3 defaultValues:(id)arg4 selectBlocks:(id)arg5;
- (void)showVideoQualityPreferencesSection;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
@property(retain, nonatomic) YTCommandResponderEvent *sourceEvent;
@property(readonly) Class superclass;

@end

