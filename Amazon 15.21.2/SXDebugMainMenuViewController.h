//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SXDebugViewController.h"

#import "SXDebugSegmentedControlCellDelegate-Protocol.h"
#import "SXDebugTextFieldCellDelegate-Protocol.h"

@class NSString, SXDebugSegmentedControlCell, SXDebugTextFieldCell;

@interface SXDebugMainMenuViewController : SXDebugViewController <SXDebugSegmentedControlCellDelegate, SXDebugTextFieldCellDelegate>
{
    SXDebugSegmentedControlCell *_serverControl;
    SXDebugTextFieldCell *_serverHost;
    SXDebugSegmentedControlCell *_prefetchingSuppressionControl;
}

@property(retain, nonatomic) SXDebugSegmentedControlCell *prefetchingSuppressionControl; // @synthesize prefetchingSuppressionControl=_prefetchingSuppressionControl;
@property(retain, nonatomic) SXDebugTextFieldCell *serverHost; // @synthesize serverHost=_serverHost;
@property(retain, nonatomic) SXDebugSegmentedControlCell *serverControl; // @synthesize serverControl=_serverControl;
- (void).cxx_destruct;
- (void)overrideMarketplaceForHost:(id)arg1;
- (void)textFieldCellDidEndEndEditing:(id)arg1 withText:(id)arg2;
- (void)prefetchingSwitchChanged:(id)arg1;
- (void)segmentedControlCell:(id)arg1 didChangeSelectedIndex:(long long)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)reload;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
