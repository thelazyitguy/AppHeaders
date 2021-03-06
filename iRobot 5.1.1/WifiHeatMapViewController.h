//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseMissionHistoryItemViewController.h"

#import "CMRHistoryUIServiceDataCallback-Protocol.h"

@class CMRRobotMissionHistoryItem, NSLayoutConstraint, NSString, UIView, WifiHeatMapBottomSheetViewController;

@interface WifiHeatMapViewController : BaseMissionHistoryItemViewController <CMRHistoryUIServiceDataCallback>
{
    UIView *_bottomSheetContainerView;
    NSLayoutConstraint *_bottomSheetHiddenConstraint;
    WifiHeatMapBottomSheetViewController *_bottomSheetViewController;
    CMRRobotMissionHistoryItem *_historyItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CMRRobotMissionHistoryItem *historyItem; // @synthesize historyItem=_historyItem;
@property(nonatomic) __weak WifiHeatMapBottomSheetViewController *bottomSheetViewController; // @synthesize bottomSheetViewController=_bottomSheetViewController;
@property(retain, nonatomic) NSLayoutConstraint *bottomSheetHiddenConstraint; // @synthesize bottomSheetHiddenConstraint=_bottomSheetHiddenConstraint;
@property(nonatomic) __weak UIView *bottomSheetContainerView; // @synthesize bottomSheetContainerView=_bottomSheetContainerView;
- (void)configureAccessibility;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)onHistoryUIServiceDataChanged:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

