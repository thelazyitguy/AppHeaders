//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANXBarComponentViewController.h"

@class UIViewController;
@protocol ANXAppearanceContext;

@interface ANPAmazonBooksButtonsBarController : ANXBarComponentViewController
{
    id <ANXAppearanceContext> _context;
    UIViewController *_buttonsBarViewController;
    double _animationDuration;
}

@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) UIViewController *buttonsBarViewController; // @synthesize buttonsBarViewController=_buttonsBarViewController;
@property(retain, nonatomic) id <ANXAppearanceContext> context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)createAmazonBooksButtonsBar;
- (id)willShowViewController:(id)arg1 context:(id)arg2 previousViewController:(id)arg3 animationDuration:(double)arg4;
- (id)initWithBarTag:(id)arg1 initialState:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end
