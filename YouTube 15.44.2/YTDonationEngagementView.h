//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GIMMe, UICollectionView, YTQTMButton;

@interface YTDonationEngagementView : UIView
{
    GIMMe *_gimme;
    UICollectionView *_collectionView;
    UIView *_separator;
    YTQTMButton *_actionButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) YTQTMButton *actionButton; // @synthesize actionButton=_actionButton;
@property(readonly, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)disableActionButton;
- (void)enableActionButton;
- (void)addDonateButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)sizeViewsWithSize:(struct CGSize)arg1;
- (void)fillActionButtonFromRenderer:(id)arg1;
- (id)initWithCollectionView:(id)arg1;

@end

