//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTFreeTierEntityContextMenuButton, UIButton;
@protocol SPTBarButtonItemManager, SPTFreeTierAddToCollectionButton, SPTFreeTierEntityContextMenuButtonViewModel, SPTFreeTierEntityFeedbackButtonViewModel;

@interface SPTFreeTierEntityNavigationDecorator : NSObject
{
    SPTFreeTierEntityContextMenuButton *_contextMenuButton;
    id <SPTFreeTierEntityContextMenuButtonViewModel> _contextMenuButtonViewModel;
    UIButton<SPTFreeTierAddToCollectionButton> *_addToCollectionButton;
    id <SPTBarButtonItemManager> _barButtonItemManager;
    id <SPTFreeTierEntityFeedbackButtonViewModel> _feedbackButtonViewModel;
    double _addToCollectionButtonAlpha;
}

- (void).cxx_destruct;
@property(nonatomic) double addToCollectionButtonAlpha; // @synthesize addToCollectionButtonAlpha=_addToCollectionButtonAlpha;
@property(retain, nonatomic) id <SPTFreeTierEntityFeedbackButtonViewModel> feedbackButtonViewModel; // @synthesize feedbackButtonViewModel=_feedbackButtonViewModel;
@property(retain, nonatomic) id <SPTBarButtonItemManager> barButtonItemManager; // @synthesize barButtonItemManager=_barButtonItemManager;
@property(retain, nonatomic) UIButton<SPTFreeTierAddToCollectionButton> *addToCollectionButton; // @synthesize addToCollectionButton=_addToCollectionButton;
@property(retain, nonatomic) id <SPTFreeTierEntityContextMenuButtonViewModel> contextMenuButtonViewModel; // @synthesize contextMenuButtonViewModel=_contextMenuButtonViewModel;
@property(retain, nonatomic) SPTFreeTierEntityContextMenuButton *contextMenuButton; // @synthesize contextMenuButton=_contextMenuButton;
- (id)createItemsWithFeedbackButtonViewModel:(id)arg1 contextMenuButtonViewModel:(id)arg2;
- (void)updateNavigationItemDecoratorAlpha:(double)arg1;
- (void)decoratePageController:(id)arg1;
- (id)initWithBarButtonItemManager:(id)arg1 feedbackButtonViewModel:(id)arg2 contextMenuButtonViewModel:(id)arg3;

@end
