//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface _TtC8Chipotle15BottomButtonBar : UIView
{
    // Error parsing type: , name: nextOrSubmitButton
    // Error parsing type: , name: backButton
    // Error parsing type: , name: delegate
    // Error parsing type: , name: backLabel
    // Error parsing type: , name: nextLabel
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didSelectNextOrSubmit:(id)arg1;
- (void)didSelectBack:(id)arg1;
@property(nonatomic) __weak UILabel *nextLabel; // @synthesize nextLabel;
@property(nonatomic) __weak UILabel *backLabel; // @synthesize backLabel;
@property(nonatomic) __weak UIButton *backButton; // @synthesize backButton;
@property(nonatomic) __weak UIButton *nextOrSubmitButton; // @synthesize nextOrSubmitButton;

@end

