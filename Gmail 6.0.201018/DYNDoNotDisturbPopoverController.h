//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class DYNCollectionView, DYNCollectionViewBaseDataSourceAndDelegate, DYNDoNotDisturbOptionContentViewObject, NSArray, NSString;
@protocol DYNDoNotDisturbPopoverControllerDelegate, GIPAccountID;

@interface DYNDoNotDisturbPopoverController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    _Bool _dndEnabled;
    id <GIPAccountID> _accountId;
    DYNCollectionView *_collectionView;
    DYNCollectionViewBaseDataSourceAndDelegate *_collectionViewDataSourceAndDelegate;
    NSArray *_options;
    DYNDoNotDisturbOptionContentViewObject *_stopSnoozingOption;
    DYNDoNotDisturbOptionContentViewObject *_notificationSettingsOption;
    id <DYNDoNotDisturbPopoverControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <DYNDoNotDisturbPopoverControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onPreferredContentSizeChanged:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)updateModel;
- (void)populateOptions;
- (void)setUpCollectionView;
- (void)viewDidLoad;
- (id)initWithAccountId:(id)arg1 dndEnabled:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
