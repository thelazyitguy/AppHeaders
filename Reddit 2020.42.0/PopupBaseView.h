//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

@class NSArray, UIButton;

@interface PopupBaseView : BaseView
{
    _Bool _alreadyLayout;
    UIButton *_confirmButton;
    NSArray *_textFields;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool alreadyLayout; // @synthesize alreadyLayout=_alreadyLayout;
@property(readonly, nonatomic) NSArray *textFields; // @synthesize textFields=_textFields;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
- (_Bool)becomeFirstResponder;
@property(readonly, nonatomic) double preferredHeight;
- (void)layoutSubviews;
- (id)initWithTextFields:(id)arg1;
- (id)init;

@end

