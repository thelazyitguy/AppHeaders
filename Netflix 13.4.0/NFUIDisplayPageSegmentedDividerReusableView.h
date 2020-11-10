//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import "DisplayPageCollectionCell-Protocol.h"
#import "NFUISegmentedControllerViewDelegate-Protocol.h"
#import "NFUIVideoDisplayPageCellProtocol-Protocol.h"

@class AbstractDisplayPageCellViewModel, NFUIDisplayPageSegmentedDivider, NFUIVideoDisplayPage, NSString;
@protocol NFUIDisplayPageProtocol><NFUIDisplayPageViewModelDelegateProtocol><NFUIDisplayPageCollectionViewProtocol;

@interface NFUIDisplayPageSegmentedDividerReusableView : UICollectionReusableView <DisplayPageCollectionCell, NFUIVideoDisplayPageCellProtocol, NFUISegmentedControllerViewDelegate>
{
    AbstractDisplayPageCellViewModel *model;
    NFUIVideoDisplayPage *_collectionViewController;
    NFUIDisplayPageSegmentedDivider *_dividerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NFUIDisplayPageSegmentedDivider *dividerView; // @synthesize dividerView=_dividerView;
@property(nonatomic) __weak NFUIVideoDisplayPage *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
@property(retain, nonatomic) AbstractDisplayPageCellViewModel *model; // @synthesize model;
- (void)segmentedSelectedViewDidChange:(id)arg1 withDeselectedView:(id)arg2;
- (struct CGSize)calculatedSize:(double)arg1;
- (void)configureWithData:(id)arg1 withIndexPath:(id)arg2 isLayoutPass:(_Bool)arg3;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <NFUIDisplayPageProtocol><NFUIDisplayPageViewModelDelegateProtocol><NFUIDisplayPageCollectionViewProtocol> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

