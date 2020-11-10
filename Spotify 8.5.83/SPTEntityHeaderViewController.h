//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@protocol SPTEntityHeaderContentController;

@interface SPTEntityHeaderViewController : UIViewController
{
}

- (void)forceLayoutUpdate;
- (double)minimumHeight;
- (void)attachToScrollView:(id)arg1 inViewController:(id)arg2;
- (id)initWithContentViewController:(id)arg1;

// Remaining properties
@property(readonly, nonatomic, getter=isAtMinimumHeight) _Bool atMinimumHeight; // @dynamic atMinimumHeight;
@property(readonly, nonatomic) struct UIEdgeInsets bounceOffsets; // @dynamic bounceOffsets;
@property(readonly, nonatomic) UIViewController<SPTEntityHeaderContentController> *contentViewController; // @dynamic contentViewController;
@property(nonatomic) _Bool drawBottomLineLayer; // @dynamic drawBottomLineLayer;
@property(nonatomic) _Bool drawDropShadow; // @dynamic drawDropShadow;
@property(readonly, nonatomic) struct CGRect visibleRect; // @dynamic visibleRect;

@end

