//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTStyledViewController.h>

@class GIMMe, YTCollectionViewController, YTPageStyleController;
@protocol YTResponder;

@interface YTActiveStateUIColorsSettingsViewController : YTStyledViewController
{
    YTCollectionViewController *_collectionViewController;
    YTPageStyleController *_pageStyleController;
    id <YTResponder> _parentResponder;
}

- (void).cxx_destruct;
- (id)parentResponder;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(nonatomic) __weak GIMMe *gimme;

@end

