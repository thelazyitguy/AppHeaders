//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, UIButton, UICollectionView, UILabel;

@interface _TtC3QVC29SquareTradeCollectionViewCell : UICollectionViewCell
{
    // Error parsing type: , name: headerHeightiPhone
    // Error parsing type: , name: headerHeightiPad
    // Error parsing type: , name: bottomInset
    // Error parsing type: , name: delegate
    // Error parsing type: , name: presentingProductNumber
    // Error parsing type: , name: squareTradePlansLegacyCompatabile
    // Error parsing type: , name: productNbr
    // Error parsing type: , name: titles
    // Error parsing type: , name: viewHeight
    // Error parsing type: , name: collectionViewTopConstraint
    // Error parsing type: , name: infoButton
    // Error parsing type: , name: collectionView
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: squareTradePlans
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)onInfoButtonTappedWithSender:(id)arg1;
- (void)contractOnlyOptionSelected;
- (void)onQuestionButtonTappedWithSender:(id)arg1;
- (void)updateLayout;
- (void)applyLayoutAttributes:(id)arg1;
- (void)awakeFromNib;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView;
@property(nonatomic) __weak UIButton *infoButton; // @synthesize infoButton;
@property(nonatomic, retain) NSLayoutConstraint *collectionViewTopConstraint; // @synthesize collectionViewTopConstraint;

@end
