//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@protocol MDCBaseTextAreaTextViewDelegate;

@interface MDCBaseTextAreaTextView : UITextView
{
    id <MDCBaseTextAreaTextViewDelegate> _textAreaTextViewDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MDCBaseTextAreaTextViewDelegate> textAreaTextViewDelegate; // @synthesize textAreaTextViewDelegate=_textAreaTextViewDelegate;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (void)setFont:(id)arg1;
- (void)commonMDCBaseTextAreaTextViewInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
