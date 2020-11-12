//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GBTPlainButton, UIImageView, UILabel;
@protocol HUBColorScheme, SenderDetailsSmimeInfoViewDelegate;

@interface SenderDetailsSmimeInfoView : UIView
{
    UIImageView *_iconImageView;
    UILabel *_label;
    GBTPlainButton *_moreInfoButton;
    _Bool _forceMoreInfoButtonToAnotherRow;
    id <HUBColorScheme> _colorScheme;
    id <SenderDetailsSmimeInfoViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SenderDetailsSmimeInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)showMoreInfo:(id)arg1;
- (void)setIcon:(id)arg1 labelText:(id)arg2 moreInfoButtonText:(id)arg3 forceMoreInfoButtonToAnotherRow:(_Bool)arg4;
- (void)setIcon:(id)arg1 labelText:(id)arg2 moreInfoButtonText:(id)arg3;
- (void)setIcon:(id)arg1 labelText:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end
