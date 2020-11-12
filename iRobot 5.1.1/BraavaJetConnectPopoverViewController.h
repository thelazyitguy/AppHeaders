//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AspenUIComponents/ActivityPopoverViewController.h>

#import "UIPopoverPresentationControllerDelegate-Protocol.h"

@class CMRDiscoveredAsset, NSString;

@interface BraavaJetConnectPopoverViewController : ActivityPopoverViewController <UIPopoverPresentationControllerDelegate>
{
    _Bool _viewDismissible;
    CMRDiscoveredAsset *_discoveredAsset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CMRDiscoveredAsset *discoveredAsset; // @synthesize discoveredAsset=_discoveredAsset;
- (void)configureAccessibility;
- (_Bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (void)showAsConnectedAnimated:(_Bool)arg1;
- (void)showAsConnecting;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
