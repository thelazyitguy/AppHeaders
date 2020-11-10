//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface YTSlideIndicatorDotsView : UIView
{
    NSArray *_dotViews;
    long long _dotLayout;
    long long _dotColorScheme;
    long long _numberOfDots;
    long long _selectedDotIndex;
}

- (void).cxx_destruct;
@property(nonatomic) long long selectedDotIndex; // @synthesize selectedDotIndex=_selectedDotIndex;
@property(nonatomic) long long numberOfDots; // @synthesize numberOfDots=_numberOfDots;
- (double)dotSpacing;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithDotLayout:(long long)arg1 colorScheme:(long long)arg2;

@end
