//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@class NSLayoutConstraint, UIView;

@interface ApptentiveSurveyCollectionView : UICollectionView
{
    UIView *_collectionHeaderView;
    UIView *_collectionFooterView;
    NSLayoutConstraint *_footerConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *footerConstraint; // @synthesize footerConstraint=_footerConstraint;
@property(retain, nonatomic) UIView *collectionFooterView; // @synthesize collectionFooterView=_collectionFooterView;
@property(retain, nonatomic) UIView *collectionHeaderView; // @synthesize collectionHeaderView=_collectionHeaderView;

@end
