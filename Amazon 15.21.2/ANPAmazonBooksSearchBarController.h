//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANXBarComponentViewController.h"

@class UIViewController;
@protocol ANPTopNavConfigurationController, ANXAppearanceContext;

@interface ANPAmazonBooksSearchBarController : ANXBarComponentViewController
{
    _Bool _amazonBooksSearchActive;
    id <ANXAppearanceContext> _context;
    id <ANPTopNavConfigurationController> _configurationController;
    UIViewController *_searchBarViewController;
    double _animationDuration;
}

@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) UIViewController *searchBarViewController; // @synthesize searchBarViewController=_searchBarViewController;
@property(nonatomic) __weak id <ANPTopNavConfigurationController> configurationController; // @synthesize configurationController=_configurationController;
@property(retain, nonatomic) id <ANXAppearanceContext> context; // @synthesize context=_context;
@property(nonatomic, getter=isAmazonBooksSearchActive) _Bool amazonBooksSearchActive; // @synthesize amazonBooksSearchActive=_amazonBooksSearchActive;
- (void).cxx_destruct;
- (void)createAmazonBooksSearchBar;
- (void)cancelSearch;
- (id)willShowViewController:(id)arg1 context:(id)arg2 previousViewController:(id)arg3 animationDuration:(double)arg4;
- (id)initWithBarTag:(id)arg1 initialState:(id)arg2 configurationController:(id)arg3;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end
