//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UITapGestureRecognizer, YTFormattedStringLabel, YTIFormattedString;

@interface YTSmallArtistWatchCardListExpandView : UIView
{
    YTFormattedStringLabel *_moreLabel;
    UITapGestureRecognizer *_tapRecognizer;
    YTIFormattedString *_text;
}

+ (double)preferredHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) YTIFormattedString *text; // @synthesize text=_text;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end
