//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface IBGFeaturesSortingView : UIView
{
    UILabel *_sortingLabel;
    UIImageView *_arrowImageView;
}

@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *sortingLabel; // @synthesize sortingLabel=_sortingLabel;
- (void).cxx_destruct;
- (void)setSortingTitle:(id)arg1;
- (void)updateConstraints;
- (id)init;

@end

