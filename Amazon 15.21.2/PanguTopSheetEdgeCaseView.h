//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface PanguTopSheetEdgeCaseView : UIView
{
    UILabel *_titleIndactor;
    UILabel *_subTitleIndicator;
}

@property(retain, nonatomic) UILabel *subTitleIndicator; // @synthesize subTitleIndicator=_subTitleIndicator;
@property(retain, nonatomic) UILabel *titleIndactor; // @synthesize titleIndactor=_titleIndactor;
- (void).cxx_destruct;
- (id)getPlaceHolderView;
- (id)getCaseViewWithTitle:(id)arg1 subTitle:(id)arg2;
- (id)getLoadingCaseView;
- (id)getEdgeCaseViewWithState:(long long)arg1;
- (void)layoutSubviews;

@end

