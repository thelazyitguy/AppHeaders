//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SXSubNavView.h"

#import "AFMSubNavPopoverDelegate-Protocol.h"
#import "PXMSubNavView-Protocol.h"

@class NSString, PXMFreeshippingSubNavView, PXMWayfinderSubNavView;

@interface PXMSubNavView : SXSubNavView <AFMSubNavPopoverDelegate, PXMSubNavView>
{
    PXMWayfinderSubNavView *_wayfinderSubNavView;
    PXMFreeshippingSubNavView *_freeshippingSubNavView;
}

@property(retain, nonatomic) PXMFreeshippingSubNavView *freeshippingSubNavView; // @synthesize freeshippingSubNavView=_freeshippingSubNavView;
@property(retain, nonatomic) PXMWayfinderSubNavView *wayfinderSubNavView; // @synthesize wayfinderSubNavView=_wayfinderSubNavView;
- (void).cxx_destruct;
- (void)initConstraints;
- (void)initFreeshippingWithEventHandler:(id)arg1;
- (void)initWayfinderWithEventHandler:(id)arg1;
- (void)initUserInterface;
- (void)expandPXMSubNavV:(double)arg1;
- (void)updateSubNavLayout;
- (_Bool)enableFreeShipping;
- (void)displayUrl:(id)arg1;
- (void)displayMenuWithContent:(id)arg1;
- (void)subNavPopover:(id)arg1 displayPopoverWithContent:(id)arg2;
- (void)subNavPopover:(id)arg1 displayBrowsePath:(id)arg2;
- (void)subNavPopover:(id)arg1 displayUrl:(id)arg2;
- (void)updateWithNotification:(id)arg1;
- (void)updateContent;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithVerticalOrigin:(double)arg1 width:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
