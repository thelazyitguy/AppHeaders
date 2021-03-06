//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANPTopNavButtonController.h"

@class ANPExpandableTouchAreaButton;
@protocol ANPAssetConfig;

@interface ANPTopNavBackButtonController : ANPTopNavButtonController
{
    ANPExpandableTouchAreaButton *_backButton;
    id <ANPAssetConfig> _currentBackButtonIconAsset;
}

@property(retain, nonatomic) id <ANPAssetConfig> currentBackButtonIconAsset; // @synthesize currentBackButtonIconAsset=_currentBackButtonIconAsset;
@property(retain, nonatomic) ANPExpandableTouchAreaButton *backButton; // @synthesize backButton=_backButton;
- (void).cxx_destruct;
- (void)chromeContextWillChange:(id)arg1 previousContext:(id)arg2 chromeContext:(id)arg3;
- (void)didChangeMarketplace;
- (void)backTapped:(id)arg1;
- (void)setExtraTouchInsets:(struct UIEdgeInsets)arg1;
- (id)createBackButton:(id)arg1;
- (void)loadView;

@end

