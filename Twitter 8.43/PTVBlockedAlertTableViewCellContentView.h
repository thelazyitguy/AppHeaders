//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface PTVBlockedAlertTableViewCellContentView : UIView
{
    UILabel *_alertLabel;
    NSString *_blockedUsername;
    _Bool _useLargeChatFont;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useLargeChatFont; // @synthesize useLargeChatFont=_useLargeChatFont;
- (void)attributedTextChanged;
- (void)setBlockedUsername:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
