//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Funny/UITextFieldDelegate-Protocol.h>

@class NSString, UIButton, UILabel, UITextField;

@interface IFTextFieldAlertView : UIView <UITextFieldDelegate>
{
    CDUnknownBlockType _sendAction;
    CDUnknownBlockType _closeAction;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UITextField *_inputTextField;
    UIButton *_sendButton;
    UIButton *_backgroundButton;
    UIView *_alertContainerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *alertContainerView; // @synthesize alertContainerView=_alertContainerView;
@property(retain, nonatomic) UIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UITextField *inputTextField; // @synthesize inputTextField=_inputTextField;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType closeAction; // @synthesize closeAction=_closeAction;
@property(copy, nonatomic) CDUnknownBlockType sendAction; // @synthesize sendAction=_sendAction;
- (void)createSubviews;
- (void)sendSuggestion;
- (void)processInputText;
- (void)keyboardWillShow:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)clearInputText;
- (void)textFieldDidChange:(id)arg1;
- (void)close;
- (void)sendSuggestion:(id)arg1;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
