//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/YTEditAudioAssetProgressObserver-Protocol.h>
#import <Module_Framework/YTEditAudioBalanceSliderViewDelegate-Protocol.h>
#import <Module_Framework/YTEditFeatureTab-Protocol.h>

@class NSArray, NSString, UIView, YTEditAudioSwapTabView;
@protocol YTEditAudioSwapDelegate;

@interface YTEditAudioSwapTabViewController : UIViewController <YTEditAudioAssetProgressObserver, YTEditAudioBalanceSliderViewDelegate, YTEditFeatureTab>
{
    CDStruct_1b6d18a9 _elapsedTime;
    CDStruct_1b6d18a9 _videoDuration;
    _Bool _expanded;
    _Bool _repeat;
    _Bool _shouldAutorotate;
    int _veType;
    UIView *_containerView;
    id <YTEditAudioSwapDelegate> _delegate;
    YTEditAudioSwapTabView *_tabView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTEditAudioSwapTabView *tabView; // @synthesize tabView=_tabView;
@property(nonatomic) __weak id <YTEditAudioSwapDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldAutorotate; // @synthesize shouldAutorotate=_shouldAutorotate;
@property(readonly, nonatomic) int veType; // @synthesize veType=_veType;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
- (id)tabAccessibilityIdentifier;
@property(readonly, nonatomic) NSArray *interactionLoggingButtons;
- (long long)featurePresentationStyle;
- (double)desiredViewHeight;
- (id)title;
- (id)imageSelected:(_Bool)arg1;
- (void)audioBalanceSliderView:(id)arg1 valueDidChange:(double)arg2;
- (void)assetContainer:(id)arg1 didFinishDownloadingLocalAsset:(id)arg2;
- (void)assetContainer:(id)arg1 didChangeFractionLoaded:(double)arg2;
- (void)setExpanded:(_Bool)arg1;
- (void)updateTabViewInContainer;
- (void)didTapRepeatToggle;
- (void)didTapAddAudioButton;
- (void)didTapRemoveButton;
- (void)didTapControlsButton;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)setElapsedTime:(CDStruct_1b6d18a9)arg1;
- (void)setVideoDuration:(CDStruct_1b6d18a9)arg1;
- (void)setTrackMetadata:(id)arg1 assetContainer:(id)arg2 volume:(double)arg3;
- (unsigned long long)supportedInterfaceOrientations;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

