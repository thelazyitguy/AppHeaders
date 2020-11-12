//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class GKBArtExtensionPickerButton, NSArray, NSString, UICollectionView, UIPanGestureRecognizer;
@protocol GKBArtExtensionPickerViewDelegate;

@interface GKBArtExtensionPickerView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    UIPanGestureRecognizer *_panGesture;
    unsigned long long _currentIndex;
    _Bool _shouldCenterCategories;
    _Bool _scrubbingEnabled;
    id <GKBArtExtensionPickerViewDelegate> _delegate;
    NSArray *_buttons;
    UICollectionView *_collectionView;
    double _itemSpacing;
    GKBArtExtensionPickerButton *_currentButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GKBArtExtensionPickerButton *currentButton; // @synthesize currentButton=_currentButton;
@property(nonatomic) _Bool scrubbingEnabled; // @synthesize scrubbingEnabled=_scrubbingEnabled;
@property(nonatomic) _Bool shouldCenterCategories; // @synthesize shouldCenterCategories=_shouldCenterCategories;
@property(nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic) __weak id <GKBArtExtensionPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)handlePanGesture:(id)arg1;
- (void)deselectAll;
- (void)selectButtonAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool isButtonSelected;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
